/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"
void func_020c3fdc(void *arg0) {
    void *temp_r1;
    s32 var_r3;
    var_r3                   = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 0;
    do {
        temp_r1                     = (u8 *) arg0 + var_r3;
        M2C_FIELD(temp_r1, s8 *, 3) = 0;
        var_r3 += 1;
    } while (var_r3 < 0x10);
}
