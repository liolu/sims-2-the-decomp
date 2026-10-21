/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c48e4();                                /* extern */

s32 func_020c4348(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = func_020c48e4();
    }
    return (var_r1 * 0x44) + (arg0 + 0x220);
}
