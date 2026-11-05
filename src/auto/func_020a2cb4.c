/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e6ec;

void func_020a2cb4(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    s32 i;
    s32 j;
    s32 x;
    u8 *p;
    s32 sh;

    p = (u8 *) data_0213e6ec + ((arg1 << 7) / 4);
    i = 0;
    do {
        j = 0;
        do {
            if (((1 << j) & arg2[i]) != 0) {
                x = arg0 + j;
                if (x >= 0 && x < 0x80 && arg1 >= 0 && arg1 < 0x80) {
                    sh = (x & 3) * 2;
                    p[x >> 2] &= ~(3 << sh);
                    p[x >> 2] |= arg3 << sh;
                }
            }
            j++;
        } while (j < 8);
        i++;
        p += 0x20;
        arg1 += 1;
    } while (i < 5);
}
