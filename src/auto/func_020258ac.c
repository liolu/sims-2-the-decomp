/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ffaf28(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020117d8(s32, M2C_UNK, M2C_UNK *, void *); /* extern */
M2C_UNK func_02018acc(M2C_UNK *);                   /* extern */
M2C_UNK func_0201b038(M2C_UNK *);                   /* extern */
M2C_UNK func_02025278(void *);                      /* extern */
M2C_UNK func_020253f4(void *);                      /* extern */
s32 func_0204c928(M2C_UNK);                         /* extern */
s32 func_02081f88(s32, s32, M2C_UNK);               /* extern */
extern s32 data_0213e434;
extern void *data_0213e580;

void func_020258ac(void *arg0) {
    s32 sp0[10];
    s32 var_r0;
    s32 var_r5;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x40);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x134) = 0;
        M2C_FIELD(arg0, void **, 0x40)   = NULL;
    }
    if (func_01ffaf28(M2C_FIELD(data_0213e580, s32 *, 0xF8) + 0xE0, 0xD, 0) != 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (func_02081f88(data_0213e434 + 0x21DC, 0x863, -1) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if ((var_r5 != 0) && (var_r0 != 0)) {
        func_020253f4(arg0);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x54)  = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) - 1);
    if ((M2C_FIELD(arg0, s32 *, 0x38) == 0) && (func_0204c928(1) != 0)) {
        func_02025278(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0x64;
    }
    if (func_01ffaf28(M2C_FIELD(arg0, s32 *, 4) + 0xE0, 0xA, 0) != 0) {
        return;
    }
    func_0201b038((M2C_UNK *) sp0);
    func_020117d8(M2C_FIELD(arg0, s32 *, 4), 0xA, (M2C_UNK *) sp0, arg0);
    func_02018acc((M2C_UNK *) sp0);
}
