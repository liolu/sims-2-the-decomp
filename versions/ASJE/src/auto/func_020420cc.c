#include "m2c.h"

M2C_UNK func_020645f4(s32, u8, u8);                 /* extern */
extern s32 data_0213e2f4;

void func_020420cc(s32 arg0, void *arg1) {
    func_020645f4(data_0213e2f4, M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1));
}
