/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02044a8c(s32, u16 **, s32);

s32 func_01ffafdc(s32 *arg0, u16 **arg1, s32 arg2, s32 arg3) {
    u16 *p;
    u16 a;
    u16 b;
    u8 *e;
    p     = *arg1;
    a     = *p;
    *arg1 = p + 1;
    p     = *arg1;
    b     = *p;
    *arg1 = p + 1;
    e     = (u8 *) (*arg0 + arg2 * 8);
    e[5]  = (u8) a;
    e[6]  = (u8) b;
    func_02044a8c(*arg0 + arg2 * 8, arg1, arg3);
    return 1;
}
