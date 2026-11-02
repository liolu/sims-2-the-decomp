/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018aa8(void *);

void func_02028618(void *arg0, void *arg1) {
    volatile s32 tmp[3];
    s32 v;
    func_02018aa8((u8 *) arg0 + 0x18);
    *(u16 *) ((u8 *) arg0 + 0x2A) = *(u16 *) ((u8 *) arg1 + 0x12);
    v                             = *(s32 *) ((u8 *) arg1 + 0x18);
    tmp[0]                        = v;
    *(s32 *) ((u8 *) arg0 + 0x30) = v;
    v                             = *(s32 *) ((u8 *) arg1 + 0x1C);
    tmp[1]                        = v;
    *(s32 *) ((u8 *) arg0 + 0x34) = v;
    v                             = *(s32 *) ((u8 *) arg1 + 0x20);
    tmp[2]                        = v;
    *(s32 *) ((u8 *) arg0 + 0x38) = v;
    *(s32 *) ((u8 *) arg0 + 0x3C) = *(s32 *) ((u8 *) arg1 + 0x24);
    *(u16 *) ((u8 *) arg0 + 0x28) = *(u16 *) ((u8 *) arg1 + 0x10);
    *(u8 *) ((u8 *) arg0 + 0x2C)  = *(u8 *) ((u8 *) arg1 + 0x14);
}
