/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e6e8[];

void func_020a1fcc(s32 x, s32 y, u16 *table, u32 value) {
    s32 j;
    s32 i;
    u8 *row;

    row = *(u8 **) data_0213e6e8 + ((y << 7) / 4);
    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            if (table[i] & (1 << j)) {
                s32 xx = x + j;
                if (xx >= 0 && xx < 0x80 && y >= 0 && y < 0x80) {
                    s32 sh       = (xx & 3) << 1;
                    row[xx >> 2] = row[xx >> 2] | (value << sh);
                }
            }
        }
        row += 0x20;
        y++;
    }
}
