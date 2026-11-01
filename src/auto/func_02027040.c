/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018aa8(s32);

void func_02027040(u8 *arg0, u8 *arg1) {
    volatile s32 tmp[3];
    s32 b;
    s32 c;
    s32 d;

    func_02018aa8((s32) (arg0 + 0x18));
    b                      = *(s32 *) (arg1 + 0x14);
    tmp[0]                 = b;
    *(s32 *) (arg0 + 0x2C) = b;
    c                      = *(s32 *) (arg1 + 0x18);
    tmp[1]                 = c;
    *(s32 *) (arg0 + 0x30) = c;
    d                      = *(s32 *) (arg1 + 0x1C);
    tmp[2]                 = d;
    *(s32 *) (arg0 + 0x34) = d;
    *(s32 *) (arg0 + 0x28) = *(s32 *) (arg1 + 0x10);
    *(u8 *) (arg0 + 0x38)  = *(u8 *) (arg1 + 0x20);
    *(u8 *) (arg0 + 0x39)  = *(u8 *) (arg1 + 0x21);
    *(u8 *) (arg0 + 0x3A)  = *(u8 *) (arg1 + 0x22);
    *(u8 *) (arg0 + 0x3B)  = *(u8 *) (arg1 + 0x23);
    *(u8 *) (arg0 + 0x3C)  = *(u8 *) (arg1 + 0x24);
}
