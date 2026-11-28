#include "m2c.h"

M2C_UNK func_020ecc48(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02142cec;

void func_020ecb80(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02142cec, s32 *, 0) = arg0;
    M2C_FIELD(&data_02142cec, s32 *, 4) = arg1;
    func_020ecc48(&data_02142cec);
}
