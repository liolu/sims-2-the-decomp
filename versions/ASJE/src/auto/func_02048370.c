/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f64c8(M2C_UNK);                     /* extern */
M2C_UNK func_020f9874(M2C_UNK);                     /* extern */
M2C_UNK func_020f9a04(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fbd50(M2C_UNK, u16);                /* extern */
extern s32 data_027e10fc;
extern s32 data_027e1100;
extern M2C_UNK func_01ffb8d0;

void func_02048370(void *arg0) {
    u16 temp_r1;

    M2C_FIELD(arg0, s8 *, 0x30) = 1;
    data_027e10fc               = M2C_FIELD(arg0, s32 *, 0x28);
    data_027e1100               = M2C_FIELD(arg0, s32 *, 0x2C);
    func_020f64c8(1);
    func_020f9a04(2, &func_01ffb8d0);
    func_020f9874(2);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_020fbd50(1, temp_r1);
    *(u16 *) 0x04000004 |= 0x10;
}
