/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02011090(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_ov003_0214a47c(void *arg0, u16 arg1) {
    u16 temp_r0;
    void *temp_r2;
    void *temp_r3;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x76);
    if (temp_r0 == arg1) {
        return;
    }
    temp_r3                      = M2C_FIELD((arg0 + (temp_r0 * 4)), void **, 0x48);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (M2C_FIELD(temp_r3, s32 *, 4) & ~1);
    func_02011090(M2C_FIELD((arg0 + (M2C_FIELD(arg0, u16 *, 0x76) * 4)), s32 *, 0x48), 0, 1, 1, 0);
    M2C_FIELD(arg0, u16 *, 0x76) = arg1;
    temp_r2                      = M2C_FIELD((arg0 + (M2C_FIELD(arg0, u16 *, 0x76) * 4)), void **, 0x48);
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) | 1);
    M2C_FIELD(arg0, s16 *, 0x7C) = 0;
    M2C_FIELD(arg0, s16 *, 0x7E) = 0;
    M2C_FIELD(arg0, s8 *, 0x83)  = 0;
}
