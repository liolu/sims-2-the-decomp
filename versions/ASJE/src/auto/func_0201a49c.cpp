/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_02018ad0(void *a);
extern "C" void func_02018aa0(void *a, s32 b);

extern "C" void *func_0201a49c(void *arg0) {
    u8 *p = (u8 *) arg0;
    volatile s32 tmp[10];
    s32 z;
    s32 w;
    func_02018ad0(arg0);
    *(s32 *) (p + 0x10) = 0;
    *(s32 *) (p + 0x14) = 0;
    *(s32 *) (p + 0x18) = 0;
    func_02018aa0(arg0, 6);
    tmp[6]              = 0;
    tmp[7]              = 0;
    tmp[8]              = 0;
    *(s32 *) (p + 0x10) = 0;
    z                   = tmp[7];
    tmp[4]              = z;
    *(s32 *) (p + 0x14) = z;
    w                   = tmp[8];
    tmp[5]              = w;
    *(s32 *) (p + 0x18) = w;
    tmp[0]              = 0xA000;
    tmp[2]              = 0xA000;
    *(s32 *) (p + 0x1C) = 0xA000;
    tmp[1]              = 0x4CC;
    tmp[3]              = 0x4CC;
    *(s32 *) (p + 0x20) = 0x4CC;
    *(u8 *) (p + 0x26)  = 0;
    *(u8 *) (p + 0x27)  = 1;
    *(u16 *) (p + 0x28) = 0x135;
    *(u8 *) (p + 0x2A)  = 0;
    return arg0;
}
