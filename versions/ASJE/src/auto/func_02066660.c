/* compiler: 1.2/sp2p3 -pragma "opt_propagation off" */
#include "m2c.h"

extern void *data_0213e2f4;
extern void *data_0213e440;

s32 func_02066660(void) {
    volatile s32 sp0;
    volatile s32 sp4;
    s32 r0;

    r0 = 0;
    if (M2C_FIELD(data_0213e440, s32 *, 0xF4) != 9) {
        return 0;
    }
    sp0 = 0;
    sp4 = 0;
    if ((s32) M2C_FIELD(data_0213e2f4, s32 *, 0x41DC) > r0) {
        r0 = 1;
    }
    return r0;
}
