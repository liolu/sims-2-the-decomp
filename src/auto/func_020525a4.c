/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020525a4(u8 *arg0, u32 arg1, s32 arg2) {
    u8 *ip;
    u16 idx;
    s32 *e;

    ip = *(u8 **) (arg0 + 4) + arg1 * 8;
    if (arg2 == 0) {
        return;
    }
    idx = (u16) (arg2 - 1);
    e   = *(s32 **) (*(u8 **) ip + idx * 8);
    if (e == 0) {
        return;
    }
    e[1]                             = e[1] | 0x82;
    *(s32 *) (*(u8 **) ip + idx * 8) = 0;
}
