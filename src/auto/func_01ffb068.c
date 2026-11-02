/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ffb068(void *arg0, void *arg1, u16 arg2) {
    s32 var_lr;
    s8 var_r1;
    u16 temp_r3;
    void *var_ip;

    M2C_FIELD(arg0, u16 *, 0xC) = arg2;
    if (arg2 == 0) {
        return;
    }
    M2C_FIELD(arg0, void **, 4) = arg1;
    temp_r3                     = M2C_FIELD(arg0, u16 *, 0xC);
    var_lr                      = 0;
    if ((s32) temp_r3 > 0) {
        var_ip = M2C_FIELD(arg0, void **, 4);
    loop_4:
        if (M2C_FIELD(var_ip, u16 *, 4) != 0xFFFF) {
            var_r1 = 1;
        } else {
            var_lr += 1;
            var_ip += 6;
            if (var_lr >= (s32) temp_r3) {
                goto block_7;
            }
            goto loop_4;
        }
    } else {
    block_7:
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s8 *, 8) = var_r1;
}
