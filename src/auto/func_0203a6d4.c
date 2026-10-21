#include "m2c.h"

extern M2C_UNK data_0211e4c0;
extern M2C_UNK data_0211e4c1;

void func_0203a6d4(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, u8 *, 0) = (u8) * ((u8 *) ((s8 *) &data_0211e4c0 + (arg0 * 0x10)) + (arg1 * 4));
    M2C_FIELD(arg2, u8 *, 1) = (u8) * ((u8 *) ((s8 *) &data_0211e4c1 + (arg0 * 0x10)) + (arg1 * 4));
}
