#include "m2c.h"

M2C_UNK func_020f71c4();                            /* extern */
extern u16 data_02145a48;

void func_020f677c(s32 arg0) {
    data_02145a48 |= arg0;
    func_020f71c4(arg0);
}
