/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020db1c0(void *);                          /* extern */
s32 func_020db788(void *);                          /* extern */
M2C_UNK func_02107fcc(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK func_020dafb8;
extern M2C_UNK func_020dafe8;
extern M2C_UNK func_020daff4;
extern M2C_UNK func_020db000;
extern M2C_UNK func_020db068;
extern M2C_UNK func_020db184;
extern M2C_UNK func_020db18c;
extern M2C_UNK func_020db194;

s32 func_020daeac(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02107fcc(arg0, 0, 0x17C);
    M2C_FIELD(arg0, s32 *, 0x5C)      = 0;
    M2C_FIELD(arg0, s32 *, 0x60)      = 1;
    M2C_FIELD(arg0, s32 *, 0x70)      = arg1;
    M2C_FIELD(arg0, s32 *, 0x74)      = arg2;
    M2C_FIELD(arg0, s32 *, 0x78)      = arg3;
    M2C_FIELD(arg0, s32 *, 0x64)      = 1;
    M2C_FIELD(arg0, s32 *, 0x84)      = 0;
    M2C_FIELD(arg0, s32 *, 0x7C)      = 0x7FFF;
    M2C_FIELD(arg0, s32 *, 0x80)      = 0x8000;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &func_020db194;
    M2C_FIELD(arg0, M2C_UNK **, 4)    = &func_020db18c;
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_020db184;
    M2C_FIELD(arg0, M2C_UNK **, 0xC)  = &func_020db068;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_020db000;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020dafe8;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_020daff4;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_020dafb8;
    M2C_FIELD(arg0, s32 *, 0x68)      = 0;
    M2C_FIELD(arg0, s32 *, 0x88)      = -1;
    M2C_FIELD(arg0, s32 *, 0x8C)      = -1;
    M2C_FIELD(arg0, s32 *, 0x90)      = -1;
    if (func_020db788(arg0) == 0) {
        return 0;
    }
    if (func_020db1c0(arg0) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    return 1;
}
