#include "m2c.h"

extern M2C_UNK data_0213d91c;
extern M2C_UNK data_0213d924;
extern s32 data_027e0000;

void func_0204ee30(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0213d924 + (data_027e0000 << 5))) = arg0;
    *((M2C_UNK *) ((s8 *) &data_0213d91c + (data_027e0000 << 5))) = arg1;
}
