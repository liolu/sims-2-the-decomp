#include "engine.h"
#include "m2c.h"

void func_020f76d8(M2C_UNK);

extern u16 data_02145f28;

void func_020f6c90(s32 arg0) {
    data_02145f28 |= arg0;
    func_020f76d8(arg0);
}
