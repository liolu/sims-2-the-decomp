#include "m2c.h"

extern M2C_UNK data_02127618;

u16 func_020c3f00(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02127618 + (arg0 * 2)));
}
