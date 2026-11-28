#include "m2c.h"

M2C_UNK func_020f6504(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02145a60;

void func_020f6430(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020f6504(&data_02145a60);
}
