/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ee5cc();                    /* extern */

void func_020ee564(s32 *arg0, M2C_UNK arg1) {
    if ((func_020ee5cc(((s8 *) arg0 + 8)) == 0) && (func_020ee5cc(((s8 *) arg0 + 0x10), arg1) == 0) &&
        (func_020ee5cc(((s8 *) arg0 + 0x18), arg1) == 0)) {
        return;
    }
    *arg0 |= 0x10;
}
