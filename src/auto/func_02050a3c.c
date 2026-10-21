/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 data_0213dd48;

void func_02050a3c(u8 *arg0) {
    u8 *var_r0;
    u8 *var_r2;

    var_r0 = arg0;
    var_r2 = &data_0213dd48;
    if ((var_r0 != NULL) && (*var_r0 != 0)) {
        do {
            *var_r2 = *var_r0;
            var_r2 += 1;
            var_r0 += 1;
        } while (*var_r0 != 0);
    }
    *var_r2 = 0;
}
