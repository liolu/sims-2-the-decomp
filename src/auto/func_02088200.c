#include "m2c.h"

extern M2C_UNK data_021332e0;

s32 func_02088200(s32 arg0, s32 arg1) {
    return *((M2C_UNK *) ((s8 *) &data_021332e0 + (arg0 * 4))) + 0x14 + (arg1 * 8);
}
