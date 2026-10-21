/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020453a4(void *arg0, void *arg1, void *arg2) {
    s32 var_lr;
    void *var_r2;
    void *var_r3;

    var_r2 = arg2;
    if (var_r2 == NULL) {
        var_r2 = M2C_FIELD(arg0, void **, 8);
    }
    if (M2C_FIELD(arg0, void **, 4) == NULL) {
        var_lr = 1;
    } else {
        var_lr = 0;
    }
    if (var_lr != 0) {
        M2C_FIELD(arg0, void **, 8) = arg1;
        M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(arg1, s32 *, 4)   = 0;
        M2C_FIELD(arg1, void **, 8) = NULL;
    }
    if (var_lr != 0) {
        return;
    }
    var_r3 = M2C_FIELD(var_r2, void **, 4);
    if (var_r3 != NULL) {
        do {
            var_r2 = var_r3;
            var_r3 = M2C_FIELD(var_r3, void **, 4);
        } while (var_r3 != NULL);
    }
    M2C_FIELD(arg1, void **, 8)   = var_r2;
    M2C_FIELD(arg1, s32 *, 4)     = 0;
    M2C_FIELD(var_r2, void **, 4) = arg1;
    if (var_r2 == M2C_FIELD(arg0, void **, 8)) {
        M2C_FIELD(arg0, void **, 8) = arg1;
    }
}
