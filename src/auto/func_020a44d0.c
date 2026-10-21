/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aa678(void *, M2C_UNK);             /* extern */
extern void *data_02139fa4;

void func_020a44d0(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r1;
    void *temp_r0;

    if (arg0 != 4) {
        return;
    }
    temp_r0 = M2C_FIELD(data_02139fa4, void **, 0xDAC);
    if (temp_r0 != NULL) {
        var_r1 = M2C_FIELD(temp_r0, s32 *, 4);
    } else {
        var_r1 = 0x32;
    }
    if (var_r1 != 0x12) {
        return;
    }
    func_020aa678(temp_r0, arg2);
}
