/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eebc0();                            /* extern */
M2C_UNK func_020f078c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020f0dbc(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020bd608(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0) != 1) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x5C);
    temp_r4 = temp_r3 + M2C_FIELD((temp_r3 + M2C_FIELD(temp_r3, u16 *, 0xE)), s32 *, 0xC);
    func_020f0dbc(temp_r4, 1, 0xF);
    func_020eebc0();
    func_020f078c(temp_r4, 0, 0, 1);
}
