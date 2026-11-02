/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02018aa8(u8 *arg0);

void func_0201e0e8(u8 *arg0, u8 *arg1) {
    volatile u32 tmp[7];
    u32 v;
    func_02018aa8(arg0 + 0x18);
    *(u32 *) (arg0 + 0x28) = *(u32 *) (arg1 + 0x10);
    v                      = *(u32 *) (arg1 + 0x14);
    tmp[0]                 = v;
    *(u32 *) (arg0 + 0x2C) = v;
    v                      = *(u32 *) (arg1 + 0x18);
    tmp[1]                 = v;
    *(u32 *) (arg0 + 0x30) = v;
    v                      = *(u32 *) (arg1 + 0x1C);
    tmp[2]                 = v;
    *(u32 *) (arg0 + 0x34) = v;
    v                      = *(u32 *) (arg1 + 0x20);
    tmp[3]                 = v;
    *(u32 *) (arg0 + 0x38) = v;
    v                      = *(u32 *) (arg1 + 0x24);
    tmp[4]                 = v;
    *(u32 *) (arg0 + 0x3C) = v;
    v                      = *(u32 *) (arg1 + 0x28);
    tmp[5]                 = v;
    *(u32 *) (arg0 + 0x40) = v;
    *(u32 *) (arg0 + 0x44) = *(u32 *) (arg1 + 0x2C);
    arg0[0x48]             = arg1[0x30];
    arg0[0x49]             = arg1[0x31];
    arg0[0x4A]             = arg1[0x32];
}
