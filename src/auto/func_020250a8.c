/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02018aa8(M2C_UNK, M2C_UNK);

void func_020250a8(s32 arg0, s32 arg1) {
    func_02018aa8(arg0 + 0x18, arg1);
    M2C_FIELD(arg0, u8 *, 0x28)  = (u8) M2C_FIELD(arg1, u8 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s8 *, 0x36)  = 0;
}
