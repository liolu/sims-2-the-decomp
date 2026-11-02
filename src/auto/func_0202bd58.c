/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02018aa8(void *p);
void func_0202bd58(u8 *arg0) {
    volatile s32 tmp[2];
    func_02018aa8(arg0 + 0x18);
    tmp[0]                 = 0x1000;
    tmp[1]                 = 0x1000;
    *(s32 *) (arg0 + 0x2C) = 0x1000;
    *(s16 *) (arg0 + 0x28) = -1;
}
