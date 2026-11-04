/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d59bc(s32);                         /* extern */
extern void *data_02139e8c;
extern void *data_0213d95c;

void func_02059c88(void *arg0) {
    s32 temp_r0;
    s32 temp_r1_2;
    s8 temp_r0_2;
    u16 temp_r1;
    u16 temp_r5;
    u16 temp_r4;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2;
    void *temp_r2_10;
    void *temp_r2_11;
    void *temp_r2_12;
    void *temp_r2_13;
    void *temp_r2_14;
    void *temp_r2_15;
    void *temp_r2_16;
    void *temp_r2_17;
    void *temp_r2_18;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r2_9;

    M2C_FIELD(arg0, s8 *, 0x8E) = 0;
    M2C_FIELD(arg0, s8 *, 0x90) = 0;
    M2C_FIELD(arg0, s8 *, 0x8F) = 0;
    temp_r1                     = M2C_FIELD(data_02139e8c, u16 *, 6);
    if (temp_r1 & 0x40) {
        func_020d59bc(0x159);
        M2C_FIELD(arg0, s8 *, 0x8F)    = 1;
        temp_r2                        = M2C_FIELD(arg0, void **, 0x5C);
        M2C_FIELD(temp_r2, s32 *, 4)   = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
        temp_r2_2                      = M2C_FIELD(arg0, void **, 0x60);
        M2C_FIELD(temp_r2_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_2, s32 *, 4) | 1);
        M2C_FIELD(arg0, s8 *, 0x74)    = 5;
        M2C_FIELD(arg0, u8 *, 0x861)   = 1U;
    } else if (temp_r1 & 0x80) {
        func_020d59bc(0x159);
        M2C_FIELD(arg0, s8 *, 0x8E)    = 1;
        temp_r2_3                      = M2C_FIELD(arg0, void **, 0x6C);
        M2C_FIELD(temp_r2_3, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 4) & ~1);
        temp_r2_4                      = M2C_FIELD(arg0, void **, 0x70);
        M2C_FIELD(temp_r2_4, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_4, s32 *, 4) | 1);
        M2C_FIELD(arg0, s8 *, 0x74)    = 5;
        M2C_FIELD(arg0, u8 *, 0x861)   = 1U;
    } else if (temp_r1 & 1) {
        func_020d59bc(0x159);
        M2C_FIELD(arg0, s8 *, 0x90)    = 1;
        temp_r2_5                      = M2C_FIELD(arg0, void **, 0x64);
        M2C_FIELD(temp_r2_5, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_5, s32 *, 4) & ~1);
        temp_r2_6                      = M2C_FIELD(arg0, void **, 0x68);
        M2C_FIELD(temp_r2_6, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_6, s32 *, 4) | 1);
        M2C_FIELD(arg0, s8 *, 0x74)    = 5;
        M2C_FIELD(arg0, u8 *, 0x861)   = 1U;
    }
    if ((((u32) (M2C_FIELD(data_0213d95c, u8 *, 0) << 0x1B) >> 0x1F) != 0) && (M2C_FIELD(arg0, u8 *, 0x861) == 0)) {
        temp_r5   = M2C_FIELD(data_0213d95c, u16 *, 0x2A);
        temp_r4   = M2C_FIELD(data_0213d95c, u16 *, 0x2C);
        temp_r1_2 = temp_r5 + 0x10;
        if ((temp_r1_2 >= 0xED) && (temp_r1_2 <= 0x10D)) {
            temp_r0 = temp_r4 + 0x10;
            if ((temp_r0 >= 0x11) && (temp_r0 <= 0x31)) {
                M2C_FIELD(arg0, s8 *, 0x88)    = 0xA;
                temp_r1_3                      = M2C_FIELD(arg0, void **, 0x80);
                M2C_FIELD(temp_r1_3, s32 *, 4) = (s32) (M2C_FIELD(temp_r1_3, s32 *, 4) & ~1);
                temp_r1_4                      = M2C_FIELD(arg0, void **, 0x84);
                M2C_FIELD(temp_r1_4, s32 *, 4) = (s32) (M2C_FIELD(temp_r1_4, s32 *, 4) | 1);
            }
        }
        if (((u32) temp_r5 >= 8U) && ((u32) temp_r5 <= 0x58U) && ((u32) temp_r4 >= 0x88U) && ((u32) temp_r4 <= 0xC4U)) {
            func_020d59bc(0x159);
            M2C_FIELD(arg0, s8 *, 0x8F)    = 1;
            temp_r2_7                      = M2C_FIELD(arg0, void **, 0x5C);
            M2C_FIELD(temp_r2_7, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_7, s32 *, 4) & ~1);
            temp_r2_8                      = M2C_FIELD(arg0, void **, 0x60);
            M2C_FIELD(temp_r2_8, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_8, s32 *, 4) | 1);
            M2C_FIELD(arg0, s8 *, 0x74)    = 5;
            M2C_FIELD(arg0, u8 *, 0x861)   = 1U;
        }
        if (((u32) temp_r5 >= 0x58U) && ((u32) temp_r5 <= 0xA8U) && ((u32) temp_r4 >= 0x90U) && ((u32) temp_r4 <= 0xCCU)) {
            func_020d59bc(0x159);
            M2C_FIELD(arg0, s8 *, 0x90)     = 1;
            temp_r2_9                       = M2C_FIELD(arg0, void **, 0x64);
            M2C_FIELD(temp_r2_9, s32 *, 4)  = (s32) (M2C_FIELD(temp_r2_9, s32 *, 4) & ~1);
            temp_r2_10                      = M2C_FIELD(arg0, void **, 0x68);
            M2C_FIELD(temp_r2_10, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_10, s32 *, 4) | 1);
            M2C_FIELD(arg0, s8 *, 0x74)     = 5;
            M2C_FIELD(arg0, u8 *, 0x861)    = 1U;
        }
        if (((u32) temp_r5 >= 0xA8U) && ((u32) temp_r5 <= 0xF8U) && ((u32) temp_r4 >= 0x88U) && ((u32) temp_r4 <= 0xC4U)) {
            func_020d59bc(0x159);
            M2C_FIELD(arg0, s8 *, 0x8E)     = 1;
            temp_r2_11                      = M2C_FIELD(arg0, void **, 0x6C);
            M2C_FIELD(temp_r2_11, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_11, s32 *, 4) & ~1);
            temp_r2_12                      = M2C_FIELD(arg0, void **, 0x70);
            M2C_FIELD(temp_r2_12, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_12, s32 *, 4) | 1);
            M2C_FIELD(arg0, s8 *, 0x74)     = 5;
            M2C_FIELD(arg0, u8 *, 0x861)    = 1U;
        }
    }
    if (M2C_FIELD(arg0, s8 *, 0x74) == 0) {
        temp_r2_13                      = M2C_FIELD(arg0, void **, 0x5C);
        M2C_FIELD(temp_r2_13, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_13, s32 *, 4) | 1);
        temp_r2_14                      = M2C_FIELD(arg0, void **, 0x60);
        M2C_FIELD(temp_r2_14, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_14, s32 *, 4) & ~1);
        temp_r2_15                      = M2C_FIELD(arg0, void **, 0x64);
        M2C_FIELD(temp_r2_15, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_15, s32 *, 4) | 1);
        temp_r2_16                      = M2C_FIELD(arg0, void **, 0x68);
        M2C_FIELD(temp_r2_16, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_16, s32 *, 4) & ~1);
        temp_r2_17                      = M2C_FIELD(arg0, void **, 0x6C);
        M2C_FIELD(temp_r2_17, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_17, s32 *, 4) | 1);
        temp_r2_18                      = M2C_FIELD(arg0, void **, 0x70);
        M2C_FIELD(temp_r2_18, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_18, s32 *, 4) & ~1);
        M2C_FIELD(arg0, s8 *, 0x74)     = -1;
    }
    temp_r0_2 = M2C_FIELD(arg0, s8 *, 0x74);
    if ((s32) temp_r0_2 > 0) {
        M2C_FIELD(arg0, s8 *, 0x74) = (s8) (temp_r0_2 - 1);
    }
}
