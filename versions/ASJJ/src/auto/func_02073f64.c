#include "m2c.h"

extern M2C_UNK data_0211f500;

s32 func_02073f64(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0211f500 + (arg0 * 4)));
}
