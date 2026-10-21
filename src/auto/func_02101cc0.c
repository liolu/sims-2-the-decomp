/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_021019f8();                            /* extern */
s32 func_02101d04(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_02148008;
extern M2C_UNK func_02101a10;

s32 func_02101cc0(void) {
    s32 temp_r0;

    temp_r0                               = func_02101d04(&func_02101a10, 0);
    M2C_FIELD(&data_02148008, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        func_021019f8();
    }
    return M2C_FIELD(&data_02148008, s32 *, 0xC);
}
