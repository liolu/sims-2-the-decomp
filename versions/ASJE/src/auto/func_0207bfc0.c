/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204c8b0(s32);
s32 func_0207bed4(u8 *, s32);
s32 func_0204cb3c(s32, s32);

s32 func_0207bfc0(u8 *arg0, s32 arg1) {
    s32 r4;
    u8 ip;
    u8 i;
    s32 v;

    r4 = 0x3F;
    if (func_0204c8b0(0x5F)) {
        r4 = func_0207bed4(arg0, arg1);
    }
    if (r4 == 0x3F) {
        ip = func_0204cb3c(0, 0x2A);
        i  = 0;
        while (r4 == 0x3F) {
            v = *(s32 *) (arg0 + i * 0x2C + 0x10);
            if (!(v == 1 || v == 2 || v == 6 || v == 7 || v == 8 || v == 0xB || v == 9 || v == 4 || i == arg1 || i > 0x17 ||
                  i == 1 || i == 0)) {
                if (ip == 0) {
                    r4 = i;
                    break;
                }
                ip = ip - 1;
            }
            i = i + 1;
            if (i >= 0x39) {
                i = 0;
            }
        }
    }
    return r4;
}
