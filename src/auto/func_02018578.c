/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020170c4(void *, M2C_UNK);               /* extern */
M2C_UNK func_020181e4(void *, M2C_UNK);             /* extern */
void *func_0204688c(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */

void *func_02018578(M2C_UNK arg0) {
    void *temp_r0;
    void *var_r4;

    temp_r0 = func_0204688c(0x74, 0, 4);
    var_r4  = temp_r0;
    if (var_r4 != NULL) {
        var_r4 = func_020170c4(temp_r0, 0);
    }
    M2C_FIELD(var_r4, s32 *, 4)    = (s32) (M2C_FIELD(var_r4, s32 *, 4) | 0x200009);
    M2C_FIELD(var_r4, s8 *, 0x48)  = 1;
    M2C_FIELD(var_r4, s32 *, 0x10) = (s32) (M2C_FIELD(var_r4, s32 *, 0x10) & ~0x2000);
    M2C_FIELD(var_r4, s32 *, 0x14) = (s32) (M2C_FIELD(var_r4, s32 *, 0x14) & ~0xC00);
    M2C_FIELD(var_r4, s32 *, 0x14) = (s32) (M2C_FIELD(var_r4, s32 *, 0x14) & ~0xF000);
    M2C_FIELD(var_r4, s32 *, 0x14) =
        (s32) ((M2C_FIELD(var_r4, s32 *, 0x14) & ~0x3FF) | (M2C_FIELD(var_r4, u16 *, 0x46) & 0x3FF));
    M2C_FIELD(var_r4, s32 *, 0x10) = (s32) ((M2C_FIELD(var_r4, s32 *, 0x10) & ~0xC000) | 0x4000);
    func_020181e4(var_r4, arg0);
    return var_r4;
}
