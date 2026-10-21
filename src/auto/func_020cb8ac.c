#include "m2c.h"

M2C_UNK func_020105d0(s32);                         /* extern */
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_020cb8ac(void) {
    func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
}
