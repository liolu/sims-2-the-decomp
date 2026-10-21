#include "m2c.h"

extern M2C_UNK data_0211f9d4;

s32 func_02073f7c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0211f9d4 + (arg0 * 4)));
}
