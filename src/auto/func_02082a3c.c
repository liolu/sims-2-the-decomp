/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02082a3c(u8 *arg0, s32 arg1, s32 *arg2, u8 *arg3) {
    u32 i;

    for (i = 0; i < 3; i++) {
        if (arg1 == arg0[(i << 2) + 0x78]) {
            if (arg2 != NULL) {
                *arg2 = *(s16 *) (arg0 + (i << 2) + 0x7A);
            }
            if (arg3 != NULL) {
                *arg3 = arg0[(i << 2) + 0x79];
            }
            return 1;
        }
    }
    return 0;
}
