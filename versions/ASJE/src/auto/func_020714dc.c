/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s16 data_0212b220[];
void func_020714dc(u8 *o) {
    s32 i;
    s16 *dst = (s16 *) (o + 6 + ((o[0x306] & 1) ^ 1) * 0x180);
    for (i = 0; i < 0xc0; i++) {
        s32 j  = (i == 0xbf) ? 0 : i + 1;
        s32 s  = data_0212b220[((((j * (j + 0x80) + (o[0x306] << 7)) << 3) & 0xffff) >> 4) * 2];
        dst[i] = ((0xc0 - j) * s * 2) >> 20;
    }
    o[0x306]++;
}
