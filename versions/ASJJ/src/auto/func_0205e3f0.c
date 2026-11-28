/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c, d;
} Q;
typedef struct {
    u8 x, y;
} P2;

void func_0205e3f0(u8 *arg0, u8 *arg1) {
    u8 i;
    u8 *e;
    u8 *t;

    for (i = 0; i < 10; i++) {
        e = arg0 + i * 0x24;
        if (e[0x26] == 0) {
            *(s32 *) (e + 8)    = *(s32 *) arg1;
            *(Q *) (e + 0xc)    = *(Q *) (arg1 + 4);
            t                   = arg0 + 0x27;
            *(P2 *) (e + 0x1c)  = *(P2 *) (arg1 + 0x14);
            *(P2 *) (e + 0x1e)  = *(P2 *) (arg1 + 0x16);
            *(s32 *) (e + 0x20) = *(s32 *) (arg1 + 0x18);
            *(u16 *) (e + 0x24) = *(u16 *) (arg1 + 0x1c);
            e[0x26]             = arg1[0x1e];
            (t + i * 0x24)[0]   = arg1[0x1f];
            *(s32 *) (e + 0x28) = *(s32 *) (arg1 + 0x20);
            (t + i * 0x24)[0]   = 0;
            arg0[0]             = 1;
            arg0[0x194]         = 0;
            return;
        }
    }
}
