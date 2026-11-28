/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbd64(void);
void func_020fbd78(M2C_UNK);
M2C_UNK func_021018e4(void);

extern M2C_UNK data_02147ec8;

s32 func_02101bc8(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_020fbd64();
    if (M2C_FIELD(&data_02147ec8, s32 *, 0) != 0) {
        func_020fbd78(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_02147ec8, s32 *, 0) = 1;
    func_020fbd78(temp_r0);
    M2C_FIELD(&data_02147ec8, s32 *, 4) = arg0;
    M2C_FIELD(&data_02147ec8, s32 *, 8) = arg1;
    if (func_021018e4() != 0) {
        return 0;
    }
    return 3;
}
