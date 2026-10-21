#include "m2c.h"

extern s32 data_02142eb4;
extern s32 data_02142eb8;
extern s32 data_02142ebc;

void func_020dae58(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = (s32) data_02142eb8;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) data_02142eb4;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) data_02142ebc;
    M2C_FIELD(arg0, s8 *, 0x14)  = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
