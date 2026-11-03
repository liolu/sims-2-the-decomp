/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203d438(void *a, s32 b);
s32 func_0203d484(void *a);

s32 func_020ac034(void *arg0) {
    s32 r = func_0203d438(arg0, 2);
    s32 total;

    switch (r) {
        case 0:
            return 1;
        case 1:
            return 2;
        case 2:
            return 4;
        case 3:
            break;
    }
    r = func_0203d438(arg0, 5);
    if (r == 0) {
        return 0;
    }
    if (r == 1) {
        return 3;
    }
    total = 0;
    if (r == 0x1f) {
        do {
            total += r;
            r = func_0203d438(arg0, 5);
        } while (r == 0x1f);
    }
    total += r;
    if (r == 0x1e) {
        total += func_0203d484(arg0);
    }
    return total + 3;
}
