/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020e23ac(M2C_UNK, u32, M2C_UNK, M2C_UNK);  /* extern */

void func_020e22c0(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, s32 *, 0)    = func_020e23ac(0x200, arg1, 4, 1);
    M2C_FIELD(arg0, s32 *, 4)    = func_020e23ac(0x200, arg1 >> 1, 4, 1);
    M2C_FIELD(arg0, s32 *, 8)    = func_020e23ac(0x200, arg1, 8, 0x40);
    M2C_FIELD(arg0, s32 *, 0xC)  = func_020e23ac(0x200, arg1, 8, 8);
    M2C_FIELD(arg0, s32 *, 0x10) = func_020e23ac(0x200, arg1, 5, 1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_020e23ac(0x200, arg1, 5, 1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_020e23ac(0x200, arg1, 0xB, 1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_020e23ac(0x200, arg1, 0xB, 1);
    M2C_FIELD(arg0, s32 *, 0x20) = func_020e23ac(0x200, arg1, 4, 0x30);
}
