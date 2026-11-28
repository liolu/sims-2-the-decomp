/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0208aed4(s32 v);
s32 func_0208aebc(s32 v);

s32 func_0208b11c(u8 *arg0) {
    s32 buf[1];
    s32 ret;
    u8 *p;

    buf[0] = 0;
    ret    = 0;
    p      = *(u8 **) (arg0 + 4);
    switch (*(u16 *) (p + 0xC)) {
        case 2:
            ret = func_0208aed4(*(u16 *) (p + 0xA));
            break;
        case 0xB:
            ret = func_0208aebc(*(u16 *) (p + 0xA));
            break;
    }
    return ret;
}
