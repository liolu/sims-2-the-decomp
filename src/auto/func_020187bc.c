/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_01ffae94();                             /* extern */

s32 func_020187bc(void) {
    s32 var_r4;
    void **temp_r0;

    var_r4  = 0;
    temp_r0 = func_01ffae94();
    if (temp_r0 != NULL) {
        var_r4 = M2C_FIELD(*temp_r0, s32(**)(), 0x10)(temp_r0);
    }
    return var_r4;
}
