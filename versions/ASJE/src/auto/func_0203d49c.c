/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct BitStream {
    u32 pos;
    u32 size;
    u8 *buf;
} BitStream;

void func_0203d49c(BitStream *bs, s32 val, s32 count) {
    u32 mask      = (1 << count) - 1;
    u32 pos       = bs->pos;
    u8 *buf       = bs->buf;
    u32 shift     = pos & 7;
    u8 *p         = buf + (pos >> 3);
    u8 lo         = buf[pos >> 3];
    u8 hi         = p[1];
    lo            = (u8) (lo & ~(mask << shift)) | (val << shift);
    hi            = (u8) (hi & ~(mask >> (8 - shift))) | (val >> (8 - shift));
    buf[pos >> 3] = lo;
    p[1]          = hi;
    bs->pos += count;
}
