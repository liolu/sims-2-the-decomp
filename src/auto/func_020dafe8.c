/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020db2fc(void *);                          /* extern */
s32 func_020db8c4(void *);                          /* extern */
M2C_UNK func_02108108(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK func_020db0f4;
extern M2C_UNK func_020db124;
extern M2C_UNK func_020db130;
extern M2C_UNK func_020db13c;
extern M2C_UNK func_020db1a4;
extern M2C_UNK func_020db2c0;
extern M2C_UNK func_020db2c8;
extern M2C_UNK func_020db2d0;

s32 func_020dafe8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02108108(arg0, 0, 0x17C);
    M2C_FIELD(arg0, s32 *, 0x5C)      = 0;
    M2C_FIELD(arg0, s32 *, 0x60)      = 1;
    M2C_FIELD(arg0, s32 *, 0x70)      = arg1;
    M2C_FIELD(arg0, s32 *, 0x74)      = arg2;
    M2C_FIELD(arg0, s32 *, 0x78)      = arg3;
    M2C_FIELD(arg0, s32 *, 0x64)      = 1;
    M2C_FIELD(arg0, s32 *, 0x84)      = 0;
    M2C_FIELD(arg0, s32 *, 0x7C)      = 0x7FFF;
    M2C_FIELD(arg0, s32 *, 0x80)      = 0x8000;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &func_020db2d0;
    M2C_FIELD(arg0, M2C_UNK **, 4)    = &func_020db2c8;
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_020db2c0;
    M2C_FIELD(arg0, M2C_UNK **, 0xC)  = &func_020db1a4;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_020db13c;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020db124;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_020db130;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_020db0f4;
    M2C_FIELD(arg0, s32 *, 0x68)      = 0;
    M2C_FIELD(arg0, s32 *, 0x88)      = -1;
    M2C_FIELD(arg0, s32 *, 0x8C)      = -1;
    M2C_FIELD(arg0, s32 *, 0x90)      = -1;
    if (func_020db8c4(arg0) == 0) {
        return 0;
    }
    if (func_020db2fc(arg0) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    return 1;
}
