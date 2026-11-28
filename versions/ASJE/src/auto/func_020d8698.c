#include "m2c.h"

M2C_UNK func_020d3d3c(M2C_UNK);                     /* extern */
extern M2C_UNK data_02142708;

void func_020d8698(s8 arg0) {
    M2C_FIELD(&data_02142708, s8 *, 0x664) = arg0;
    func_020d3d3c(4);
}
