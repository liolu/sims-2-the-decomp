#include "m2c.h"

extern M2C_UNK data_021428fc;

s32 func_020d700c(s32 arg0) {
    return arg0 | (*((u16 *) ((s8 *) &data_021428fc + (arg0 * 0x44))) << 8);
}
