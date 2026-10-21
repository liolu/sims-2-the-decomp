#include "m2c.h"

M2C_UNK func_020f6a18(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02145f3e;

void func_020f696c(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_020f6a18(&data_02145f3e);
}
