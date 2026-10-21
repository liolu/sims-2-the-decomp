#include "m2c.h"

extern M2C_UNK data_021332e0;

u16 func_02088254(s32 arg0, s32 arg1) {
    return M2C_FIELD((*((M2C_UNK *) ((s8 *) &data_021332e0 + (arg0 * 4))) + (arg1 * 2)), u16 *, 6);
}
