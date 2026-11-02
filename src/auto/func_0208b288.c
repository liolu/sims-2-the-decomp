/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0208b288(u8 *arg0, s32 arg1) {
    s32 v;

    v = arg0[arg1 + 0x10];
    switch (v) {
        case 2:
        case 0x3A:
        case 0x3B:
        case 0x3C:
            return 0;
        default:
            return 1;
    }
}
