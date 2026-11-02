/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ff9620(void *, s32, s32, s32);

s32 func_01ffab80(void *arg0, s32 arg1, s32 arg2) {
    s32 r;
    r = func_01ff9620(arg0, *(s32 *) ((u8 *) arg0 + 4), arg1, 0);
    if (arg2 == 0) {
        return r;
    }
    if (r == 0) {
        r = *(s32 *) ((u8 *) arg0 + 4);
    }
    return r;
}
