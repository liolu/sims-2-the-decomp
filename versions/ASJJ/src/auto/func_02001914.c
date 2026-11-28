#include "m2c.h"

extern s32 data_02138d04;
extern s32 data_027e0000;
extern M2C_UNK data_02138d08;

void func_02001914(void) {
    s32 temp_r3;

    temp_r3       = data_02138d04 - 1;
    data_02138d04 = temp_r3;
    data_027e0000 = *((M2C_UNK *) ((s8 *) &data_02138d08 + (temp_r3 * 4)));
}
