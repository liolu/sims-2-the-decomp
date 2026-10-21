/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bd700();                            /* extern */

void func_020b9a24(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    func_020bd700();
    M2C_FIELD(arg0, s16 *, 0xAE) = arg3;
    M2C_FIELD(arg0, s32 *, 0x68) = arg2;
    M2C_FIELD(arg0, u16 *, 0xAC) = (u16) (M2C_FIELD(arg0, u16 *, 0xAC) | 0x10);
}
