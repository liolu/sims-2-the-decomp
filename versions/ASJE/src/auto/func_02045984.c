/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_02131790;

void func_02045984(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02131790;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s16 *, 0x28)   = 0;
    M2C_FIELD(arg0, s16 *, 0x2A)   = 0;
    M2C_FIELD(arg0, s16 *, 0x2E)   = 0;
    M2C_FIELD(arg0, s8 *, 0x33)    = 0;
    M2C_FIELD(arg0, s16 *, 0x30)   = 2;
    M2C_FIELD(arg0, s16 *, 0x2C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x32)    = arg1;
}
