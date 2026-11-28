#include "m2c.h"

extern M2C_UNK data_021331a0;

s32 func_02088188(s32 arg0, s32 arg1) {
    return *((M2C_UNK *) ((s8 *) &data_021331a0 + (arg0 * 4))) + 0x14 + (arg1 * 8);
}
