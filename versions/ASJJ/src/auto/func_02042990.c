#include "m2c.h"

M2C_UNK func_020527b4(s32, u8, u8);                 /* extern */

void func_02042990(void *arg0, void *arg1) {
    func_020527b4(M2C_FIELD(arg0, s32 *, 4) + 0x24, M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1));
}
