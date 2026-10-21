/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0208afd0(s32);                           /* extern */
M2C_UNK func_0208bb98(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02133600;
extern M2C_UNK data_02134698;
extern M2C_UNK data_021346c4;

void *func_02096ed0(void *arg0, M2C_UNK arg1, s32 arg2) {
    func_0208bb98(arg0, arg1, 0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02133600;
    M2C_FIELD(arg0, s32 *, 0x50)      = arg2;
    M2C_FIELD(arg0, s32 *, 0x54)      = (s32) M2C_FIELD(func_0208afd0(arg2), s16 *, 0xE);
    M2C_FIELD(arg0, s8 *, 0x58)       = 0;
    M2C_FIELD(arg0, s8 *, 0x59)       = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02134698;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_021346c4;
    return arg0;
}
