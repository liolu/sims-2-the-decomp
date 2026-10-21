#include "m2c.h"

extern M2C_UNK data_02148008;

void func_02101a10(s32 arg0) {
    M2C_FIELD(&data_02148008, s32 *, 0xC) = arg0;
}
