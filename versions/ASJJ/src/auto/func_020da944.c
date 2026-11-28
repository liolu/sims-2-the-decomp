#include "m2c.h"

extern s32 data_021429d4;
extern s32 data_021429d8;
extern s32 data_021429dc;

void func_020da944(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = (s32) data_021429d8;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) data_021429d4;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) data_021429dc;
    M2C_FIELD(arg0, s8 *, 0x14)  = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
