/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204560c(s32);                             /* extern */
void *func_0204561c();                              /* extern */

s32 func_0209b380(s32 arg0, s32 arg1) {
    s32 var_r4;
    void *temp_r1;
    void *var_r0;

    var_r4 = 0;
    if (arg1 == 0x12) {
        var_r4 = func_0204560c(arg0 + 0x34);
    } else {
        var_r0 = func_0204561c();
        if (var_r0 != NULL) {
            do {
                temp_r1 = M2C_FIELD(var_r0, void **, 0);
                var_r0  = M2C_FIELD(var_r0, void **, 4);
                if (arg1 == M2C_FIELD(temp_r1, u8 *, 0x18)) {
                    var_r4 += 1;
                }
            } while (var_r0 != NULL);
        }
    }
    return var_r4;
}
