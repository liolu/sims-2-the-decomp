/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046b24(void *, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_02136aec;

void *func_020cbf30(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *var_r2;

    func_02046b24(arg0, 0x1E, arg1, arg2, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02136aec;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x40)   = 0;
    var_r2                         = arg0 + 0x4C;
    do {
        M2C_FIELD(var_r2, s32 *, 0) = 0;
        M2C_FIELD(var_r2, s32 *, 4) = 0;
        var_r2 += 8;
    } while (var_r2 != (arg0 + 0x8C));
    if (arg2 == 0) {
        M2C_FIELD(arg0, s8 *, 0x31) = 1;
    } else {
        M2C_FIELD(arg0, s8 *, 0x31) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x38) = arg3;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    return arg0;
}
