/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02106cb4();                                /* extern */
s32 func_02106dd0();                                /* extern */

s32 func_02106df8(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_02106cb4() != 0) {
        var_r4 = func_02106dd0();
    }
    return var_r4;
}
