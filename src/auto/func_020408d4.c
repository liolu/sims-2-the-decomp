#include "m2c.h"
extern s32 data_0213e434;
void func_020408d4(s32 arg0, void *arg1) {
    u8 r2             = M2C_FIELD(arg1, u8 *, 0);
    s32 r3            = data_0213e434 + 0x24;
    *(s8 *) (r3 + r2) = *(u8 *) (r3 + r2) - M2C_FIELD(arg1, u8 *, 1);
}
