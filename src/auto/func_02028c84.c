/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018aa0(void *, M2C_UNK);
M2C_UNK func_02018ad0();

void *func_02028c84(void *arg0) {
    volatile s32 tmp[2];

    func_02018ad0();
    func_02018aa0(arg0, 0x34);
    tmp[0]                        = 0x1000;
    tmp[1]                        = 0x1000;
    *(s32 *) ((u8 *) arg0 + 0x10) = 0x1000;
    *(s32 *) ((u8 *) arg0 + 0x14) = 0;
    *(u8 *) ((u8 *) arg0 + 0x18)  = 0;
    return arg0;
}
