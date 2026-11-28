#include "m2c.h"

extern s32 data_0213e080;

void func_02071510(void *arg0) {
    *(s32 *) 0x04000000 |= 0x2000;
    data_0213e080 = ((M2C_FIELD(arg0, u8 *, 0x306) & 1) * 0x180) + (arg0 + 6);
}
