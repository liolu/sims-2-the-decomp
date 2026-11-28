#include "m2c.h"

extern M2C_UNK data_0213d3fc;
extern M2C_UNK data_0213d404;
extern s32 data_027e0000;

void func_0204edcc(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0213d404 + (data_027e0000 << 5))) = arg0;
    *((M2C_UNK *) ((s8 *) &data_0213d3fc + (data_027e0000 << 5))) = arg1;
}
