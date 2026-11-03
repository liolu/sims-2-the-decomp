/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020a9184(u8 **arg0, s32 *arg1, u8 *arg2) {

    s32 i;

    i = 0;
    do {
        if (arg2[2] & (1 << i)) {
            (*arg0)[0] = 0;
            (*arg0)[1] = (u8) i;
            *arg0 += 2;
            *arg1 += 1;
        }
        i++;
    } while (i < 8);
    if (arg2[3] != 4) {
        (*arg0)[0] = 4;
        (*arg0)[1] = arg2[3];
        *arg0 += 2;
        *arg1 += 1;
    }
    if (arg2[4] != 2) {
        (*arg0)[0] = 5;
        (*arg0)[1] = arg2[4];
        *arg0 += 2;
        *arg1 += 1;
    }
    (*arg0)[0] = 0xA;
    (*arg0)[1] = 0;
}
