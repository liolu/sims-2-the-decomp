/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov009_0214a89c(u8 *arg0) {
    volatile s32 tmp[2];
    u8 *s   = *(u8 **) (arg0 + 0x30);
    u8 *d   = *(u8 **) (arg0 + 0x40);
    s32 *ps = (s32 *) (s + 0x50);
    s32 *pd = (s32 *) (d + 0x50);
    tmp[0]  = ps[0];
    pd[0]   = ps[0];
    tmp[1]  = ps[1];
    pd[1]   = ps[1];
}
