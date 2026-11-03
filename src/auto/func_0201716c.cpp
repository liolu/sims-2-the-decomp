/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" void *func_0200aa54(void *);
extern "C" void func_020fca58(u16, s32, s32);
extern "C" u8 data_0212fed8;

extern "C" void *func_0201716c(u8 *arg0, u32 arg1) {
    s32 zero;
    volatile u16 sp0;

    func_0200aa54(arg0);
    *(void **) arg0        = (void *) &data_0212fed8;
    zero                   = 0;
    *(s32 *) (arg0 + 0x30) = zero;
    *(s32 *) (arg0 + 0x34) = zero;
    *(s32 *) (arg0 + 0x38) = zero;
    *(s32 *) (arg0 + 0x3C) = zero;
    *(s32 *) (arg0 + 0x50) = zero;
    *(s32 *) (arg0 + 0x54) = zero;
    *(s32 *) (arg0 + 0x58) = zero;
    *(s32 *) (arg0 + 0x5C) = zero;
    *(s32 *) (arg0 + 0x60) = zero;
    *(s32 *) (arg0 + 0x64) = zero;
    *(s32 *) (arg0 + 0x68) = zero;
    *(s32 *) (arg0 + 0x6C) = zero;
    *(u16 *) (arg0 + 0xE)  = 1;
    *(u16 *) (arg0 + 0xA)  = (u16) arg1;
    sp0                    = (u16) zero;
    func_020fca58(sp0, (s32) (arg0 + 0x10), 0x40);
    *(u16 *) (arg0 + 0x24) = 0xFFFF;
    *(u16 *) (arg0 + 0x46) = 0xFFFF;
    *(u32 *) (arg0 + 0x4)  = *(u32 *) (arg0 + 0x4) | 0x40009000;
    return arg0;
}
