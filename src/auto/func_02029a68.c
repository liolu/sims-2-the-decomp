/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02018aa8(M2C_UNK, M2C_UNK);

void func_02029a68(s32 arg0, s32 arg1) {
    func_02018aa8(arg0 + 0x18, arg1);
    M2C_FIELD(arg0, u8 *, 0x28) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
}
