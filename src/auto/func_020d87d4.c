#include "m2c.h"

M2C_UNK func_020d3e78(M2C_UNK);                     /* extern */
extern M2C_UNK data_02142848;

void func_020d87d4(s8 arg0) {
    M2C_FIELD(&data_02142848, s8 *, 0x664) = arg0;
    func_020d3e78(4);
}
