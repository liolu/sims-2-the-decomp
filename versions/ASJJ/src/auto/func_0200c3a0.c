/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0212f688[];
extern u8 data_0212f6a4[];
void func_0200c3a0(u8 *arg0) {
    volatile s32 fr[6];
    *(u32 *) arg0          = (u32) data_0212f688;
    *(u32 *) (arg0 + 0x4)  = 0;
    *(u32 *) (arg0 + 0x8)  = 0;
    *(u32 *) (arg0 + 0xC)  = 0;
    *(s16 *) (arg0 + 0x10) = -1;
    arg0[0x12]             = 1;
    *(s8 *) (arg0 + 0x13)  = -1;
    arg0[0x14]             = 0;
    arg0[0x15]             = 0;
    arg0[0x16]             = 0;
    *(u32 *) arg0          = (u32) data_0212f6a4;
    *(u32 *) (arg0 + 0x18) = 0;
    *(u32 *) (arg0 + 0x1C) = 0;
    *(u32 *) (arg0 + 0x20) = 0;
    fr[0]                  = 0;
    fr[3]                  = 0;
    *(u32 *) (arg0 + 0x24) = 0;
    fr[1]                  = 0;
    fr[4]                  = 0;
    *(u32 *) (arg0 + 0x28) = 0;
    fr[2]                  = 0;
    fr[5]                  = 0;
    *(u32 *) (arg0 + 0x2C) = 0;
    arg0[0x13]             = 4;
}
