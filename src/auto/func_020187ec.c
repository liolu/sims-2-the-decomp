#include "m2c.h"

u16 func_020187ec(void *arg0) {
    u16 var_r0;
    void **temp_r1;

    temp_r1 = M2C_FIELD(arg0, void ***, 8);
    var_r0  = 0;
    if (temp_r1 != NULL) {
        var_r0 = M2C_FIELD(*temp_r1, u16 *, 0x10);
    }
    return var_r0;
}
