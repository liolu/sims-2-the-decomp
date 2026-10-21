/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018af8(s32, u16, s32, M2C_UNK);      /* extern */

void func_020275e8(void *arg0) {
    func_02018af8(M2C_FIELD(arg0, s32 *, 0x28) + 0x128, M2C_FIELD(arg0, u16 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x30), 2);
    M2C_FIELD(arg0, s8 *, 0x13) = 1;
}
