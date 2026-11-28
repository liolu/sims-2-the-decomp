#include "m2c.h"

extern M2C_UNK data_02127280;

u16 func_020c3ab0(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02127280 + (arg0 * 2)));
}
