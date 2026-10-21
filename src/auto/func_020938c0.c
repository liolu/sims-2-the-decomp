/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0208afd0();                              /* extern */
extern M2C_UNK data_02133600;
extern M2C_UNK data_02134158;

void *func_020938c0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02133600;
    M2C_FIELD(arg0, s32 *, 4)      = 0x51;
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(func_0208afd0(), s16 *, 0xE);
    M2C_FIELD(arg0, s8 *, 0xC)     = 1;
    M2C_FIELD(arg0, s8 *, 0xD)     = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02134158;
    return arg0;
}
