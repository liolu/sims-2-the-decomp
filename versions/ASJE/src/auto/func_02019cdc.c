/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018aa0(void *, M2C_UNK);
M2C_UNK func_02018ad0();

void *func_02019cdc(void *arg0) {
    volatile s32 tmp[2];
    func_02018ad0();
    *(s32 *) ((u8 *) arg0 + 0x10) = 0;
    *(s32 *) ((u8 *) arg0 + 0x14) = 0;
    *(s32 *) ((u8 *) arg0 + 0x18) = 0;
    func_02018aa0(arg0, 0x10);
    tmp[0]                        = 0x199;
    tmp[1]                        = 0x199;
    *(s32 *) ((u8 *) arg0 + 0x20) = 0x199;
    *(s16 *) ((u8 *) arg0 + 0x1C) = 7;
    *(u8 *) ((u8 *) arg0 + 0x24)  = 0;
    *(s32 *) ((u8 *) arg0 + 0x28) = 0;
    *(s32 *) ((u8 *) arg0 + 0x2C) = 0;
    *(u8 *) ((u8 *) arg0 + 0x25)  = 0;
    return arg0;
}
