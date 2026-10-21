#include "m2c.h"

M2C_UNK func_020ed15c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021431cc;

void func_020ed094(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_021431cc, s32 *, 0) = arg0;
    M2C_FIELD(&data_021431cc, s32 *, 4) = arg1;
    func_020ed15c(&data_021431cc);
}
