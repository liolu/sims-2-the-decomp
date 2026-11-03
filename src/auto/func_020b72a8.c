/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213f970;

void func_020b72a8(s32 arg0, s32 arg1, u16 *arg2, s32 arg3) {
    s32 col;
    u8 *rowp;
    s32 row;
    s32 y;
    s32 x;
    s32 sh;
    u8 *p;

    rowp = *(u8 **) &data_0213f970 + (s32) (arg1 << 7) / 4;
    y    = arg1;
    for (row = 0; row < 16; row++) {
        col = 0;
        do {
            if (arg2[row] & (1 << col)) {
                x = arg0 + col;
                if (x >= 0 && x < 0x80 && y >= 0 && y < 0x80) {
                    p    = rowp + (x >> 2);
                    sh   = (x & 3) << 1;
                    p[0] = p[0] & ~(3 << sh);
                    p[0] = p[0] | (arg3 << sh);
                }
            }
            col++;
        } while (col < 16);
        rowp += 0x20;
        y++;
    }
}
