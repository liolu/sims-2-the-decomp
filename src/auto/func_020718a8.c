/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 _Z19GetInterruptHandlerj(M2C_UNK);
M2C_UNK func_020f6604(M2C_UNK);
M2C_UNK func_020f9968(M2C_UNK);
extern s32 data_0213e558;
extern s32 data_0213e55c;
extern M2C_UNK func_02071858;

void func_020718a8(void) {
    s32 h;
    h = _Z19GetInterruptHandlerj(2);
    if (h == (s32) &func_02071858) {
        func_020f6604(0);
        func_020f9968(2);
        *(u16 *) 0x04000004 &= ~0x10;
    }
    data_0213e55c = 0;
    data_0213e558 = 0;
}
