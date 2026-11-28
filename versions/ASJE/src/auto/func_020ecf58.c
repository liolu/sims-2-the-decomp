#include "m2c.h"

M2C_UNK func_020ed020(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214308c;

void func_020ecf58(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0214308c, s32 *, 0) = arg0;
    M2C_FIELD(&data_0214308c, s32 *, 4) = arg1;
    func_020ed020(&data_0214308c);
}
