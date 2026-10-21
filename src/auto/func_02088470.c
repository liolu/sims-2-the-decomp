/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02088470(void *arg0) {
    void **temp_r0;

    if (((u32) (M2C_FIELD(arg0, u16 *, 4) << 0x1F) >> 0x1F) != 1) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0) = NULL;
    }
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) & ~1);
}
