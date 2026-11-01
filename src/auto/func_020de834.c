/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

extern u8 data_02142f08;

void func_020de834(u8 *arg0) {
    u8 *var_r0;
    u8 *var_r2;

    var_r0 = arg0;
    var_r2 = &data_02142f08;
loop_1:
    *var_r2 = *var_r0;
    if (*var_r0 != 0) {
        var_r2 += 1;
        var_r0 += 1;
        goto loop_1;
    }
}
