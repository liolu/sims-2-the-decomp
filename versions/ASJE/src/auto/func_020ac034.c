/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203d49c(void *, s32, s32);
void func_0203d50c(void *, s32);

void func_020ac034(s32 arg0, void *arg1) {
    s32 r4;
    u32 r6;
    void *p;

    p = arg1;
    switch (arg0) {
        case 1:
            r4 = 0;
            break;
        case 2:
            r4 = 1;
            break;
        case 4:
            r4 = 2;
            break;
        default:
            r4 = 3;
            break;
    }
    func_0203d49c(p, (u8) r4, 2);
    if (r4 != 3) {
        return;
    }
    switch (arg0) {
        case 0:
            func_0203d49c(p, 0, 5);
            return;
        case 3:
            func_0203d49c(p, 1, 5);
            return;
        default:
            break;
    }
    r6 = arg0 - 3;
    while (r6 >= 0x1F) {
        func_0203d49c(p, 0x1F, 5);
        r6 -= 0x1F;
    }
    if (r6 >= 0x1E) {
        func_0203d49c(p, 0x1E, 5);
        func_0203d50c(p, (u8) (r6 - 0x1E));
    } else {
        func_0203d49c(p, (u8) r6, 5);
    }
}
