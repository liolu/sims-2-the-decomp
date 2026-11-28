#include "m2c.h"

extern M2C_UNK data_0213db1c;
extern s32 data_027e0000;

void func_020519b4(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213db1c + (data_027e0000 * 0x44))) = arg0;
}
