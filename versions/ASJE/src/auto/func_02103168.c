/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02102998();                            /* extern */
s32 func_021031ac(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_02147f44;
extern M2C_UNK func_021029b0;

s32 func_02103168(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_021031ac(arg0, &func_021029b0, 0);
    M2C_FIELD(&data_02147f44, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_02102998();
    }
    return M2C_FIELD(&data_02147f44, s32 *, 0x20);
}
