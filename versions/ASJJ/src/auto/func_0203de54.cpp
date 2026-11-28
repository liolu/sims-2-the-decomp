/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" u16 *func_0204454c(void *);
extern "C" void func_020fc55c(u16 *, void *, s32);
extern "C" void func_0203de54(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 c;
    s32 m;
    u16 *p;
    u32 f;
    p = func_0204454c(arg1);
    f = (u32) (*p << 0x1E) >> 0x1E;
    switch (f) {
        case 0:
            c = 0;
            break;
        case 1:
            c = 0x200;
            break;
        case 2:
            c = 0x20;
            break;
        default:
            c = 0;
            break;
    }
    m = arg3 * 2;
    if (c >= m) {
        c = m;
    }
    func_020fc55c(&(p + 1)[arg2], arg0, c);
}
