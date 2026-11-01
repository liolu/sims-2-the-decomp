/* compiler: 1.2/sp3 */
#include "m2c.h"

extern s32 data_02142ed4;
extern s32 (*data_02142ed8)(M2C_UNK);
extern s32 data_02142ee4;

s32 func_020de798(s32 (*arg0)(M2C_UNK), M2C_UNK arg1) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return 0;
    }
    if (data_02142ed8 == NULL) {
        data_02142ed8 = arg0;
    }
    if (data_02142ed8 != arg0) {
        if (data_02142ee4 == 0) {
            data_02142ed8 = arg0;
            goto block_8;
        }
        return 0;
    }
block_8:
    temp_r0 = data_02142ed8(arg1);
    if (temp_r0 != 0) {
        data_02142ed4 = temp_r0;
    }
    if (data_02142ed4 != 0) {
        return 1;
    }
    return 0;
}
