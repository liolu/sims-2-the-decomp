/* compiler: 1.2/sp3 */
#include "m2c.h"

extern s32 data_021429f4;
extern s32 (*data_021429f8)(M2C_UNK);
extern s32 data_02142a04;

s32 func_020de284(s32 (*arg0)(M2C_UNK), M2C_UNK arg1) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return 0;
    }
    if (data_021429f8 == NULL) {
        data_021429f8 = arg0;
    }
    if (data_021429f8 != arg0) {
        if (data_02142a04 == 0) {
            data_021429f8 = arg0;
            goto block_8;
        }
        return 0;
    }
block_8:
    temp_r0 = data_021429f8(arg1);
    if (temp_r0 != 0) {
        data_021429f4 = temp_r0;
    }
    if (data_021429f4 != 0) {
        return 1;
    }
    return 0;
}
