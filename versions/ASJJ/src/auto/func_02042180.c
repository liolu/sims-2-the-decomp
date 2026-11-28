/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffabc8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_01ffaf28(s32, M2C_UNK, M2C_UNK);           /* extern */
extern void *data_02139a84;
extern s32 *data_0213df5c;
extern void *data_0213e0a8;

void func_02042180(s32 arg0, u8 *arg1) {
    s32 var_ip;
    s32 var_r0;
    u8 temp_r0;
    void *temp_r1;

    temp_r0 = *arg1 ^ 1;
    if (temp_r0 != 0) {
        if (func_01ffaf28(M2C_FIELD(data_0213e0a8, s32 *, 0xF8) + 0xE0, 0x13, 0) != 0) {
            func_01ffabc8(M2C_FIELD(data_0213e0a8, s32 *, 0xF8) + 0xE0, 0x13, 0);
        } else if (func_01ffaf28(M2C_FIELD(data_0213e0a8, s32 *, 0xF8) + 0xE0, 0x11, 0) != 0) {
            func_01ffabc8(M2C_FIELD(data_0213e0a8, s32 *, 0xF8) + 0xE0, 0x11, 0);
        } else if (func_01ffaf28(M2C_FIELD(data_0213e0a8, s32 *, 0xF8) + 0xE0, 0x12, 0) != 0) {
            func_01ffabc8(M2C_FIELD(data_0213e0a8, s32 *, 0xF8) + 0xE0, 0x12, 0);
        }
    }
    if (temp_r0 != 0) {
        var_ip = 1;
    } else {
        var_ip = 0;
    }
    *data_0213df5c = (*data_0213df5c & ~0x40) | (var_ip << 6);
    *data_0213df5c = (*data_0213df5c & ~0x80) | (var_ip << 7);
    temp_r1        = M2C_FIELD(data_02139a84, void **, 0xDAC);
    if (temp_r1 != NULL) {
        var_r0 = M2C_FIELD(temp_r1, s32 *, 4);
    } else {
        var_r0 = 0x32;
    }
    if (var_r0 != 0xC) {
        return;
    }
    if (temp_r0 != 0) {
        M2C_FIELD(temp_r1, s32 *, 0x6C) = 2;
        return;
    }
    M2C_FIELD(temp_r1, s32 *, 0x6C) = 0;
}
