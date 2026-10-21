/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u8 *func_02051770();                   /* extern */

s32 func_02051708(s32 arg0, M2C_UNK arg1) {
    s32 var_r4;
    u8 *var_r0;
    u8 var_r1;

    var_r4 = 1;
    var_r0 = func_02051770();
    var_r1 = *var_r0;
    if (var_r1 != 0) {
        do {
            if (var_r1 == 0xA) {
                var_r0 += 1;
            }
            if (*var_r0 == 0x20) {
                do {
                    var_r0 += 1;
                } while (*var_r0 == 0x20);
            }
            var_r4 += 1;
            var_r0 = func_02051770(var_r0, arg1);
            var_r1 = *var_r0;
        } while (var_r1 != 0);
    }
    return var_r4;
}
