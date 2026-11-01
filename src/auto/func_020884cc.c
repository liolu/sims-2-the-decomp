/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02088294();                 /* extern */
M2C_UNK func_0208836c();                      /* extern */

void func_020884cc(void *arg0, void *arg1) {
    s32 var_r0;
    u16 temp_r0;
    u16 temp_r0_3;
    void *temp_r0_2;
    void *temp_r1;

    if (((u32) (M2C_FIELD(arg0, u16 *, 4) << 0x1F) >> 0x1F) != 1) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 8);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, u16 *, 8) = (u16) (temp_r0 - 1);
        if (M2C_FIELD(arg0, u16 *, 8) == 0) {
            if (((u32) (M2C_FIELD(arg0, u16 *, 4) << 0x1F) >> 0x1F) != 1) {
                return;
            }
            temp_r0_2 = M2C_FIELD(arg0, void **, 0);
            if (temp_r0_2 != NULL) {
                if (temp_r0_2 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r0_2, void **, 0), M2C_UNK(**)(void *), 4)(temp_r0_2);
                }
                M2C_FIELD(arg0, void **, 0) = NULL;
            }
            M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) & ~1);
            return;
        }
    }
    func_02088294(arg0, arg1 + 0x78);
    if (((u32) (M2C_FIELD(arg0, u16 *, 4) << 0x1B) >> 0x1C) == 1) {
        M2C_FIELD(arg0, u16 *, 0xA) = (u16) (M2C_FIELD(arg0, u16 *, 0xA) - 1);
        temp_r0_3                   = M2C_FIELD(arg0, u16 *, 0xA);
        if (temp_r0_3 == 0) {
            M2C_FIELD(arg0, u16 *, 0xA) = 0x10U;
            func_0208836c(arg0);
        } else if (temp_r0_3 == 8) {
            func_0208836c(arg0);
        }
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0);
    if ((M2C_FIELD(arg1, s32 *, 4) & 1) == 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) | 1);
        return;
    }
    M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) & ~1);
}
