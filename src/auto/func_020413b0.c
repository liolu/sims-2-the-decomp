/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02082a3c(s32, u8, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02082a94(s32, u8, s16, u8);            /* extern */
s32 func_02082ea0(s32);                             /* extern */
M2C_UNK func_0208b3d4(void *, M2C_UNK);             /* extern */
extern s32 data_0213e434;

void func_020413b0(s32 arg0, void *arg1) {
    u8 *p;
    u8 *t;
    s32 v;
    s32 var_r2;
    s32 var_r4;
    u8 temp_r1;
    void *temp_r0;
    void *temp_r3;
    void *temp_r5;

    var_r4 = 0;
    if (func_02082a3c(data_0213e434 + 0x2FA4, M2C_FIELD(arg1, u8 *, 2), 0, 0) == 1) {
        var_r4 = 1;
    }
    func_02082a94(data_0213e434 + 0x2FA4, M2C_FIELD(arg1, u8 *, 2), M2C_FIELD(arg1, s16 *, 0), M2C_FIELD(arg1, u8 *, 3));
    temp_r5 = M2C_FIELD(((M2C_FIELD(arg1, u8 *, 2) * 0x2C) + data_0213e434), void **, 0x2200);
    if (temp_r5 == NULL) {
        return;
    }
    if (func_02082ea0(data_0213e434 + 0x2FA4) != 0xD8) {
        func_0208b3d4(M2C_FIELD(temp_r5, void **, 0x130), 6);
    }
    if (var_r4 != 0) {
        return;
    }
    temp_r3 = M2C_FIELD(temp_r5, void **, 0x130);
    p       = (u8 *) temp_r3;
    var_r2  = M2C_FIELD(temp_r3, s32 *, 8);
    if (var_r2 > (s32) M2C_FIELD(temp_r3, s32 *, 0xC)) {
        do {
            t = p + (var_r2 - 1);
            v = t[0x10];
            t = p + var_r2;
            var_r2 -= 1;
            t[0x10] = v;
        } while (var_r2 > (s32) M2C_FIELD(temp_r3, s32 *, 0xC));
    }
    M2C_FIELD((temp_r3 + M2C_FIELD(temp_r3, s32 *, 0xC)), s8 *, 0x10) = 7;
    M2C_FIELD(temp_r3, s32 *, 0xC)                                    = (s32) (M2C_FIELD(temp_r3, s32 *, 0xC) + 1);
    M2C_FIELD(temp_r3, s32 *, 8)                                      = (s32) (M2C_FIELD(temp_r3, s32 *, 8) + 1);
}
