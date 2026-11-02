/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020165bc(s32, M2C_UNK);                /* extern */

void func_ov018_02149e2c(void *arg0) {
    s8 temp_r0;
    s8 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r0_4;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;

    if (M2C_FIELD(arg0, u8 *, 0x35) != 0) {
        func_020165bc(M2C_FIELD(arg0, s32 *, 0x4C), 1);
        temp_r2                      = M2C_FIELD(arg0, void **, 0x50);
        M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
        M2C_FIELD(arg0, s8 *, 0x8A)  = -2;
    } else if (M2C_FIELD(arg0, s8 *, 0x8A) == -2) {
        M2C_FIELD(arg0, s8 *, 0x8A) = 5;
    }
    temp_r0 = M2C_FIELD(arg0, s8 *, 0x8A);
    if ((s32) temp_r0 > 0) {
        M2C_FIELD(arg0, s8 *, 0x8A) = (s8) (temp_r0 - 1);
        if (M2C_FIELD(arg0, s8 *, 0x8A) == 0) {
            func_020165bc(M2C_FIELD(arg0, s32 *, 0x4C), 0);
            temp_r2_2                      = M2C_FIELD(arg0, void **, 0x50);
            M2C_FIELD(temp_r2_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_2, s32 *, 4) | 1);
            M2C_FIELD(arg0, s8 *, 0x8A)    = -1;
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s8 *, 0x89);
    if ((s32) temp_r0_2 > 0) {
        M2C_FIELD(arg0, s8 *, 0x89) = (s8) (temp_r0_2 - 1);
        if (M2C_FIELD(arg0, s8 *, 0x89) == 0) {
            func_020165bc(M2C_FIELD(arg0, s32 *, 0x44), 0);
            temp_r2_3                      = M2C_FIELD(arg0, void **, 0x48);
            M2C_FIELD(temp_r2_3, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 4) | 1);
            M2C_FIELD(arg0, s8 *, 0x89)    = -1;
        }
    }
    temp_r0_3 = M2C_FIELD(arg0, s8 *, 0x8B);
    if ((s32) temp_r0_3 > 0) {
        M2C_FIELD(arg0, s8 *, 0x8B) = (s8) (temp_r0_3 - 1);
        if (M2C_FIELD(arg0, s8 *, 0x8B) == 0) {
            func_020165bc(M2C_FIELD(arg0, s32 *, 0x54), 0);
            temp_r2_4                      = M2C_FIELD(arg0, void **, 0x58);
            M2C_FIELD(temp_r2_4, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_4, s32 *, 4) | 1);
            M2C_FIELD(arg0, s8 *, 0x8B)    = -1;
        }
    }
    temp_r0_4 = M2C_FIELD(arg0, s8 *, 0x8C);
    if ((s32) temp_r0_4 <= 0) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x8C) = (s8) (temp_r0_4 - 1);
    if (M2C_FIELD(arg0, s8 *, 0x8C) != 0) {
        return;
    }
    func_020165bc(M2C_FIELD(arg0, s32 *, 0x5C), 0);
    temp_r2_5                      = M2C_FIELD(arg0, void **, 0x60);
    M2C_FIELD(temp_r2_5, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_5, s32 *, 4) | 1);
    M2C_FIELD(arg0, s8 *, 0x8C)    = -1;
}
