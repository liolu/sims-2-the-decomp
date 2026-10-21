#include "m2c.h"

void func_0208b394(void *arg0) {
    s32 var_r3;
    u8 temp_r1;
    void *temp_r2;

    var_r3 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) > 0) {
        do {
            temp_r2 = arg0 + var_r3;
            temp_r1 = M2C_FIELD(temp_r2, u8 *, 0x10);
            var_r3 += 1;
            M2C_FIELD(temp_r2, u8 *, 0x18) = temp_r1;
        } while (var_r3 < (s32) M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0x14) = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
}
