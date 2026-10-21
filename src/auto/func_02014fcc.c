/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb024(void *, void *);              /* extern */
M2C_UNK func_01ffb0d8(void *, void *);              /* extern */
s32 func_02044690(void *, u16);                     /* extern */

void func_02014fcc(void *arg0, s32 arg1) {
    u16 temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0x70) == 0) {
        return;
    }
    temp_r4 = M2C_FIELD(((arg1 * 6) + M2C_FIELD(arg0, s32 *, 0x6C)), u16 *, 4);
    if (temp_r4 == M2C_FIELD(arg0, u16 *, 0x76)) {
        return;
    }
    func_01ffb024(arg0 + 0x68, arg0);
    if (func_02044690(arg0 + 0x68, temp_r4) == 0) {
        return;
    }
    func_01ffb0d8(arg0 + 0x68, arg0);
}
