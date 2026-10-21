/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02130090;

void *func_020186f4(void *arg0) {
    M2C_UNK (*temp_r1)(s32);
    void *temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130090;
    temp_r0                        = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 != NULL) {
        temp_r1 = M2C_FIELD(temp_r0, M2C_UNK(**)(s32), 8);
        if (temp_r1 != NULL) {
            temp_r1(M2C_FIELD(temp_r0, s32 *, 4));
        }
    }
    return arg0;
}
