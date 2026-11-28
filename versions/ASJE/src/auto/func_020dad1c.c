#include "m2c.h"

extern s32 data_02142d74;
extern s32 data_02142d78;
extern s32 data_02142d7c;

void func_020dad1c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = (s32) data_02142d78;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) data_02142d74;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) data_02142d7c;
    M2C_FIELD(arg0, s8 *, 0x14)  = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
