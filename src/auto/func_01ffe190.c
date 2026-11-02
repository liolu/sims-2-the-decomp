/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fbea0(s32, s32, s32, s32);
void func_020fbeb4(s32);

void func_01ffe190(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 r;
    s32 t;
    u8 *p;
    r                         = func_020fbea0(arg0, arg1, arg2, arg3);
    t                         = arg0 * 12;
    *(s32 *) (0x040000B0 + t) = arg1;
    p                         = (u8 *) (t + 0x040000B0);
    *(s32 *) (p + 4)          = arg2;
    *(s32 *) (p + 8)          = arg3;
    func_020fbeb4(r);
}
