/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ffdc24(u8 *arg0) {
    void (*fn)(u8 *) = *(void (**)(u8 *))(arg0 + 0x10);
    if (fn != 0) {
        fn(arg0);
    }
    *(u32 *) (arg0 + 0x8) = *(u32 *) (arg0 + 0x8) | 0x20;
}
