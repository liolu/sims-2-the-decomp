/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02082924(u8 *arg0, s32 arg1, u16 *arg2, u8 *arg3) {
    u32 i;

    for (i = 0; i < 2; i++) {
        if (arg1 == arg0[(i << 2) + 0x84]) {
            if (arg2 != NULL) {
                *arg2 = *(u16 *) (arg0 + (i << 2) + 0x86);
            }
            if (arg3 != NULL) {
                *arg3 = arg0[(i << 2) + 0x85];
            }
            return 1;
        }
    }
    return 0;
}
