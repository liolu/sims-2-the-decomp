/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204cb3c(s32, s32);                         /* extern */
s32 func_020512c0(s32, s32, s32, M2C_UNK, s32);     /* extern */
M2C_UNK func_020519d8(s32, s32, M2C_UNK);           /* extern */
s32 func_020521e0(s32);                             /* extern */
s32 func_02077d90(s32, u32);                        /* extern */
M2C_UNK func_02082834(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02108100(M2C_UNK, M2C_UNK *, s32);     /* extern */
M2C_UNK func_0210a560(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_02131ddc;
extern s32 data_0213e2f4;

void func_0205b0b4(void *arg0, s32 *arg1, M2C_UNK arg2) {
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 sp4;
    s32 temp_r0_2;
    s32 temp_r1_2;
    s8 temp_r0_3;
    s8 temp_r0_4;
    s8 temp_r1_3;
    s8 temp_r1_4;
    s8 temp_r1_5;
    s8 temp_r3;
    u32 var_r7_2;
    u8 temp_r0;
    u8 temp_r1;
    u8 temp_r2;
    u8 temp_r2_2;
    u8 temp_r2_3;
    u8 var_r7;

    if (M2C_FIELD(arg0, u8 *, 0x861) != 0) {
        var_r7                       = 0;
        M2C_FIELD(arg0, u8 *, 0x86C) = 0U;
        spC                          = 0;
        sp4                          = 0;
        sp8                          = 5;
        sp10                         = 0x80;
        do {
            temp_r1 = M2C_FIELD((data_0213e2f4 + 0x2BC0 + (var_r7 * 8)), u8 *, 4);
            if ((temp_r1 != 0x3F) && (M2C_FIELD(((temp_r1 * 0x2C) + data_0213e2f4), s32 *, 0x21EC) == 5)) {
                temp_r0 = M2C_FIELD(arg0, u8 *, 0x86C);
                temp_r3 = M2C_FIELD(arg0, s8 *, 0x8A);
                if (((s32) (temp_r3 - temp_r0) <= 0) && ((s32) (temp_r0 - temp_r3) < 4)) {
                    if (temp_r0 == M2C_FIELD(arg0, s8 *, 0x89)) {
                        M2C_FIELD(arg0, u32 *, 0x870) = (u32) temp_r1;
                        M2C_FIELD(arg0, u8 *, 0x86D)  = var_r7;
                        func_020519d8(6, sp4, -1);
                    } else {
                        func_020519d8(sp8, spC, -1);
                    }
                    func_0210a560(arg2, func_020521e0(M2C_FIELD((data_0213e2f4 + (var_r7 * 8)), u8 *, 0x2BC4) + 0x143));
                    *arg1 = func_020512c0(
                        *arg1, sp10, ((M2C_FIELD(arg0, u8 *, 0x86C) - M2C_FIELD(arg0, s8 *, 0x8A)) * 0x14) + 0x2E, arg2, 1);
                }
                M2C_FIELD(arg0, u8 *, 0x86C) = (u8) (M2C_FIELD(arg0, u8 *, 0x86C) + 1);
            }
            var_r7 += 1;
        } while ((u32) var_r7 < 5U);
        var_r7_2 = 0;
        sp18     = 5;
        sp1C     = 0;
        sp14     = 0;
        sp20     = 0x80;
        do {
            if (func_02077d90(data_0213e2f4 + 0x21DC, var_r7_2) == 0) {
                temp_r1_2 = (var_r7_2 * 0x2C) + (data_0213e2f4 + 0x21DC);
                if (M2C_FIELD(temp_r1_2, s32 *, 0x14) & 1) {
                    temp_r0_2 = M2C_FIELD(temp_r1_2, s32 *, 0x10);
                    if ((temp_r0_2 != 7) && (temp_r0_2 != 8) && (temp_r0_2 != 9)) {
                        temp_r2   = M2C_FIELD(arg0, u8 *, 0x86C);
                        temp_r1_3 = M2C_FIELD(arg0, s8 *, 0x8A);
                        if (((s32) (temp_r1_3 - temp_r2) <= 0) && ((s32) (temp_r2 - temp_r1_3) < 4)) {
                            if (temp_r2 == M2C_FIELD(arg0, s8 *, 0x89)) {
                                M2C_FIELD(arg0, u32 *, 0x870) = var_r7_2;
                                M2C_FIELD(arg0, u8 *, 0x86D)  = (u8) var_r7_2;
                                func_020519d8(6, sp14, -1);
                            } else {
                                func_020519d8(sp18, sp1C, -1);
                            }
                            func_0210a560(arg2, func_020521e0(var_r7_2 + 0x143));
                            *arg1 = func_020512c0(*arg1, sp20,
                                                  ((M2C_FIELD(arg0, u8 *, 0x86C) - M2C_FIELD(arg0, s8 *, 0x8A)) * 0x14) + 0x2E,
                                                  arg2, 1);
                        }
                        M2C_FIELD(arg0, u8 *, 0x86C) = (u8) (M2C_FIELD(arg0, u8 *, 0x86C) + 1);
                    }
                }
            }
            var_r7_2 = (u32) (u16) (var_r7_2 + 1);
        } while (var_r7_2 <= 0x17U);
        temp_r2_2 = M2C_FIELD(arg0, u8 *, 0x86C);
        temp_r1_4 = M2C_FIELD(arg0, s8 *, 0x8A);
        if (((s32) (temp_r1_4 - temp_r2_2) <= 0) && ((s32) (temp_r2_2 - temp_r1_4) < 4)) {
            if (temp_r2_2 == M2C_FIELD(arg0, s8 *, 0x89)) {
                M2C_FIELD(arg0, u32 *, 0x870) = 0x3FU;
                func_020519d8(6, 0, -1);
            } else {
                func_020519d8(5, 0, -1);
            }
            func_02108100(arg2, &data_02131ddc, func_020521e0(0x816));
            *arg1 = func_020512c0(*arg1, 0x80, ((M2C_FIELD(arg0, u8 *, 0x86C) - M2C_FIELD(arg0, s8 *, 0x8A)) * 0x14) + 0x2E,
                                  arg2, 1);
        }
        if ((s32) M2C_FIELD(arg0, s8 *, 0x89) > 0) {
            M2C_FIELD(arg0, s8 *, 0x26) = 1;
        } else {
            M2C_FIELD(arg0, s8 *, 0x26) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s8 *, 0x89) < (s32) M2C_FIELD(arg0, u8 *, 0x86C)) {
            M2C_FIELD(arg0, s8 *, 0x27) = 1;
        } else {
            M2C_FIELD(arg0, s8 *, 0x27) = 0;
        }
    }
    if (M2C_FIELD(arg0, u8 *, 0x90) != 0) {
        if (M2C_FIELD(arg0, s8 *, 0x89) == M2C_FIELD(arg0, u8 *, 0x86C)) {
            M2C_FIELD(arg0, s8 *, 0x88) = 5;
        } else {
            M2C_FIELD(arg0, u16 *, 0x864) = (u16) M2C_FIELD(arg0, u32 *, 0x870);
            if (M2C_FIELD(arg0, u8 *, 0x866) == 1) {
                M2C_FIELD(arg0, s8 *, 0x88)   = 8;
                M2C_FIELD(arg0, s32 *, 0x868) = 0x831;
                if ((u8) func_0204cb3c(0, 1) == 1) {
                    M2C_FIELD(arg0, s32 *, 0x868) = (s32) func_0204cb3c(0x831, 0x834);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x868) = (s32) func_0204cb3c(0x837, 0x83A);
                    func_02082834((M2C_FIELD(arg0, u16 *, 0x864) * 0x2C) + (data_0213e2f4 + 0x21DC), 1, 0);
                }
            } else {
                M2C_FIELD(arg0, s8 *, 0x88) = 9;
            }
        }
    }
    if (M2C_FIELD(arg0, u8 *, 0x8E) != 0) {
        M2C_FIELD(arg0, s8 *, 0x89) = (s8) (M2C_FIELD(arg0, s8 *, 0x89) + 1);
        temp_r2_3                   = M2C_FIELD(arg0, u8 *, 0x86C);
        if ((s32) M2C_FIELD(arg0, s8 *, 0x89) >= (s32) (temp_r2_3 + 1)) {
            M2C_FIELD(arg0, s8 *, 0x89) = (s8) temp_r2_3;
        }
        if ((s32) M2C_FIELD(arg0, s8 *, 0x89) > (s32) (M2C_FIELD(arg0, s8 *, 0x8A) + 3)) {
            M2C_FIELD(arg0, s8 *, 0x8A)++;
        }
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x8F) == 0) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x89) = (s8) (M2C_FIELD(arg0, s8 *, 0x89) - 1);
    temp_r1_5                   = M2C_FIELD(arg0, s8 *, 0x89);
    if (((s32) temp_r1_5 >= (s32) (M2C_FIELD(arg0, u8 *, 0x86C) + 1)) || ((s32) temp_r1_5 < 0)) {
        M2C_FIELD(arg0, s8 *, 0x89) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s8 *, 0x89) < (s32) M2C_FIELD(arg0, s8 *, 0x8A)) {
        M2C_FIELD(arg0, s8 *, 0x8A)--;
    }
}
