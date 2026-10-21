#include "m2c.h"

extern void *data_0213e434;

void func_02040580(s32 arg0, u8 *arg1) {
    s8 var_r1;

    if (*arg1 != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(data_0213e434, s8 *, 0x21D8) = var_r1;
}
