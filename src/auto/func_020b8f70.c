#include "m2c.h"
void func_020b8f70(u8 *arg0) {
    volatile s32 tmp[2];
    u8 *p;
    s32 w;
    p = *(u8 **) (arg0 + 0x6C);
    if (p == 0) {
        return;
    }
    w          = (s32) (*(u16 *) (*(u8 **) (p + 0x8) + 0x4) << 12);
    tmp[0]     = w;
    tmp[1]     = w;
    *(s32 *) p = w;
}
