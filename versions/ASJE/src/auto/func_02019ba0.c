/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018aa8(s32);

void func_02019ba0(u8 *arg0, u8 *arg1) {
    volatile s32 tmp[5];
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    func_02018aa8((s32) (arg0 + 0x18));
    a                      = *(s32 *) (arg1 + 0x10);
    tmp[1]                 = a;
    *(s32 *) (arg0 + 0x28) = a;
    b                      = *(s32 *) (arg1 + 0x14);
    tmp[2]                 = b;
    *(s32 *) (arg0 + 0x2C) = b;
    c                      = *(s32 *) (arg1 + 0x18);
    tmp[3]                 = c;
    *(s32 *) (arg0 + 0x30) = c;
    *(u16 *) (arg0 + 0x34) = *(u16 *) (arg1 + 0x1C);
    d                      = *(s32 *) (arg1 + 0x20);
    tmp[0]                 = d;
    *(s32 *) (arg0 + 0x38) = d;
    *(u8 *) (arg0 + 0x3C)  = *(u8 *) (arg1 + 0x24);
    *(s32 *) (arg0 + 0x40) = *(s32 *) (arg1 + 0x28);
    *(s32 *) (arg0 + 0x44) = *(s32 *) (arg1 + 0x2C);
    *(u8 *) (arg0 + 0x3D)  = *(u8 *) (arg1 + 0x25);
}
