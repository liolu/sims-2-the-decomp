/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ee550(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK func_020b8994;

void func_020b8cb4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 9) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 8) != 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x30) = arg0;
    func_020ee550(M2C_FIELD(arg0, void **, 0) + 4, &func_020b8994, 0, 4, 2);
    M2C_FIELD(arg0, u8 *, 8) = 1U;
}
