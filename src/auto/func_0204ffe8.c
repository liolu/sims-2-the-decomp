#include "m2c.h"

M2C_UNK func_020429e8(M2C_UNK, s32);                /* extern */
extern s32 data_027e0000;

void func_0204ffe8(void *arg0, M2C_UNK arg1) {
    func_020429e8(arg1, (data_027e0000 << 0x15) + 0x06400000 + (M2C_FIELD(arg0, u16 *, 0x46) << 5));
}
