/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200aa54();

extern u8 data_0212fe88;

void *func_02015914(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    volatile s32 pad;
    func_0200aa54();
    *(u8 **) arg0                 = &data_0212fe88;
    *(s32 *) ((u8 *) arg0 + 0x10) = 0;
    *(s32 *) ((u8 *) arg0 + 0x14) = 0;
    *(s8 *) ((u8 *) arg0 + 0x18)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x19)  = arg1;
    *(s8 *) ((u8 *) arg0 + 0x1A)  = arg2;
    *(s8 *) ((u8 *) arg0 + 0x1B)  = arg3;
    *(u16 *) ((u8 *) arg0 + 0x1C) = 0xFFFF;
    *(s32 *) ((u8 *) arg0 + 4)    = *(s32 *) ((u8 *) arg0 + 4) & ~1;
    return arg0;
}
