#include "m2c.h"

extern M2C_UNK data_02132dcc;

u16 func_02088120(s32 arg0) {
    return M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_02132dcc + (arg0 * 4))), u16 *, 0xE);
}
