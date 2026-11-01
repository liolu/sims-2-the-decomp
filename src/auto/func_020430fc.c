/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020430fc(u32 **arg0) {
    u32 *temp_r2;
    u32 *var_r3;
    u32 *var_r1;

    temp_r2 = *arg0;
    var_r3  = (u32 *) temp_r2[1];
    if (var_r3 != NULL) {
        var_r1 = (u32 *) *var_r3;
        if (var_r1 != NULL) {
            do {
                var_r3 = var_r1;
                var_r1 = (u32 *) *var_r1;
            } while (var_r1 != NULL);
        }
        *arg0 = var_r3;
        return;
    }
    var_r3 = (u32 *) (temp_r2[2] & ~1);
    if (temp_r2 != (u32 *) *var_r3) {
        do {
            *arg0   = var_r3;
            temp_r2 = *arg0;
            var_r3  = (u32 *) (temp_r2[2] & ~1);
        } while (temp_r2 != (u32 *) *var_r3);
    }
    *arg0 = var_r3;
}
