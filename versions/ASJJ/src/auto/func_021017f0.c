/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fb98c(void);
void func_020fb9a0(M2C_UNK);
M2C_UNK func_0210150c(void);

extern M2C_UNK data_02147b28;

s32 func_021017f0(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_020fb98c();
    if (M2C_FIELD(&data_02147b28, s32 *, 0) != 0) {
        func_020fb9a0(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_02147b28, s32 *, 0) = 1;
    func_020fb9a0(temp_r0);
    M2C_FIELD(&data_02147b28, s32 *, 4) = arg0;
    M2C_FIELD(&data_02147b28, s32 *, 8) = arg1;
    if (func_0210150c() != 0) {
        return 0;
    }
    return 3;
}
