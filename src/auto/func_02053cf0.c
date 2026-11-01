/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02053cf0(s32 *arg0, void *arg1, u32 arg2) {
    if (arg2 < (u32) M2C_FIELD(arg1, u8 *, 0x80)) {
        *arg0 = *(s32 *) ((u8 *) *(void **) ((u8 *) arg1 + arg2 * 4) + 0xC);
        return;
    }
    *arg0 = -0x1000;
}
