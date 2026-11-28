#include "m2c.h"

extern M2C_UNK data_0211f898;

s32 func_02073f04(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0211f898 + (arg0 * 4)));
}
