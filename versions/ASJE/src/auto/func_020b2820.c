/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020b2820(s32 *arg0, s32 *arg1) {
    volatile s32 fr[4];
    s32 t;
    if ((t = arg1[0], fr[0] = t, arg0[0] != t) || (t = arg1[1], fr[1] = t, arg0[1] != t) ||
        (t = arg1[2], fr[2] = t, arg0[2] != t)) {
        return 1;
    }
    return 0;
}
