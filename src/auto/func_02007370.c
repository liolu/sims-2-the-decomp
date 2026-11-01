/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213d95c;

void func_02007370(void *arg0) {
    u8 var_lr;
    s32 temp_ip;
    s32 temp_lr;
    u8 temp_r3_3;
    u8 var_r1;
    void *temp_ip_2;
    void *temp_ip_3;
    void *temp_ip_4;
    void *temp_ip_5;
    void *temp_r3;
    void *temp_r3_2;

    if (M2C_FIELD(arg0, u8 *, 0x2F4) == 0) {
        var_lr = 0;
        do {
            temp_ip = (var_lr * 0x14) + (s32) arg0;
            temp_r3 = M2C_FIELD(temp_ip, void **, 0xC4);
            if (temp_r3 != NULL) {
                M2C_FIELD(temp_r3, s32 *, 4) = (s32) (M2C_FIELD(temp_r3, s32 *, 4) & ~1);
            }
            temp_r3_2 = M2C_FIELD(temp_ip, void **, 0x18C);
            if ((temp_r3_2 != NULL) && (M2C_FIELD(arg0, u8 *, 0x2F2) == 1)) {
                M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 4) & ~1);
            }
            var_lr += 1;
        } while ((u32) var_lr < 0xAU);
        if (((u32) (*data_0213d95c << 0x1B) >> 0x1F) == 0) {
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x2F0) = 0;
        if (M2C_FIELD(arg0, u8 *, 0x2F1) == 0) {
            M2C_FIELD(arg0, u8 *, 0x2F1) = 1U;
        } else {
            M2C_FIELD(arg0, u8 *, 0x2F1) = 0U;
        }
        var_r1 = 0;
        do {
            if (M2C_FIELD(arg0, u8 *, 0x2F1) == 0) {
                temp_lr   = (var_r1 * 0x14) + (s32) arg0;
                temp_ip_2 = M2C_FIELD(temp_lr, void **, 0xC4);
                if (temp_ip_2 != NULL) {
                    M2C_FIELD(temp_ip_2, s32 *, 4) = (s32) (M2C_FIELD(temp_ip_2, s32 *, 4) | 1);
                }
                temp_ip_3 = M2C_FIELD(temp_lr, void **, 0x18C);
                if (temp_ip_3 != NULL) {
                    M2C_FIELD(temp_ip_3, s32 *, 4) = (s32) (M2C_FIELD(temp_ip_3, s32 *, 4) & ~1);
                }
            } else {
                temp_r3_3 = M2C_FIELD(arg0, u8 *, 0x2F2);
                if (temp_r3_3 == 1) {
                    temp_ip_4 = M2C_FIELD(((var_r1 * 0x14) + (s32) arg0), void **, 0x18C);
                    if (temp_ip_4 != NULL) {
                        M2C_FIELD(temp_ip_4, s32 *, 4) = (s32) (M2C_FIELD(temp_ip_4, s32 *, 4) | 1);
                    }
                } else if (temp_r3_3 == 0) {
                    temp_ip_5 = M2C_FIELD(((var_r1 * 0x14) + (s32) arg0), void **, 0x18C);
                    if (temp_ip_5 != NULL) {
                        M2C_FIELD(temp_ip_5, s32 *, 4) = (s32) (M2C_FIELD(temp_ip_5, s32 *, 4) | 1);
                    }
                }
            }
            var_r1 += 1;
        } while ((u32) var_r1 < 0xAU);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x2F0) = 0;
    if (M2C_FIELD(arg0, u8 *, 0x2F1) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2F1) = 1U;
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2F1) = 0U;
}
