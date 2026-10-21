/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020165bc(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206f24c(s32, u16);                    /* extern */

void func_0206e584(void *arg0) {
    func_020165bc(arg0, 1);
    func_0206f24c(M2C_FIELD(arg0, s32 *, 0x90), M2C_FIELD(arg0, u16 *, 0xA));
    M2C_FIELD(arg0, s32 *, 0x94) = 0xA;
}
