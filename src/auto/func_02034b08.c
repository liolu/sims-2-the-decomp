/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 *data_0213e434;

void func_02034b08(void *arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA);
    if ((temp_r1 != 0x3B) && (temp_r1 != 0x3C) && !(*data_0213e434 & 0x20)) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x31) = 1;
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 0x13) = 1;
}
