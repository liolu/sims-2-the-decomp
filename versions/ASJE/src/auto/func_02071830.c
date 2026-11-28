/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020f9978(M2C_UNK);
M2C_UNK func_020f64c8(M2C_UNK);
M2C_UNK func_020f982c(M2C_UNK);
extern s32 data_0213e418;
extern s32 data_0213e41c;
extern M2C_UNK func_020717e0;

void func_02071830(void) {
    s32 h;
    h = func_020f9978(2);
    if (h == (s32) &func_020717e0) {
        func_020f64c8(0);
        func_020f982c(2);
        *(u16 *) 0x04000004 &= ~0x10;
    }
    data_0213e41c = 0;
    data_0213e418 = 0;
}
