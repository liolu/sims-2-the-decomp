#include "m2c.h"

M2C_UNK func_020f68dc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02145e00;

void func_020f6808(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020f68dc(&data_02145e00);
}
