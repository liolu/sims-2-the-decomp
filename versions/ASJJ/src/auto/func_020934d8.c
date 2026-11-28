/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_02133048;
extern M2C_UNK data_02133bec;

void func_020934d8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02133048;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s8 *, 0x1C)    = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02133bec;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
}
