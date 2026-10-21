/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02057088(void *arg0) {
    void **temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r1                      = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) & ~1);
}
