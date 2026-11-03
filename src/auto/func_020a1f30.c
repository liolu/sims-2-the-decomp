/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e6e8[];

void func_020a1f30(s32 x, s32 y, u8 *bits, s32 val) {
    s32 b;
    s32 r;
    u8 *rowp = *(u8 **) &data_0213e6e8 + (y << 7) / 4;

    for (r = 0; r < 5; r++) {
        for (b = 0; b < 8; b++) {
            if (bits[r] & (1 << b)) {
                s32 c = x + b;
                if (c >= 0 && c < 0x80 && y >= 0 && y < 0x80) {
                    s32 sh       = (c & 3) << 1;
                    rowp[c >> 2] = rowp[c >> 2] | (val << sh);
                }
            }
        }
        rowp += 0x20;
        y++;
    }
}
