/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbd64(void);
void func_020fbd78(M2C_UNK);
M2C_UNK func_02103310(void);

extern M2C_UNK data_02147f44;

s32 func_02103018(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = func_020fbd64();
    if (M2C_FIELD(&data_02147f44, s32 *, 0) != 0) {
        func_020fbd78(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_02147f44, s32 *, 0) = 1;
    func_020fbd78(temp_r0);
    M2C_FIELD(&data_02147f44, s32 *, 0x14) = 2;
    M2C_FIELD(&data_02147f44, s32 *, 0x18) = 0;
    M2C_FIELD(&data_02147f44, s32 *, 8)    = arg0;
    M2C_FIELD(&data_02147f44, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_02147f44, s32 *, 4)    = arg2;
    M2C_FIELD(&data_02147f44, s32 *, 0x10) = arg3;
    if (func_02103310() != 0) {
        return 0;
    }
    return 3;
}
