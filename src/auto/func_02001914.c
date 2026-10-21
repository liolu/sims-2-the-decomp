#include "m2c.h"

extern s32 data_02139224;
extern M2C_UNK data_02139228;
extern s32 data_027e0000;

void func_02001914(void) {
    s32 temp_r3;

    temp_r3       = data_02139224 - 1;
    data_02139224 = temp_r3;
    data_027e0000 = *((M2C_UNK *) ((s8 *) &data_02139228 + (temp_r3 * 4)));
}
