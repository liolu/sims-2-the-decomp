/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbea0(void);
void func_020fbeb4(M2C_UNK);
M2C_UNK func_0210344c(void);

extern M2C_UNK data_02148084;

s32 func_02103154(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = func_020fbea0();
    if (M2C_FIELD(&data_02148084, s32 *, 0) != 0) {
        func_020fbeb4(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_02148084, s32 *, 0) = 1;
    func_020fbeb4(temp_r0);
    M2C_FIELD(&data_02148084, s32 *, 0x14) = 2;
    M2C_FIELD(&data_02148084, s32 *, 0x18) = 0;
    M2C_FIELD(&data_02148084, s32 *, 8)    = arg0;
    M2C_FIELD(&data_02148084, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_02148084, s32 *, 4)    = arg2;
    M2C_FIELD(&data_02148084, s32 *, 0x10) = arg3;
    if (func_0210344c() != 0) {
        return 0;
    }
    return 3;
}
