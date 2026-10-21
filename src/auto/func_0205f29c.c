/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_0205f29c(s32 arg0) {
    u16 var_ip;
    u8 temp_r2;
    u8 var_r3;

    var_ip = 0;
    var_r3 = 0;
    do {
        temp_r2 = M2C_FIELD((arg0 + var_r3), u8 *, 8);
        var_r3 += 1;
        var_ip += temp_r2;
    } while ((u32) var_r3 < 0x21U);
    return var_ip;
}
