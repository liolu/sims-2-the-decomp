/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_02107fe4(s32, s32, s32);
s32 func_020cbf04(void *arg0, s32 arg1) {
    s32 t;
    t = *(s32 *) arg0 + *((s32 *) arg0 + 1) * 196;
    func_02107fe4(arg1, arg1 + 0xC4, ((t - arg1) / 196 - 1) * 0xC4);
    *((s32 *) arg0 + 1) = *((s32 *) arg0 + 1) - 1;
    return arg1;
}
