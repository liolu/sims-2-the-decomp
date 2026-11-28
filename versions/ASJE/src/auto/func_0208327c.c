/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_02121c8c;

u8 func_0208327c(void **arg0, s32 arg1, s32 arg2) {
    u8 i;

    i = 0;
    do {
        if (arg0[i] == NULL) {
            ((void (*)(void *, s32))((void **) &data_02121c8c)[arg1])(&arg0[i], arg2);
            break;
        }
        i = i + 1;
    } while (i < 2);
    return i;
}
