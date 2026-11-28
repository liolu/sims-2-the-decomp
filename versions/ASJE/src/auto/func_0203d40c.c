/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct BitStream {
    u32 pos;
    u32 size;
    u8 *buf;
} BitStream;

u32 func_0203d40c(BitStream *bs) {
    u32 pos  = bs->pos;
    u32 bits = (u32) bs->buf[pos >> 3] >> (pos & 7);
    bs->pos  = pos + 1;
    return bits & 1;
}
