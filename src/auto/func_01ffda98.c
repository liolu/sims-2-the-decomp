/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ffda98(void *arg0) {
    s32 temp_r1;
    s32 var_r0;
    s32 var_r0_2;
    u8 temp_r4;
    u8 var_r5;
    void *temp_ip;

    if (!(M2C_FIELD(arg0, s32 *, 8) & 0x200)) {
        M2C_FIELD(arg0, u8 *, 0xAC)   = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 1);
        temp_r4                       = M2C_FIELD(arg0, u8 *, 0xAC);
        M2C_FIELD(arg0, s32 *, 8)     = (s32) (M2C_FIELD(arg0, s32 *, 8) | 4);
        M2C_FIELD(arg0, s32 **, 0xB8) = (s32 *) (arg0 + 0x184);
        if (M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x14) != NULL) {
            var_r5 = M2C_FIELD(arg0, u8 *, 0x8E);
        } else {
            var_r5 = 0;
        }
        if (var_r5 == 1) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & ~0x40);
            M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x14)(arg0);
            if (M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x14) != NULL) {
                var_r5 = M2C_FIELD(arg0, u8 *, 0x8E);
            } else {
                var_r5 = 0;
            }
            var_r0 = M2C_FIELD(arg0, s32 *, 8) & 0x40;
        } else {
            var_r0 = 0;
        }
        if ((var_r0 == 0) &&
            ((temp_ip = M2C_FIELD(arg0, void **, 4), temp_r1 = M2C_FIELD(temp_ip, s32 *, 0x18), (temp_r1 == 0)) ||
             !((1 << (temp_r4 & 0x1F)) & M2C_FIELD((temp_ip + (((u32) temp_r4 >> 5) * 4)), s32 *, 0x4C)) ||
             (M2C_FIELD(temp_ip, s32(**)(s32 *, s32, u8), 0x1C)(M2C_FIELD(arg0, s32 **, 0xB8), temp_r1, temp_r4) == 0))) {
            *M2C_FIELD(arg0, s32 **, 0xB8) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 2) & 1;
        }
        if (var_r5 == 2) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & ~0x40);
            M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x14)(arg0);
            if (M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x14) != NULL) {
                var_r5 = M2C_FIELD(arg0, u8 *, 0x8E);
            } else {
                var_r5 = 0;
            }
            var_r0_2 = M2C_FIELD(arg0, s32 *, 8) & 0x40;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 == 0) {
            if (*M2C_FIELD(arg0, s32 **, 0xB8) != 0) {
                M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 1);
            } else {
                M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & ~1);
            }
        }
        if (var_r5 == 3) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & ~0x40);
            M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x14)(arg0);
        }
    }
    M2C_FIELD(arg0, void **, 0) = (void *) (M2C_FIELD(arg0, void **, 0) + 3);
}
