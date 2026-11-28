#include "m2c.h"

M2C_UNK func_020429fc(M2C_UNK, s32);                /* extern */
extern s32 data_027e0000;

void func_0204ff84(void *arg0, M2C_UNK arg1) {
    func_020429fc(arg1, (data_027e0000 << 0x15) + 0x06400000 + (M2C_FIELD(arg0, u16 *, 0x46) << 5));
}
