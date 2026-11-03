/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0212fed8;

void func_0200aa54(u8 *);
void func_020fca58(u16, u8 *, s32);

u8 *func_020170c4(u8 *arg0, s32 arg1) {
    volatile u16 z;
    func_0200aa54(arg0);
    *(void **) arg0        = &data_0212fed8;
    *(s32 *) (arg0 + 0x30) = 0;
    *(s32 *) (arg0 + 0x34) = 0;
    *(s32 *) (arg0 + 0x38) = 0;
    *(s32 *) (arg0 + 0x3C) = 0;
    *(s32 *) (arg0 + 0x50) = 0;
    *(s32 *) (arg0 + 0x54) = 0;
    *(s32 *) (arg0 + 0x58) = 0;
    *(s32 *) (arg0 + 0x5C) = 0;
    *(s32 *) (arg0 + 0x60) = 0;
    *(s32 *) (arg0 + 0x64) = 0;
    *(s32 *) (arg0 + 0x68) = 0;
    *(s32 *) (arg0 + 0x6C) = 0;
    *(u16 *) (arg0 + 0xE)  = 1;
    *(u16 *) (arg0 + 0xA)  = (u16) arg1;
    z                      = 0;
    func_020fca58(z, arg0 + 0x10, 0x40);
    *(u16 *) (arg0 + 0x24) = 0xFFFF;
    *(u16 *) (arg0 + 0x46) = 0xFFFF;
    *(s32 *) (arg0 + 4)    = *(s32 *) (arg0 + 4) | 0x40009000;
    return arg0;
}
