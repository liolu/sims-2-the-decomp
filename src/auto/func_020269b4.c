/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018aa0(void *, M2C_UNK);
M2C_UNK func_02018ad0();

void *func_020269b4(void *arg0) {
    volatile s32 tmp[2];
    func_02018ad0();
    func_02018aa0(arg0, 8);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1E)  = -1;
    tmp[0]                       = 0;
    tmp[1]                       = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0x64;
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x32) = 0x135;
    M2C_FIELD(arg0, s16 *, 0x34) = 0x135;
    M2C_FIELD(arg0, s8 *, 0x36)  = 0x1E;
    M2C_FIELD(arg0, s8 *, 0x37)  = 0;
    M2C_FIELD(arg0, s8 *, 0x38)  = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    return arg0;
}
