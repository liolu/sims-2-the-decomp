/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020533fc(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02131d94;
extern void *data_02139fa4;

void *func_020481c4(void *arg0) {
    func_020533fc(arg0, 1, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02131d94;
    M2C_FIELD(arg0, s32 *, 8)      = -1;
    M2C_FIELD(arg0, s8 *, 0x18)    = 0;
    M2C_FIELD(arg0, s8 *, 0x19)    = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    M2C_FIELD(arg0, s32 *, 0x2C)   = 0;
    data_02139fa4                  = arg0;
    func_02046384(arg0 + 0xDA8, 0, 8);
    func_02046384(arg0 + 0xDB0, 0, 0x40);
    func_02046384(arg0 + 0xDF0, 0, 0x40);
    M2C_FIELD(arg0, s32 *, 0xDF0) = 0x32;
    M2C_FIELD(arg0, s32 *, 0xE10) = 0x32;
    M2C_FIELD(arg0, s32 *, 0xE30) = 0;
    M2C_FIELD(arg0, s8 *, 0xE41)  = 0;
    M2C_FIELD(arg0, s8 *, 0xE42)  = 0;
    M2C_FIELD(arg0, s32 *, 0xE38) = -1;
    M2C_FIELD(arg0, s32 *, 0xE3C) = -1;
    M2C_FIELD(arg0, s8 *, 0xE40)  = 0;
    M2C_FIELD(arg0, s32 *, 0xE34) = -1;
    return arg0;
}
