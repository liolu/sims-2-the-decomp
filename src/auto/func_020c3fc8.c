#include "m2c.h"

extern M2C_UNK data_02127754;

u16 func_020c3fc8(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02127754 + (arg0 * 2)));
}
