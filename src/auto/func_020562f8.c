#include "m2c.h"

void func_020562f8(void *arg0) {
    void *temp_r1;

    temp_r1                      = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) | 1);
}
