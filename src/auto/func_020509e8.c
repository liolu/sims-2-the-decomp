#include "m2c.h"

M2C_UNK func_02051d90(M2C_UNK, void *);             /* extern */
extern M2C_UNK data_0213dcc8;

void func_020509e8(M2C_UNK arg0, s32 arg1) {
    func_02051d90(arg0, (M2C_UNK *) ((s8 *) &data_0213dcc8 + (arg1 << 6)));
}
