#include "m2c.h"

M2C_UNK func_01ffb1f0(s32);                         /* extern */
extern M2C_UNK data_0213d928;
extern s32 data_027e0000;

void func_0204ef80(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0213d928 + (data_027e0000 << 5))) = arg1;
    func_01ffb1f0(arg1);
}
