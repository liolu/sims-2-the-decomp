/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(s32, M2C_UNK, s32);           /* extern */
s32 func_02046880(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02048108(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020cc1f8(void *);                      /* extern */
extern s32 data_02139fa4;
extern void *data_0213e434;

void func_020cc360(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    void *temp_r2_2;

    temp_r2 = M2C_FIELD(M2C_FIELD(data_0213e434, void **, 0x479C), s32 *, 0x228);
    if (temp_r2 == 0xB) {
        func_02048108(data_02139fa4, 0x2E, 0, 0, 0, 0);
        if (M2C_FIELD(arg0, s32 *, 0xA0) == 1) {
            func_02048108(data_02139fa4, 0x30, 1, 6, 0, M2C_FIELD(arg0, s32 *, 0xC4));
            return;
        }
        func_02048108(data_02139fa4, 0x30, 1, 7, 0, M2C_FIELD(arg0, s32 *, 0xC4));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB4) == M2C_FIELD(arg0, s32 *, 0xB0)) {
        if (temp_r2 == 9) {
            M2C_FIELD(arg0, s32 *, 0xA0) = 1;
            if (M2C_FIELD(arg0, s32 *, 0xC4) == 0) {
                M2C_FIELD(arg0, s32 *, 0xC4) = func_02046880(0x302, 3, 4);
                func_02046384(M2C_FIELD(arg0, s32 *, 0xC4), 0, 0x302);
                temp_r1                      = M2C_FIELD(arg0, s32 *, 0xC4);
                M2C_FIELD(arg0, s32 *, 0xAC) = 1;
                M2C_FIELD(arg0, s32 *, 0xB0) = temp_r1;
                M2C_FIELD(arg0, s32 *, 0xB4) = temp_r1;
                M2C_FIELD(arg0, s32 *, 0xB8) = temp_r1;
            }
        } else if (temp_r2 == 0xA) {
            M2C_FIELD(arg0, s32 *, 0xA0) = 0;
            if (M2C_FIELD(arg0, s32 *, 0xC4) == 0) {
                M2C_FIELD(arg0, s32 *, 0xC4) = func_02046880(0x4400, 3, 4);
                func_02046384(M2C_FIELD(arg0, s32 *, 0xC4), 0, 0x4400);
                temp_r1_2                    = M2C_FIELD(arg0, s32 *, 0xC4);
                M2C_FIELD(arg0, s32 *, 0xAC) = 1;
                M2C_FIELD(arg0, s32 *, 0xB0) = temp_r1_2;
                M2C_FIELD(arg0, s32 *, 0xB4) = temp_r1_2;
                M2C_FIELD(arg0, s32 *, 0xB8) = temp_r1_2;
            }
        }
    }
    temp_r2_2 = M2C_FIELD(data_0213e434, void **, 0x479C);
    temp_r0   = M2C_FIELD(temp_r2_2, s32 *, 0x228);
    if ((temp_r0 != 0xA) && (temp_r0 != 9)) {
        return;
    }
    temp_r1_3 = M2C_FIELD(arg0, s32 *, 0xA8);
    if ((temp_r1_3 != 0) && (temp_r1_3 == M2C_FIELD(temp_r2_2, u8 *, 0x251))) {
        return;
    }
    func_020cc1f8(arg0 + 0xA8);
}
