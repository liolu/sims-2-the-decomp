/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844(void *);                      /* extern */
extern M2C_UNK data_02130090;

void *func_020186ac(void *arg0) {
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
    func_02046844(arg0);
    return arg0;
}
