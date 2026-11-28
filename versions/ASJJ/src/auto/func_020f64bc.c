#include "m2c.h"

M2C_UNK func_020f6504(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02145a58;

void func_020f64bc(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_020f6504(&data_02145a58);
}
