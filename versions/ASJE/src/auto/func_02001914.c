#include "m2c.h"

extern s32 data_021390e4;
extern s32 data_027e0000;
extern M2C_UNK data_021390e8;

void func_02001914(void) {
    s32 temp_r3;

    temp_r3       = data_021390e4 - 1;
    data_021390e4 = temp_r3;
    data_027e0000 = *((M2C_UNK *) ((s8 *) &data_021390e8 + (temp_r3 * 4)));
}
