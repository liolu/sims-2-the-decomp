/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02050318();                            /* extern */
M2C_UNK func_020503d0();                            /* extern */
M2C_UNK func_02050ab8(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_020512c0(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_020515f4(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020519b4(M2C_UNK);                     /* extern */
M2C_UNK func_020519d8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020521e0(s32);                             /* extern */
M2C_UNK func_02067620(s32, u16, u16);               /* extern */
s32 func_02082798(s32);                             /* extern */
void *func_0208af70(s32);                           /* extern */
extern s32 data_0213e2f4;

void func_0206fd18(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r0;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    void *temp_r1_2;
    void *temp_r0_2;
    void *temp_r2_2;
    void *temp_r2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r0 < 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(M2C_FIELD((arg0 + (temp_r0 * 4)), void **, 0x2C), u16 *, 0x18);
    temp_r0_2                    = func_0208af70(M2C_FIELD(arg0, s32 *, 0x28));
    temp_r4                      = (M2C_FIELD(arg0, s32 *, 0x28) * 0x2C) + (data_0213e2f4 + 0x21DC);
    func_02067620(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r0_2, u16 *, 0xA), M2C_FIELD(temp_r0_2, u16 *, 0xC));
    temp_r1 = M2C_FIELD(temp_r4, s32 *, 0x14);
    if (temp_r1 & 2) {
        temp_r2 = M2C_FIELD(arg0, void **, 0xA8);
        if (temp_r1 & 4) {
            var_r0 = 1;
        } else {
            var_r0 = 7;
        }
        M2C_FIELD(temp_r2, s32 *, 4)      = (s32) (M2C_FIELD(temp_r2, s32 *, 4) | 1);
        temp_r2_2                         = M2C_FIELD(arg0, void **, 0xA8);
        M2C_FIELD(temp_r2_2, s32 *, 0x14) = (s32) ((M2C_FIELD(temp_r2_2, s32 *, 0x14) & ~0xF000) | ((var_r0 & 0xF) << 0xC));
    } else {
        temp_r1_2                      = M2C_FIELD(arg0, void **, 0xA8);
        M2C_FIELD(temp_r1_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r1_2, s32 *, 4) & ~1);
    }
    var_r8 = 8;
    do {
        func_02050ab8(0x14, var_r8, 0x1F);
        var_r8 += 1;
    } while (var_r8 < 0xB);
    var_r8_2 = 0xD;
    do {
        func_02050ab8(0x14, var_r8_2, 0x1F);
        var_r8_2 += 1;
    } while (var_r8_2 < 0x10);
    var_r8_3 = 0x10;
    do {
        func_02050ab8(0xA, var_r8_3, 0x1F);
        var_r8_3 += 1;
    } while (var_r8_3 < 0x17);
    temp_r6 = func_020512c0(M2C_FIELD(arg0, s32 *, 0x18), 0xCC, 0x48, func_020521e0(M2C_FIELD(temp_r4, u8 *, 0x1A) + 0xB8), 1);
    temp_r6_2 = func_020512c0(
        temp_r6, 0xCC, 0x6F, func_020521e0(M2C_FIELD(temp_r4, u8 *, 0x1B) + ((M2C_FIELD(temp_r4, u8 *, 0x1A) * 7) + 0xC0)), 1);
    func_020503d0();
    func_020519d8(3, 0, -1);
    func_020519b4(0xD);
    temp_r4_2 = func_020515f4(temp_r6_2, 0x53, 0x83, 0x9D, func_02082798(temp_r4), 0);
    func_020515f4(temp_r4_2, 0x53, 0x90, 0x9D, func_020521e0(M2C_FIELD(arg0, s32 *, 0x28) + 0x185), 0);
    func_02050318();
}
