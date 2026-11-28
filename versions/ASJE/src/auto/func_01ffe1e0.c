/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_01ffe190(s32, s32, s32, s32);
extern void func_020fc020(s32, s32, u32, s32);

s32 func_01ffe1e0(s32 arg0, s32 arg1, u32 arg2) {
    volatile u32 *reg;
    u32 n;
    u32 c;
    s32 r;

    n = arg2;
    if (n == 0) {
        return arg0;
    }
    func_020fc020(arg0, arg1, arg2, 0);
    reg = (volatile u32 *) 0x040000B0 + (arg0 * 3 + 2);
    do {
    } while ((*reg & 0x80000000) != 0);
    if (n != 0) {
        do {
            if (n > 0x1D8) {
                c = 0x1D8;
            } else {
                c = n;
            }
            func_01ffe190(arg0, arg1, 0x04000400, 0x84400000 | (c >> 2));
            n -= c;
            arg1 += c;
        } while (n != 0);
    }
    do {
        r = *reg & 0x80000000;
    } while (r != 0);
    return r;
}
