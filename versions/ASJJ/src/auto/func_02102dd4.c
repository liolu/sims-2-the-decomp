/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fb98c(void);
void func_020fb9a0(M2C_UNK);
M2C_UNK func_02102f28(void);

extern M2C_UNK data_02147ba4;

s32 func_02102dd4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_020fb98c();
    if (M2C_FIELD(&data_02147ba4, s32 *, 0) != 0) {
        func_020fb9a0(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_02147ba4, s32 *, 0) = 1;
    func_020fb9a0(temp_r0);
    M2C_FIELD(&data_02147ba4, s32 *, 0x14) = 0;
    M2C_FIELD(&data_02147ba4, s32 *, 0x18) = 0;
    M2C_FIELD(&data_02147ba4, s32 *, 8)    = arg0;
    M2C_FIELD(&data_02147ba4, s32 *, 4)    = arg1;
    M2C_FIELD(&data_02147ba4, s32 *, 0x10) = arg2;
    if (func_02102f28() != 0) {
        return 0;
    }
    return 3;
}
