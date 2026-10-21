/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204536c(void *arg0, void *arg1) {
    s32 var_ip;

    if (M2C_FIELD(arg0, void **, 4) == NULL) {
        var_ip = 1;
    } else {
        var_ip = 0;
    }
    if (var_ip != 0) {
        M2C_FIELD(arg0, void **, 8) = arg1;
        M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(arg1, s32 *, 4)   = 0;
        M2C_FIELD(arg1, s32 *, 8)   = 0;
    }
    return var_ip;
}
