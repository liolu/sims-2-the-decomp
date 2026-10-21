/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0201cb40(void *arg0) {
    void *var_r3;

    var_r3 = M2C_FIELD(arg0, void **, 0x28);
    if (var_r3 == NULL) {
        var_r3 = M2C_FIELD(arg0, void **, 4);
    }
    if (M2C_FIELD(arg0, u8 *, 0x30) != 0) {
        M2C_FIELD(var_r3, s32 *, 4) = (s32) (M2C_FIELD(var_r3, s32 *, 4) | M2C_FIELD(arg0, s32 *, 0x2C));
    } else {
        M2C_FIELD(var_r3, s32 *, 4) = (s32) (M2C_FIELD(var_r3, s32 *, 4) & ~M2C_FIELD(arg0, s32 *, 0x2C));
    }
    M2C_FIELD(arg0, s8 *, 0x13) = 1;
}
