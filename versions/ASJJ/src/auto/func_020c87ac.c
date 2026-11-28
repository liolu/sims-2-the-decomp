#include "m2c.h"

extern M2C_UNK data_02134d30;
extern M2C_UNK data_02135698;

M2C_UNK *func_020c87ac(s32 arg0) {
    if ((arg0 >= 0) && ((u32) arg0 < 0x17U)) {
        return *((M2C_UNK *) ((s8 *) &data_02135698 + (arg0 * 4)));
    }
    return &data_02134d30;
}
