/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ffdc50(u8 *arg0) {
    void (*fn)(u8 *) = *(void (**)(u8 *))(arg0 + 0xc);
    if (fn != 0) {
        fn(arg0);
    }
    *(s32 *) arg0 = *(s32 *) arg0 + 1;
}
