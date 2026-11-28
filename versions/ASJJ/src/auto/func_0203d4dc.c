/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct BitStream {
    u32 pos;
    u32 size;
    u8 *buf;
} BitStream;

void func_0203d4dc(BitStream *bs, u32 val, s32 count) {
    u32 mask  = (1 << count) - 1;
    u32 pos   = bs->pos;
    u32 *p    = (u32 *) bs->buf + (pos >> 5);
    u32 shift = pos & 31;
    u32 lo    = p[0];
    u32 hi    = p[1];
    lo        = (lo & ~(mask << shift)) | (val << shift);
    hi        = (hi & ~(mask >> (32 - shift))) | (val >> (32 - shift));
    p[0]      = lo;
    p[1]      = hi;
    bs->pos += count;
}
