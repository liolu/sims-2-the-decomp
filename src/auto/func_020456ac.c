/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020456ac(void *arg0, void *arg1) {
    void *temp_r2;
    void *temp_r3;
    void *temp_r3_2;

    if (arg1 == NULL) {
        return;
    }
    temp_r3 = M2C_FIELD(arg1, void **, 8);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 4) = (void *) M2C_FIELD(arg1, void **, 4);
    }
    temp_r3_2 = M2C_FIELD(arg1, void **, 4);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    }
    if (arg1 == M2C_FIELD(arg0, void **, 4)) {
        M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 4);
    }
    if (arg1 == M2C_FIELD(arg0, void **, 8)) {
        M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    }
    temp_r2 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 4) = arg1;
        M2C_FIELD(arg1, void **, 8)    = (void *) M2C_FIELD(arg0, void **, 0x24);
        M2C_FIELD(arg0, void **, 0x24) = arg1;
    } else {
        M2C_FIELD(arg0, void **, 0x20) = arg1;
        M2C_FIELD(arg0, void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0x20);
    }
    M2C_FIELD(arg1, s32 *, 0)   = 0;
    M2C_FIELD(arg1, void **, 4) = NULL;
}
