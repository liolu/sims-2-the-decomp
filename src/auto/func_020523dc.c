/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020523dc(s32 *arg0, s32 arg1) {
    u16 idx;
    if (arg1 == 0) {
        return 0;
    }
    idx = (u16) (arg1 - 1);
    return *(s32 *) (*(u8 **) arg0 + (idx * 8));
}
