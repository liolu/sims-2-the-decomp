/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020bc05c(u8 *p, s32 v);
void func_020bd590(u8 *a, s32 v);

void *func_020bd6b8(u8 *arg0, s32 arg1) {
    *(s32 *) arg0 = 0;
    func_020bc05c(arg0 + 4, 0xFFFF);
    *(u16 *) (arg0 + 0x18) = 0xFFFF;
    arg0[0x20]             = 0;
    if (arg1 != 0xFFFF) {
        func_020bd590(arg0, arg1);
    }
    return arg0;
}
