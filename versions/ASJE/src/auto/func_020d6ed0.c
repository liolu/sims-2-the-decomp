#include "m2c.h"

extern M2C_UNK data_021427bc;

s32 func_020d6ed0(s32 arg0) {
    return arg0 | (*((u16 *) ((s8 *) &data_021427bc + (arg0 * 0x44))) << 8);
}
