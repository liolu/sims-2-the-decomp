/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02077e08(s32 arg0, s32 arg1) {
    u8 var_ip;

    var_ip = 0;
loop_1:
    if ((arg1 == M2C_FIELD((arg0 + (var_ip * 8)), u8 *, 0x9E8)) && (M2C_FIELD(((arg1 * 0x2C) + arg0), s32 *, 0x10) == 5)) {
        return 1;
    }
    var_ip += 1;
    if ((u32) var_ip >= 5U) {
        return 0;
    }
    goto loop_1;
}
