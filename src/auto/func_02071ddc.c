#include "m2c.h"

extern M2C_UNK data_02132744;
extern M2C_UNK data_02132750;

void func_02071ddc(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02132744;
    M2C_FIELD(arg0, s16 *, 4)      = 0x101E;
    M2C_FIELD(arg0, s16 *, 6)      = 0;
    M2C_FIELD(arg0, s8 *, 8)       = 0;
    M2C_FIELD(arg0, s8 *, 9)       = 0;
    M2C_FIELD(arg0, s8 *, 0xA)     = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s8 *, 0x18)    = 6;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02132750;
    M2C_FIELD(arg0, s16 *, 4)      = 0x1694;
    M2C_FIELD(arg0, s8 *, 9)       = 0;
    M2C_FIELD(arg0, s16 *, 6)      = 0x98;
}
