/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020165bc(s32, M2C_UNK);                /* extern */

void func_ov018_02149f9c(void *arg0, u32 arg1) {
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;

    switch (arg1) {
        default:
            break;
        case 0:
            func_020165bc(M2C_FIELD(arg0, s32 *, 0x44), 1);
            temp_r1                      = M2C_FIELD(arg0, void **, 0x48);
            M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) & ~1);
            break;
        case 1:
            func_020165bc(M2C_FIELD(arg0, s32 *, 0x4C), 1);
            temp_r1_2                      = M2C_FIELD(arg0, void **, 0x50);
            M2C_FIELD(temp_r1_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r1_2, s32 *, 4) & ~1);
            break;
        case 2:
            func_020165bc(M2C_FIELD(arg0, s32 *, 0x54), 1);
            temp_r1_3                      = M2C_FIELD(arg0, void **, 0x58);
            M2C_FIELD(temp_r1_3, s32 *, 4) = (s32) (M2C_FIELD(temp_r1_3, s32 *, 4) & ~1);
            break;
        case 3:
            func_020165bc(M2C_FIELD(arg0, s32 *, 0x5C), 1);
            temp_r1_4                      = M2C_FIELD(arg0, void **, 0x60);
            M2C_FIELD(temp_r1_4, s32 *, 4) = (s32) (M2C_FIELD(temp_r1_4, s32 *, 4) & ~1);
            break;
        case 4:
            if (M2C_FIELD(arg0, u8 *, 0x78) == 0) {
                func_020165bc(M2C_FIELD(arg0, s32 *, 0x64), 0);
                temp_r1_5                      = M2C_FIELD(arg0, void **, 0x68);
                M2C_FIELD(temp_r1_5, s32 *, 4) = (s32) (M2C_FIELD(temp_r1_5, s32 *, 4) | 1);
            } else {
                func_020165bc(M2C_FIELD(arg0, s32 *, 0x64), 1);
                temp_r1_6                      = M2C_FIELD(arg0, void **, 0x68);
                M2C_FIELD(temp_r1_6, s32 *, 4) = (s32) (M2C_FIELD(temp_r1_6, s32 *, 4) & ~1);
            }
            break;
    }
    M2C_FIELD((arg0 + arg1), s8 *, 0x89) = 5;
}
