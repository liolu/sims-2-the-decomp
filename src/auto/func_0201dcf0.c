/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018aa0(void *, M2C_UNK);
M2C_UNK func_02018ad0();

void *func_0201dcf0(void *arg0) {
    volatile s32 tmp[4];
    func_02018ad0();
    func_02018aa0(arg0, 0x46);
    *(s32 *) ((u8 *) arg0 + 0x10) = 0;
    tmp[0]                        = 0x1000;
    tmp[2]                        = 0x1000;
    *(s32 *) ((u8 *) arg0 + 0x14) = 0x1000;
    tmp[1]                        = 0;
    tmp[3]                        = 0;
    *(s32 *) ((u8 *) arg0 + 0x18) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1C) = 0x20;
    *(u8 *) ((u8 *) arg0 + 0x20)  = 0;
    *(u8 *) ((u8 *) arg0 + 0x21)  = 1;
    *(u8 *) ((u8 *) arg0 + 0x22)  = 0;
    *(u8 *) ((u8 *) arg0 + 0x23)  = 0;
    return arg0;
}
