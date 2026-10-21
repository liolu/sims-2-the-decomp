/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02045b10(void *, void *, M2C_UNK);       /* extern */

s32 func_02045c04(void *arg0, void *arg1, s32 arg2) {
    s32 var_r2;

    if (arg1 == NULL) {
        return 0;
    }
    var_r2 = M2C_FIELD(arg1, s32 *, 0xC);
    if (var_r2 == 0) {
        var_r2 = M2C_FIELD(func_02045b10(arg0, arg1, 2), s32 *, 4);
    }
    if ((arg2 != 0) && (var_r2 == 0)) {
        var_r2 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_r2;
}
