#include "m2c.h"

M2C_UNK func_020f759c();                            /* extern */
extern u16 data_02145de8;

void func_020f6b54(s32 arg0) {
    data_02145de8 |= arg0;
    func_020f759c(arg0);
}
