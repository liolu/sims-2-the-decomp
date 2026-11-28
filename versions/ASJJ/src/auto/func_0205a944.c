/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0205134c(s32, M2C_UNK, s32, u8 *, s32);    /* extern */
s32 func_02051464(s32, s32, s32, M2C_UNK, u8 **, s32, s32 *); /* extern */
u8 *func_02051720(u8 *, M2C_UNK);                   /* extern */
M2C_UNK func_02051b54(s32, M2C_UNK, M2C_UNK);       /* extern */
u8 *func_020524a8(s32);                             /* extern */
M2C_UNK func_0208265c(s32, M2C_UNK);                /* extern */
s32 func_020d4ac8(s32);                             /* extern */
s32 func_020d54a8();                                /* extern */
M2C_UNK func_02107d28(u8 *, M2C_UNK *, u8 *);       /* extern */
M2C_UNK func_0210a188(u8 *, u8 *);                  /* extern */
extern M2C_UNK data_02131a0c;
extern u8 data_0213df44;
extern s32 data_0213df5c;

void func_0205a944(void *arg0, s32 *arg1, u8 *arg2) {
    s32 sp1C;
    u8 *sp20;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    u8 *spC;
    s8 temp_r0;
    s8 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r1;
    s8 temp_r1_2;
    s8 temp_r1_3;
    u8 *var_r0;
    u8 *var_r8;
    u8 var_r7;

    spC = arg2;
    if (M2C_FIELD(arg0, u8 *, 0x861) != 0) {
        temp_r0 = M2C_FIELD(arg0, s8 *, 0x8A);
        if (((s32) temp_r0 <= 0) && ((s32) temp_r0 < 4)) {
            if (M2C_FIELD(arg0, s8 *, 0x89) == 0) {
                func_02051b54(6, 0, -1);
            } else {
                func_02051b54(5, 0, -1);
            }
            func_0210a188(spC, func_020524a8(M2C_FIELD(arg0, u16 *, 0x864) + 0x143));
            *arg1 = func_0205134c(*arg1, 0x80, ((0 - M2C_FIELD(arg0, s8 *, 0x8A)) * 0x14) + 0x2E, spC, 1);
        }
        sp1C   = 0x7FFFFFFF;
        var_r0 = func_020524a8(M2C_FIELD(arg0, s32 *, 0x868));
        while ((var_r0 != NULL) && (*var_r0 != 0)) {
            var_r0 = func_02051720(var_r0, 0xAA);
        }
        func_0210a188(spC, func_020524a8(M2C_FIELD(arg0, s32 *, 0x868)));
        var_r8 = spC;
        var_r7 = 1;
        if (*spC != 0) {
            sp10 = 5;
            sp14 = 1;
            sp18 = 0x80;
            do {
                temp_r1 = M2C_FIELD(arg0, s8 *, 0x8A);
                if (((s32) (temp_r1 - var_r7) <= 0) && ((s32) (var_r7 - temp_r1) < 4)) {
                    if (M2C_FIELD(arg0, s8 *, 0x89) == var_r7) {
                        func_02051b54(6, 0, -1);
                    } else {
                        func_02051b54(sp10, 0, -1);
                    }
                    sp20   = var_r8;
                    *arg1  = func_02051464(*arg1, sp18, ((var_r7 - M2C_FIELD(arg0, s8 *, 0x8A)) * 0x14) + 0x2E, 0xAA, &sp20,
                                           sp14, &sp1C);
                    var_r8 = sp20;
                } else {
                    var_r8 = func_02051720(var_r8, 0xAA);
                }
                var_r7 += 1;
            } while (*var_r8 != 0);
        }
        data_0213df44 = var_r7;
        if ((M2C_FIELD(arg0, u8 *, 0x25) != 0) && (func_020d4ac8(M2C_FIELD(arg0, s32 *, 0x4C)) == 0)) {
            func_0208265c((M2C_FIELD(arg0, u16 *, 0x864) * 0x2C) + (data_0213df5c + 0x21E4), 2);
            M2C_FIELD(arg0, s32 *, 0x4C) = func_020d54a8();
            M2C_FIELD(arg0, u8 *, 0x25)  = 0U;
        }
        temp_r1_2 = M2C_FIELD(arg0, s8 *, 0x8A);
        if (((s32) (temp_r1_2 - var_r7) <= 0) && ((s32) (var_r7 - temp_r1_2) < 4)) {
            if (M2C_FIELD(arg0, s8 *, 0x89) == var_r7) {
                func_02051b54(6, 0, -1);
            } else {
                func_02051b54(5, 0, -1);
            }
            func_02107d28(spC, &data_02131a0c, func_020524a8(0x816));
            *arg1 = func_0205134c(*arg1, 0x80, ((var_r7 - M2C_FIELD(arg0, s8 *, 0x8A)) * 0x14) + 0x2E, spC, 1);
        }
        M2C_FIELD(arg0, s8 *, 0x26) = 0;
        M2C_FIELD(arg0, s8 *, 0x27) = 0;
        if ((s32) M2C_FIELD(arg0, s8 *, 0x89) < (s32) var_r7) {
            M2C_FIELD(arg0, s8 *, 0x27) = 1;
        }
        if ((s32) M2C_FIELD(arg0, s8 *, 0x89) > 0) {
            M2C_FIELD(arg0, s8 *, 0x26) = 1;
        }
    }
    if (M2C_FIELD(arg0, u8 *, 0x8E) != 0) {
        M2C_FIELD(arg0, s8 *, 0x89) = (s8) (M2C_FIELD(arg0, s8 *, 0x89) + 1);
        if ((s32) M2C_FIELD(arg0, s8 *, 0x89) >= (s32) (data_0213df44 + 1)) {
            M2C_FIELD(arg0, s8 *, 0x89) = (s8) data_0213df44;
        }
        if ((s32) M2C_FIELD(arg0, s8 *, 0x89) > (s32) (M2C_FIELD(arg0, s8 *, 0x8A) + 3)) {
            M2C_FIELD(arg0, s8 *, 0x8A)++;
        }
    } else if (M2C_FIELD(arg0, u8 *, 0x8F) != 0) {
        M2C_FIELD(arg0, s8 *, 0x89) = (s8) (M2C_FIELD(arg0, s8 *, 0x89) - 1);
        temp_r1_3                   = M2C_FIELD(arg0, s8 *, 0x89);
        if (((s32) temp_r1_3 >= (s32) (data_0213df44 + 1)) || ((s32) temp_r1_3 < 0)) {
            M2C_FIELD(arg0, s8 *, 0x89) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s8 *, 0x89) < (s32) M2C_FIELD(arg0, s8 *, 0x8A)) {
            M2C_FIELD(arg0, s8 *, 0x8A)--;
        }
    }
    if (M2C_FIELD(arg0, u8 *, 0x90) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s8 *, 0x89) != data_0213df44) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x88)   = 7;
    M2C_FIELD(arg0, s8 *, 0x86C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x86D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x86E)  = 0;
    M2C_FIELD(arg0, s32 *, 0x870) = 0x3F;
}
