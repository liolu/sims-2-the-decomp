/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct BitStream {
    u32 pos;
    u32 size;
    u8 *buf;
} BitStream;

u8 func_0203d46c(BitStream *bs, s32 count) {
    u32 pos   = bs->pos;
    u8 *p     = bs->buf + (pos >> 3);
    u32 shift = pos & 7;
    u32 bits  = ((u32) p[0] >> shift) | (p[1] << (8 - shift));
    bits &= (1 << count) - 1;
    bs->pos = pos + count;
    return bits;
}
