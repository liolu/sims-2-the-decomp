#include "m2c.h"

extern M2C_UNK data_021332e0;

u16 func_0208822c(s32 arg0) {
    return M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_021332e0 + (arg0 * 4))), u16 *, 0x10);
}
