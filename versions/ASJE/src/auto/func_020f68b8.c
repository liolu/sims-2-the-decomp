#include "m2c.h"

M2C_UNK func_020f68dc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02145df6;

void func_020f68b8(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020f68dc(&data_02145df6);
}
