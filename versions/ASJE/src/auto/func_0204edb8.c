#include "m2c.h"

extern M2C_UNK data_0213d7dc;
extern M2C_UNK data_0213d7e4;
extern s32 data_027e0000;

void func_0204edb8(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0213d7e4 + (data_027e0000 << 5))) = arg0;
    *((M2C_UNK *) ((s8 *) &data_0213d7dc + (data_027e0000 << 5))) = arg1;
}
