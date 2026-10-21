/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02130090;

void func_02018734(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130090;
    M2C_FIELD(arg0, s8 *, 0x15)    = 0;
    M2C_FIELD(arg0, s16 *, 0x10)   = 0;
    M2C_FIELD(arg0, s8 *, 0x14)    = 0;
    M2C_FIELD(arg0, s8 *, 0x13)    = 0;
    M2C_FIELD(arg0, s8 *, 0x12)    = 0;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = arg2;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0xC)    = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}
