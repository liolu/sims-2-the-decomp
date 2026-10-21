/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0213e434;

void func_02073334(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(data_0213e434, s32 *, 0x480C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2D4) <= temp_r3) {
        M2C_FIELD(arg0, s32 *, 0x2D4) = (s32) (temp_r3 + 0x93A80);
    }
}
