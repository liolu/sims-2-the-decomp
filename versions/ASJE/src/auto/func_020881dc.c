#include "m2c.h"

extern M2C_UNK data_021331a0;

u16 func_020881dc(s32 arg0, s32 arg1) {
    return M2C_FIELD((*((M2C_UNK *) ((s8 *) &data_021331a0 + (arg0 * 4))) + (arg1 * 2)), u16 *, 6);
}
