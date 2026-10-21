/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02102ad4();                            /* extern */
s32 func_02103228(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_02148084;
extern M2C_UNK func_02102aec;

s32 func_021031e4(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_02103228(arg0, &func_02102aec, 0);
    M2C_FIELD(&data_02148084, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_02102ad4();
    }
    return M2C_FIELD(&data_02148084, s32 *, 0x20);
}
