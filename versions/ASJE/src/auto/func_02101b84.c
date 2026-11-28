/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_021018bc();                            /* extern */
s32 func_02101bc8(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_02147ec8;
extern M2C_UNK func_021018d4;

s32 func_02101b84(void) {
    s32 temp_r0;

    temp_r0                               = func_02101bc8(&func_021018d4, 0);
    M2C_FIELD(&data_02147ec8, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        func_021018bc();
    }
    return M2C_FIELD(&data_02147ec8, s32 *, 0xC);
}
