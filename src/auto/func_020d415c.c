/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020d415c(u32 arg0, u32 arg1) {
    volatile u32 *q;
    *(volatile u16 *) 0x04000280 = 0;
    *(volatile u32 *) 0x04000290 = arg0;
    q                            = (volatile u32 *) 0x04000298;
    *q                           = arg1;
    q[1]                         = 0;
}
