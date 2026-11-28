#include "m2c.h"

M2C_UNK func_02010650(s32, M2C_UNK);                /* extern */
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_02010820(void) {
    func_02010650((data_027e0000 * 0x34) + (s32) &data_027e0014, 1);
}
