#include "m2c.h"

M2C_UNK func_02064720(s32, u8, u8);                 /* extern */
extern s32 data_0213df5c;

void func_02042158(s32 arg0, void *arg1) {
    func_02064720(data_0213df5c, M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1));
}
