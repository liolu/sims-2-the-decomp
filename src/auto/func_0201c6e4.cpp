/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_02018aa8(void *a);

extern "C" void func_0201c6e4(void *arg0, void *arg1) {
    u8 *d = (u8 *) arg0;
    u8 *s = (u8 *) arg1;
    volatile s32 tmp[5];
    s32 v;
    func_02018aa8(d + 0x18);
    v                   = *(s32 *) (s + 0x10);
    tmp[2]              = v;
    *(s32 *) (d + 0x28) = v;
    v                   = *(s32 *) (s + 0x14);
    tmp[3]              = v;
    *(s32 *) (d + 0x2C) = v;
    v                   = *(s32 *) (s + 0x18);
    tmp[4]              = v;
    *(s32 *) (d + 0x30) = v;
    *(s32 *) (d + 0x34) = *(s32 *) (s + 0x1C);
    v                   = *(s32 *) (s + 0x24);
    tmp[0]              = v;
    *(s32 *) (d + 0x3C) = v;
    *(u8 *) (d + 0x46)  = *(u8 *) (s + 0x2E);
    *(u16 *) (d + 0x44) = *(u16 *) (s + 0x2C);
    v                   = *(s32 *) (s + 0x28);
    tmp[1]              = v;
    *(s32 *) (d + 0x40) = v;
    *(s32 *) (d + 0x38) = *(s32 *) (s + 0x20);
    *(u8 *) (d + 0x47)  = *(u8 *) (s + 0x2F);
    *(u8 *) (d + 0x48)  = *(u8 *) (s + 0x30);
    *(u8 *) (d + 0x49)  = *(u8 *) (s + 0x31);
    *(u8 *) (d + 0x4A)  = *(u8 *) (s + 0x32);
    *(u8 *) (d + 0x4B)  = *(u8 *) (s + 0x33);
}
