/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018aa8();
void *func_0201d06c(void *arg0, void *arg1) {
    volatile s32 tmp;
    s32 v;
    func_02018aa8();
    *(u16 *) ((u8 *) arg0 + 0x30) = *(u16 *) ((u8 *) arg1 + 0x30);
    *(u8 *) ((u8 *) arg0 + 0x32)  = *(u8 *) ((u8 *) arg1 + 0x32);
    *(u8 *) ((u8 *) arg0 + 0x33)  = *(u8 *) ((u8 *) arg1 + 0x33);
    *(u8 *) ((u8 *) arg0 + 0x34)  = *(u8 *) ((u8 *) arg1 + 0x34);
    *(u8 *) ((u8 *) arg0 + 0x35)  = *(u8 *) ((u8 *) arg1 + 0x35);
    *(s32 *) ((u8 *) arg0 + 0x1C) = *(s32 *) ((u8 *) arg1 + 0x1C);
    *(s32 *) ((u8 *) arg0 + 0x10) = *(s32 *) ((u8 *) arg1 + 0x10);
    *(s32 *) ((u8 *) arg0 + 0x14) = *(s32 *) ((u8 *) arg1 + 0x14);
    *(s32 *) ((u8 *) arg0 + 0x18) = *(s32 *) ((u8 *) arg1 + 0x18);
    *(u8 *) ((u8 *) arg0 + 0x3A)  = *(u8 *) ((u8 *) arg1 + 0x3A);
    *(s32 *) ((u8 *) arg0 + 0x20) = *(s32 *) ((u8 *) arg1 + 0x20);
    *(u8 *) ((u8 *) arg0 + 0x36)  = *(u8 *) ((u8 *) arg1 + 0x36);
    *(u8 *) ((u8 *) arg0 + 0x37)  = *(u8 *) ((u8 *) arg1 + 0x37);
    *(u8 *) ((u8 *) arg0 + 0x38)  = *(u8 *) ((u8 *) arg1 + 0x38);
    *(s32 *) ((u8 *) arg0 + 0x24) = *(s32 *) ((u8 *) arg1 + 0x24);
    *(s32 *) ((u8 *) arg0 + 0x28) = *(s32 *) ((u8 *) arg1 + 0x28);
    v                             = *(s32 *) ((u8 *) arg1 + 0x2C);
    tmp                           = v;
    *(s32 *) ((u8 *) arg0 + 0x2C) = v;
    *(u8 *) ((u8 *) arg0 + 0x39)  = *(u8 *) ((u8 *) arg1 + 0x39);
    return arg0;
}
