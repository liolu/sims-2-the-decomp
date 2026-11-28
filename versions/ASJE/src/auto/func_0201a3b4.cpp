/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_02018aa8(void *);
extern "C" void func_0201a3b4(u8 *arg0, u8 *arg1) {
    volatile s32 tmp[5];
    s32 v;
    func_02018aa8(arg0 + 0x18);
    v                      = *(s32 *) (arg1 + 0x10);
    tmp[2]                 = v;
    *(s32 *) (arg0 + 0x28) = v;
    v                      = *(s32 *) (arg1 + 0x14);
    tmp[3]                 = v;
    *(s32 *) (arg0 + 0x2c) = v;
    v                      = *(s32 *) (arg1 + 0x18);
    tmp[4]                 = v;
    *(s32 *) (arg0 + 0x30) = v;
    v                      = *(s32 *) (arg1 + 0x1c);
    tmp[0]                 = v;
    *(s32 *) (arg0 + 0x34) = v;
    v                      = *(s32 *) (arg1 + 0x20);
    tmp[1]                 = v;
    *(s32 *) (arg0 + 0x38) = v;
    *(u8 *) (arg0 + 0x3e)  = *(u8 *) (arg1 + 0x26);
    *(u8 *) (arg0 + 0x3f)  = *(u8 *) (arg1 + 0x27);
    *(u16 *) (arg0 + 0x40) = *(u16 *) (arg1 + 0x28);
    *(u8 *) (arg0 + 0x42)  = *(u8 *) (arg1 + 0x2a);
}
