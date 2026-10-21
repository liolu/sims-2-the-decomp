/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f0dbc(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02037808(void *arg0) {
    s32 temp_r0;
    s32 var_r4;
    void *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x34) != 1) {
        return;
    }
    var_r4  = M2C_FIELD(arg0, s32 *, 0x38);
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x1A8);
    if (var_r4 > 0x1F) {
        var_r4 = 0x1F;
    }
    func_020f0dbc(temp_r3 + M2C_FIELD((temp_r3 + M2C_FIELD(temp_r3, u16 *, 0xE)), s32 *, 0xC), 0, 0x1F0000);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x210) = (s8) var_r4;
    temp_r0                                             = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_r0 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_r0 - 1);
    if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
    }
}
