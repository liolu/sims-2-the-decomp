/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02077db4(s32 arg0, s32 arg1) {
    s32 var_lr;
    u8 var_ip;

    var_lr = 0;
    var_ip = 0;
loop_1:
    if (arg1 == M2C_FIELD((arg0 + (var_ip * 8)), u8 *, 0x9E8)) {
        var_lr = arg0 + 0x9E4 + (var_ip * 8);
    } else {
        var_ip += 1;
        if ((u32) var_ip < 5U) {
            goto loop_1;
        }
    }
    return var_lr;
}
