/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_021014e4();                            /* extern */
s32 func_021018a4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_02147b28;
extern M2C_UNK func_021014fc;

s32 func_02101860(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                               = func_021018a4(arg0, &func_021014fc, 0);
    M2C_FIELD(&data_02147b28, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        func_021014e4();
    }
    return M2C_FIELD(&data_02147b28, s32 *, 0xC);
}
