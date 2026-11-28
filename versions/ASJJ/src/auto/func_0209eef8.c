/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 x, y, c, on;
} Cell;
extern Cell (*data_0213e1f8)[4];
extern u8 data_021246bc[][4][8];
s32 func_0204cbc0(s32, s32);

void func_0209eef8(void) {
    u8 r = func_0204cbc0(0, 5);
    u8 i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            if (data_021246bc[r][j][i] != 0) {
                data_0213e1f8[i][j].x  = i << 4;
                data_0213e1f8[i][j].y  = j * 8 + 0x20;
                data_0213e1f8[i][j].c  = data_021246bc[r][j][i];
                data_0213e1f8[i][j].on = 1;
            } else {
                data_0213e1f8[i][j].on = 0;
            }
        }
    }
}
