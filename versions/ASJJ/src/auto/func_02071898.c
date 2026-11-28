/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020f95a0(M2C_UNK);
M2C_UNK func_020f60f0(M2C_UNK);
M2C_UNK func_020f9454(M2C_UNK);
extern s32 data_0213e080;
extern s32 data_0213e084;
extern M2C_UNK func_02071848;

void func_02071898(void) {
    s32 h;
    h = func_020f95a0(2);
    if (h == (s32) &func_02071848) {
        func_020f60f0(0);
        func_020f9454(2);
        *(u16 *) 0x04000004 &= ~0x10;
    }
    data_0213e084 = 0;
    data_0213e080 = 0;
}
