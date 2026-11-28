/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffabc8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02011090(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0203d02c(M2C_UNK);                     /* extern */
void *func_020455a4(s32);                           /* extern */
M2C_UNK func_02063fe0(void *);                      /* extern */
M2C_UNK func_02085d80(void *, s32);                 /* extern */
extern void *data_0213e2f4;
extern void *data_0213e440;
extern s32 data_027e0000;
extern s32 data_027e0004;
extern M2C_UNK data_027e0014;

void func_02066854(void *arg0) {
    void *temp_r2;
    void *var_r0;

    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02063fe0(data_0213e2f4);
    var_r0 = func_020455a4((data_027e0000 * 0x34) + (s32) &data_027e0014);
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
    func_01ffabc8(M2C_FIELD(data_0213e440, volatile s32 *, 0xF8) + 0xE0, 8, 0);
    if (M2C_FIELD(arg0, volatile u8 *, 0x10B) != 0) {
        func_02011090(M2C_FIELD(data_0213e440, volatile s32 *, 0xF8), 0xAC, 1, 1, 0);
    }
    if (M2C_FIELD(arg0, volatile u8 *, 0x10A) != 0) {
        func_0203d02c(3);
    }
    if ((M2C_FIELD(data_0213e440, volatile u8 *, 0xF0) != 0) && ((s32) M2C_FIELD(data_0213e2f4, volatile s32 *, 0x44C0) > 0)) {
        func_02085d80(data_0213e440 + 0x100, M2C_FIELD(data_0213e440, volatile s32 *, 0xF4));
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    data_027e0004 &= ~8;
    M2C_FIELD(arg0, volatile s32 *, 0x68) = 0;
}
