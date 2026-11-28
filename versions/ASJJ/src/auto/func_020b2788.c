/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020b2788(u8 *arg0, u32 *arg1) {
    volatile s32 fr[6];
    u32 *dst          = (u32 *) arg0;
    volatile u32 *src = arg1;
    s32 diff;

    if (!((fr[0] = dst[0], src[0] == dst[0]) && (fr[1] = dst[1], src[1] == dst[1]) && (fr[2] = dst[2], src[2] == dst[2]))) {
        diff = 1;
    } else {
        diff = 0;
    }
    if (!diff) {
        return;
    }
    fr[3]      = arg1[0];
    dst[0]     = arg1[0];
    fr[4]      = arg1[1];
    dst[1]     = arg1[1];
    fr[5]      = arg1[2];
    dst[2]     = arg1[2];
    arg0[0x64] = 1;
}
