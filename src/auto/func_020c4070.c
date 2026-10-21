/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c4070(void *arg0) {
    s32 var_ip;
    s32 var_r0;

    var_r0 = 0;
    var_ip = 0;
    do {
        if (M2C_FIELD(arg0, u16 *, 8) & (1 << var_ip)) {
            var_r0 = var_ip;
        }
        var_ip += 1;
    } while (var_ip < 0x10);
    return var_r0;
}
