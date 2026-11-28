/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u32 pos;
    u32 pad;
    u8 *buf;
} Bits;
void func_0203d5b8(Bits *s, s32 arg1) {
    u32 p;
    u8 *b;
    u32 sh;
    u8 cur;
    p         = s->pos;
    b         = s->buf;
    sh        = p & 7;
    cur       = b[p >> 3];
    b[p >> 3] = (u8) (cur & ~(1u << sh)) | (arg1 << sh);
    s->pos    = s->pos + 1;
}
