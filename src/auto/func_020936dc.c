/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0213355c;
extern M2C_UNK data_02134100;

void func_020936dc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213355c;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s8 *, 0x1C)    = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02134100;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
}
