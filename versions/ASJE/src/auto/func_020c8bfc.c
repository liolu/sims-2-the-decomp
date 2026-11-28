#include "m2c.h"

extern M2C_UNK data_02135104;
extern M2C_UNK data_02135a6c;

M2C_UNK *func_020c8bfc(s32 arg0) {
    if ((arg0 >= 0) && ((u32) arg0 < 0x17U)) {
        return *((M2C_UNK *) ((s8 *) &data_02135a6c + (arg0 * 4)));
    }
    return &data_02135104;
}
