/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_0210816c(void *, void *, s32);

u8 *func_020e41f8(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 len = arg3 - arg2;
    func_0210816c(arg1, (void *) arg2, len);
    return arg1 + len;
}
