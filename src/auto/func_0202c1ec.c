/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0202c1ec(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x34) == 0) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x13) = 1;
    temp_r0                     = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
}
