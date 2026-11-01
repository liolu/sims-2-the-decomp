/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018aa8();
void *func_020268fc(void *arg0, void *arg1) {
    volatile s32 tmp;
    s32 v;
    func_02018aa8();
    *(s32 *) ((u8 *) arg0 + 0x10) = *(s32 *) ((u8 *) arg1 + 0x10);
    *(s32 *) ((u8 *) arg0 + 0x14) = *(s32 *) ((u8 *) arg1 + 0x14);
    *(s32 *) ((u8 *) arg0 + 0x18) = *(s32 *) ((u8 *) arg1 + 0x18);
    *(u16 *) ((u8 *) arg0 + 0x1C) = *(u16 *) ((u8 *) arg1 + 0x1C);
    *(s8 *) ((u8 *) arg0 + 0x1E)  = *(s8 *) ((u8 *) arg1 + 0x1E);
    v                             = *(s32 *) ((u8 *) arg1 + 0x20);
    tmp                           = v;
    *(s32 *) ((u8 *) arg0 + 0x20) = v;
    *(s32 *) ((u8 *) arg0 + 0x24) = *(s32 *) ((u8 *) arg1 + 0x24);
    *(s32 *) ((u8 *) arg0 + 0x28) = *(s32 *) ((u8 *) arg1 + 0x28);
    *(s32 *) ((u8 *) arg0 + 0x2C) = *(s32 *) ((u8 *) arg1 + 0x2C);
    *(u16 *) ((u8 *) arg0 + 0x30) = *(u16 *) ((u8 *) arg1 + 0x30);
    *(u16 *) ((u8 *) arg0 + 0x32) = *(u16 *) ((u8 *) arg1 + 0x32);
    *(u16 *) ((u8 *) arg0 + 0x34) = *(u16 *) ((u8 *) arg1 + 0x34);
    *(u8 *) ((u8 *) arg0 + 0x36)  = *(u8 *) ((u8 *) arg1 + 0x36);
    *(u8 *) ((u8 *) arg0 + 0x37)  = *(u8 *) ((u8 *) arg1 + 0x37);
    *(u8 *) ((u8 *) arg0 + 0x38)  = *(u8 *) ((u8 *) arg1 + 0x38);
    *(s32 *) ((u8 *) arg0 + 0x3C) = *(s32 *) ((u8 *) arg1 + 0x3C);
    *(s32 *) ((u8 *) arg0 + 0x40) = *(s32 *) ((u8 *) arg1 + 0x40);
    *(s32 *) ((u8 *) arg0 + 0x44) = *(s32 *) ((u8 *) arg1 + 0x44);
    return arg0;
}
