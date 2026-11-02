/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020bc528(u8 *p, s32 v);
void func_020bda5c(u8 *a, s32 v);

void *func_020bdb84(u8 *arg0, s32 arg1) {
    *(s32 *) arg0 = 0;
    func_020bc528(arg0 + 4, 0xFFFF);
    *(u16 *) (arg0 + 0x18) = 0xFFFF;
    arg0[0x20]             = 0;
    if (arg1 != 0xFFFF) {
        func_020bda5c(arg0, arg1);
    }
    return arg0;
}
