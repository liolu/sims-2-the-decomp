#include "m2c.h"

extern M2C_UNK data_021331a0;

u16 func_02088208(s32 arg0) {
    return M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_021331a0 + (arg0 * 4))), u16 *, 0);
}
