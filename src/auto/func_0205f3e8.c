#include "m2c.h"

void func_0205f3e8(void *arg0) {
    s32 *var_r3;

    var_r3 = arg0 + 0x2C;
    do {
        *var_r3 = 0x80000000;
        var_r3  = (s32 *) ((s8 *) var_r3 + 4);
    } while (var_r3 != (arg0 + 0xB0));
    M2C_FIELD(arg0, s32 *, 0xB0) = 0x80000000;
}
