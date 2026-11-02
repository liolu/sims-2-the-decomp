/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018aa8(void *);

void func_0201dbdc(void *arg0, void *arg1) {
    volatile s32 tmp[3];
    s32 v;
    func_02018aa8((u8 *) arg0 + 0x18);
    *(s32 *) ((u8 *) arg0 + 0x28) = *(s32 *) ((u8 *) arg1 + 0x10);
    v                             = *(s32 *) ((u8 *) arg1 + 0x14);
    tmp[0]                        = v;
    *(s32 *) ((u8 *) arg0 + 0x2C) = v;
    v                             = *(s32 *) ((u8 *) arg1 + 0x18);
    tmp[1]                        = v;
    *(s32 *) ((u8 *) arg0 + 0x30) = v;
    v                             = *(s32 *) ((u8 *) arg1 + 0x1C);
    *(s32 *) ((u8 *) arg0 + 0x34) = v;
    *(u8 *) ((u8 *) arg0 + 0x38)  = *(u8 *) ((u8 *) arg1 + 0x20);
    *(u8 *) ((u8 *) arg0 + 0x39)  = *(u8 *) ((u8 *) arg1 + 0x21);
    *(u8 *) ((u8 *) arg0 + 0x3A)  = *(u8 *) ((u8 *) arg1 + 0x22);
    *(u8 *) ((u8 *) arg0 + 0x3B)  = *(u8 *) ((u8 *) arg1 + 0x23);
}
