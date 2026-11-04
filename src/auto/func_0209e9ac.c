/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e6cc;

void func_0209e9ac(s32 arg0, s32 arg1, u16 *arg2, s32 arg3) {
    s32 x;
    s32 k;
    s32 i;
    u8 *row;

    row = *(u8 **) &data_0213e6cc;
    row = row + ((arg1 << 7) / 4);
    for (i = 0; i < 8; i++) {
        for (k = 0; k < 16; k++) {
            if ((arg2[i] & (1 << k)) != 0) {
                x = arg0 + k;
                if (x >= 0 && x < 0x80 && arg1 >= 0 && arg1 < 0x80) {
                    row[x >> 2] = row[x >> 2] | (arg3 << ((x & 3) << 1));
                }
            }
        }
        row += 0x20;
        arg1++;
    }
}
