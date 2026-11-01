/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

void func_02073444(void *arg0, u8 arg1, s8 arg2) {
    s32 var_lr;
    void *temp_ip;

    var_lr = 0;
    if (arg1 == M2C_FIELD(arg0, u8 *, 0x336)) {
        M2C_FIELD(arg0, u8 *, 0x336) = 0x21U;
        M2C_FIELD(arg0, s8 *, 0x337) = 0x58;
    }
loop_2:
    temp_ip = arg0 + (var_lr * 2);
    if (M2C_FIELD(temp_ip, u8 *, 0x336) == 0x21) {
        M2C_FIELD(temp_ip, u8 *, 0x336) = arg1;
        M2C_FIELD(temp_ip, s8 *, 0x337) = arg2;
        return;
    }
    var_lr += 1;
    if (var_lr >= 1) {
        return;
    }
    goto loop_2;
}
