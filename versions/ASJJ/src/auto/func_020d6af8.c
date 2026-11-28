#include "m2c.h"

extern M2C_UNK data_0214241c;

s32 func_020d6af8(s32 arg0) {
    return arg0 | (*((u16 *) ((s8 *) &data_0214241c + (arg0 * 0x44))) << 8);
}
