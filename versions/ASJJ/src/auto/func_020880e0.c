#include "m2c.h"

extern M2C_UNK data_02132dcc;

s32 func_020880e0(s32 arg0, s32 arg1) {
    return *((M2C_UNK *) ((s8 *) &data_02132dcc + (arg0 * 4))) + 0x14 + (arg1 * 8);
}
