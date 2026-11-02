/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02083d1c(u8 *arg0, u32 arg1) {
    s32 i;
    s32 n;
    u32 k;

    n = *(s32 *) (arg0 + 0x2144);
    i = 0;
    if (n > 0) {
        k = (u16) arg1;
        do {
            if (k == ((u16 *) arg0)[8 + i]) {
                return i;
            }
            i++;
        } while (i < n);
    }
    return 6;
}
