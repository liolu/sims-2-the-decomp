#include "m2c.h"

u8 func_0200c638(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x12)  = (u8) M2C_FIELD(arg1, u8 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, u8 *, 0x14)  = (u8) M2C_FIELD(arg1, u8 *, 0x11);
    M2C_FIELD(arg0, u8 *, 0x15)  = (u8) M2C_FIELD(arg1, u8 *, 0x12);
    return M2C_FIELD(arg0, u8 *, 0x12);
}
