/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202e6c0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202e898(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202eb6c(void *, M2C_UNK);             /* extern */
extern void *data_02139fa4;

s32 func_0202eed0(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r0;
    void *temp_r1;

    if ((arg1 != 0xA) && (arg1 != 0x15) && (arg1 != 0xF)) {
        return 0;
    }
    if (arg1 == 0x15) {
        temp_r1 = M2C_FIELD(data_02139fa4, void **, 0xDAC);
        if (temp_r1 != NULL) {
            var_r0 = M2C_FIELD(temp_r1, s32 *, 4);
        } else {
            var_r0 = 0x32;
        }
        if (var_r0 == 0xC) {
            M2C_FIELD(temp_r1, s32 *, 0x6C) = 0;
        }
        return 0;
    }
    if (arg1 == 0xF) {
        func_0202eb6c(arg0, arg2);
    } else if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        func_0202e898(arg0, arg2);
        M2C_FIELD(arg0, u8 *, 0x2C) = 1U;
    } else {
        func_0202e6c0(arg0, arg2);
        M2C_FIELD(arg0, u8 *, 0x2C) = 0U;
    }
    return 0;
}
