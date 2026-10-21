/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02131c28;

void *func_020562ac(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02131c28;
    temp_r0                        = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    return arg0;
}
