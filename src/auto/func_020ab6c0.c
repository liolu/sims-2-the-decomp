/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020ab6c0(void **arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4, u8 arg5, u8 arg6) {
    void *temp_lr;
    void *temp_lr_2;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r4;

    M2C_FIELD(*arg0, u8 *, 0) = arg1;
    if (arg5 != 0xFF) {
        temp_r4                     = *arg0;
        M2C_FIELD(temp_r4, u8 *, 0) = (u8) (M2C_FIELD(temp_r4, u8 *, 0) | 0xC0);
        M2C_FIELD(*arg0, u8 *, 1)   = arg5;
        M2C_FIELD(*arg0, u8 *, 2)   = arg6;
        if (arg2 != 0xFF) {
            temp_lr                     = *arg0;
            M2C_FIELD(temp_lr, u8 *, 1) = (u8) (M2C_FIELD(temp_lr, u8 *, 1) | 0x20);
            M2C_FIELD(*arg0, u8 *, 3)   = arg2;
            if (arg3 != 0xFF) {
                temp_r2                     = *arg0;
                M2C_FIELD(temp_r2, u8 *, 1) = (u8) (M2C_FIELD(temp_r2, u8 *, 1) | 0x40);
                M2C_FIELD(*arg0, u8 *, 4)   = arg3;
                if (arg4 == 0xFF) {
                    *arg0 += 5;
                    return;
                }
                temp_r2_2                     = *arg0;
                M2C_FIELD(temp_r2_2, u8 *, 1) = (u8) (M2C_FIELD(temp_r2_2, u8 *, 1) | 0x80);
                M2C_FIELD(*arg0, s8 *, 5)     = (s8) arg4;
                *arg0 += 6;
                return;
            }
            if (arg4 == 0xFF) {
                *arg0 += 4;
                return;
            }
            temp_r2_3                     = *arg0;
            M2C_FIELD(temp_r2_3, u8 *, 1) = (u8) (M2C_FIELD(temp_r2_3, u8 *, 1) | 0x80);
            M2C_FIELD(*arg0, u8 *, 4)     = (u8) arg4;
            *arg0 += 5;
            return;
        }
        if (arg3 != 0xFF) {
            temp_r2_4                     = *arg0;
            M2C_FIELD(temp_r2_4, u8 *, 1) = (u8) (M2C_FIELD(temp_r2_4, u8 *, 1) | 0x40);
            M2C_FIELD(*arg0, u8 *, 3)     = arg3;
            if (arg4 == 0xFF) {
                *arg0 += 4;
                return;
            }
            temp_r2_5                     = *arg0;
            M2C_FIELD(temp_r2_5, u8 *, 1) = (u8) (M2C_FIELD(temp_r2_5, u8 *, 1) | 0x80);
            M2C_FIELD(*arg0, u8 *, 4)     = (u8) arg4;
            *arg0 += 5;
            return;
        }
        if (arg4 == 0xFF) {
            *arg0 += 3;
            return;
        }
        temp_r2_6                     = *arg0;
        M2C_FIELD(temp_r2_6, u8 *, 1) = (u8) (M2C_FIELD(temp_r2_6, u8 *, 1) | 0x80);
        M2C_FIELD(*arg0, u8 *, 3)     = (u8) arg4;
        *arg0 += 4;
        return;
    }
    if ((arg2 != 0xFF) || (arg3 != 0xFF)) {
        temp_lr_2                     = *arg0;
        M2C_FIELD(temp_lr_2, u8 *, 0) = (u8) (M2C_FIELD(temp_lr_2, u8 *, 0) | 0x80);
        M2C_FIELD(*arg0, u8 *, 1)     = arg2;
        M2C_FIELD(*arg0, u8 *, 2)     = arg3;
        if (arg4 == 0xFF) {
            *arg0 += 3;
            return;
        }
        temp_r2_7                     = *arg0;
        M2C_FIELD(temp_r2_7, u8 *, 1) = (u8) (M2C_FIELD(temp_r2_7, u8 *, 1) | 0x80);
        M2C_FIELD(*arg0, u8 *, 3)     = (u8) arg4;
        *arg0 += 4;
        return;
    }
    if (arg4 == 0xFF) {
        return;
    }
    temp_r2_8                     = *arg0;
    M2C_FIELD(temp_r2_8, u8 *, 0) = (u8) (M2C_FIELD(temp_r2_8, u8 *, 0) | 0x40);
    M2C_FIELD(*arg0, u8 *, 1)     = (u8) arg4;
    *arg0 += 2;
}
