#include "m2c.h"

M2C_UNK func_020f6a18(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02145f36;

void func_020f69f4(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020f6a18(&data_02145f36);
}
