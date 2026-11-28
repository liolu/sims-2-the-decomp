/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct BitStream {
    u32 pos;
    u32 size;
    u8 *buf;
} BitStream;

u32 func_0203d368(BitStream *bs, s32 count) {
    u32 pos   = bs->pos;
    u32 *p    = (u32 *) bs->buf + (pos >> 5);
    u32 shift = pos & 31;
    u32 bits  = (p[0] >> shift) | (p[1] << (32 - shift));
    bits &= (1 << count) - 1;
    bs->pos = pos + count;
    return bits;
}
