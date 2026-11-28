/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02052364(s32, u8);
M2C_UNK func_0205252c(void *, u8, u8);
extern void *data_0213e440;

void func_02042818(void *arg0, void *arg1) {
    u8 temp_r1;
    u8 temp_r2;
    u8 temp_r2_2;
    u8 k;
    void *var_r0;

    temp_r2 = M2C_FIELD(arg1, u8 *, 0);
    k       = M2C_FIELD(arg1, u8 *, 1);
    if (temp_r2 == 0xFF) {
        var_r0 = M2C_FIELD(data_0213e440, void **, 0xF8);
    } else {
        var_r0 = func_02052364(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x28) + (temp_r2 * 8), k);
    }
    if (var_r0 == NULL) {
        return;
    }
    temp_r1   = M2C_FIELD(arg1, u8 *, 2);
    temp_r2_2 = M2C_FIELD(arg1, u8 *, 3);
    switch (temp_r1) {
        case 0:
            func_0205252c(M2C_FIELD(arg0, void **, 4) + 0x24, M2C_FIELD(var_r0, u8 *, 8), M2C_FIELD(var_r0, u8 *, 9));
            return;
        case 1:
            if (temp_r2_2 == 1) {
                M2C_FIELD(var_r0, s32 *, 4) = (s32) (M2C_FIELD(var_r0, s32 *, 4) | 1);
            } else {
                M2C_FIELD(var_r0, s32 *, 4) = (s32) (M2C_FIELD(var_r0, s32 *, 4) & ~1);
            }
            return;
        case 2:
            if (temp_r2_2 == 1) {
                M2C_FIELD(var_r0, s32 *, 4) = (s32) (M2C_FIELD(var_r0, s32 *, 4) | 4);
                return;
            }
            M2C_FIELD(var_r0, s32 *, 4) = (s32) (M2C_FIELD(var_r0, s32 *, 4) & ~4);
            return;
    }
}
