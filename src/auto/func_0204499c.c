/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021317c4;
extern u8 data_021317f4;

void func_0204499c(u8 *arg0) {
    volatile s32 t[6];
    s32 a;
    s32 b;

    *(void **) arg0        = &data_021317f4;
    *(s32 *) (arg0 + 0x4)  = 0;
    *(s32 *) (arg0 + 0x8)  = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(u8 *) (arg0 + 0x10)  = 1;
    *(u8 *) (arg0 + 0x11)  = 0;
    *(u8 *) (arg0 + 0x12)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    t[2]                   = 0;
    t[1]                   = 0;
    t[0]                   = 0;
    t[3]                   = 0;
    *(s32 *) (arg0 + 0x4)  = 0;
    a                      = t[1];
    t[4]                   = a;
    *(s32 *) (arg0 + 0x8)  = a;
    b                      = t[2];
    t[5]                   = b;
    *(s32 *) (arg0 + 0xC)  = b;
    *(void **) arg0        = &data_021317c4;
    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = 0;
    *(s32 *) (arg0 + 0x20) = 0;
}
