/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(void *);                      /* extern */
extern M2C_UNK data_021316d4;
extern M2C_UNK data_02131728;

void *func_02055750(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021316d4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02131728;
    temp_r0                        = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_02046858(arg0);
    return arg0;
}
