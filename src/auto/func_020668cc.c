/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffabc8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02011090(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0203d0a4(M2C_UNK);                     /* extern */
void *func_0204561c(s32);                           /* extern */
M2C_UNK func_02064058(void *);                      /* extern */
M2C_UNK func_02085df8(void *, s32);                 /* extern */
extern void *data_0213e434;
extern void *data_0213e580;
extern s32 data_027e0000;
extern s32 data_027e0004;
extern M2C_UNK data_027e0014;

void func_020668cc(void *arg0) {
    void *temp_r2;
    void *var_r0;

    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02064058(data_0213e434);
    var_r0 = func_0204561c((data_027e0000 * 0x34) + (s32) &data_027e0014);
    if (var_r0 != NULL) {
        do {
            temp_r2 = M2C_FIELD(var_r0, void **, 0);
            if ((M2C_FIELD(temp_r2, volatile s32 *, 4) & 0x02000000) == 0x02000000) {
                M2C_FIELD(temp_r2, volatile s32 *, 4) = (s32) (M2C_FIELD(temp_r2, volatile s32 *, 4) & ~0x02000000);
                M2C_FIELD(temp_r2, volatile s32 *, 4) = (s32) (M2C_FIELD(temp_r2, volatile s32 *, 4) | 1);
            }
            var_r0 = M2C_FIELD(var_r0, void **, 4);
        } while (var_r0 != NULL);
    }
    func_01ffabc8(M2C_FIELD(data_0213e580, volatile s32 *, 0xF8) + 0xE0, 8, 0);
    if (M2C_FIELD(arg0, volatile u8 *, 0x10B) != 0) {
        func_02011090(M2C_FIELD(data_0213e580, volatile s32 *, 0xF8), 0xAC, 1, 1, 0);
    }
    if (M2C_FIELD(arg0, volatile u8 *, 0x10A) != 0) {
        func_0203d0a4(3);
    }
    if ((M2C_FIELD(data_0213e580, volatile u8 *, 0xF0) != 0) && ((s32) M2C_FIELD(data_0213e434, volatile s32 *, 0x44C0) > 0)) {
        func_02085df8(data_0213e580 + 0x100, M2C_FIELD(data_0213e580, volatile s32 *, 0xF4));
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    data_027e0004 &= ~8;
    M2C_FIELD(arg0, volatile s32 *, 0x68) = 0;
}
