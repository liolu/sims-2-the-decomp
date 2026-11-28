/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020dade8(void *);                          /* extern */
s32 func_020db3b0(void *);                          /* extern */
M2C_UNK func_02107bf4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK func_020dabe0;
extern M2C_UNK func_020dac10;
extern M2C_UNK func_020dac1c;
extern M2C_UNK func_020dac28;
extern M2C_UNK func_020dac90;
extern M2C_UNK func_020dadac;
extern M2C_UNK func_020dadb4;
extern M2C_UNK func_020dadbc;

s32 func_020daad4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02107bf4(arg0, 0, 0x17C);
    M2C_FIELD(arg0, s32 *, 0x5C)      = 0;
    M2C_FIELD(arg0, s32 *, 0x60)      = 1;
    M2C_FIELD(arg0, s32 *, 0x70)      = arg1;
    M2C_FIELD(arg0, s32 *, 0x74)      = arg2;
    M2C_FIELD(arg0, s32 *, 0x78)      = arg3;
    M2C_FIELD(arg0, s32 *, 0x64)      = 1;
    M2C_FIELD(arg0, s32 *, 0x84)      = 0;
    M2C_FIELD(arg0, s32 *, 0x7C)      = 0x7FFF;
    M2C_FIELD(arg0, s32 *, 0x80)      = 0x8000;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &func_020dadbc;
    M2C_FIELD(arg0, M2C_UNK **, 4)    = &func_020dadb4;
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_020dadac;
    M2C_FIELD(arg0, M2C_UNK **, 0xC)  = &func_020dac90;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_020dac28;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020dac10;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_020dac1c;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_020dabe0;
    M2C_FIELD(arg0, s32 *, 0x68)      = 0;
    M2C_FIELD(arg0, s32 *, 0x88)      = -1;
    M2C_FIELD(arg0, s32 *, 0x8C)      = -1;
    M2C_FIELD(arg0, s32 *, 0x90)      = -1;
    if (func_020db3b0(arg0) == 0) {
        return 0;
    }
    if (func_020dade8(arg0) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    return 1;
}
