/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

u16 func_01ffaf98();

u8 func_01ffaf28(void) {
    volatile u16 t[4];
    u16 lo;
    u16 hi;
    u8 ret;
    u32 v;

    v    = func_01ffaf98();
    t[0] = (u16) v;
    lo   = t[0];
    t[1] = (u16) (v >> 16);
    t[2] = lo;
    hi   = t[1];
    ret  = *(u8 *) &t[2];
    t[3] = hi;
    return ret;
}
