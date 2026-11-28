#include "m2c.h"

extern M2C_UNK data_0213d6b4;
extern s32 data_027e0000;

void func_02051b30(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213d6b4 + (data_027e0000 * 0x44))) = arg0;
}
