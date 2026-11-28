/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_021025c0();                            /* extern */
s32 func_02102d14(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_02147ba4;
extern M2C_UNK func_021025d8;

s32 func_02102cd0(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_02102d14(arg0, &func_021025d8, 0);
    M2C_FIELD(&data_02147ba4, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_021025c0();
    }
    return M2C_FIELD(&data_02147ba4, s32 *, 0x20);
}
