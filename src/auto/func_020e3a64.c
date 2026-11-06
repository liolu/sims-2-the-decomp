/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020e3a64(u32 mask, u8 *dst, u8 *srcA, u8 *srcB, s32 n) {
    s32 ca  = n;
    s32 cb  = n;
    s32 cnt = 0;
    do {
        u32 bit = mask & 1;
        cnt++;
        if (bit) {
            *dst++ = *srcB++;
            cb--;
        } else {
            *dst++ = *srcA++;
            ca--;
        }
        mask >>= 1;
        if (ca == 0) {
            break;
        }
    } while (cb != 0);
    if (ca != 0) {
        do {
            *dst++ = *srcA++;
        } while (--ca != 0);
    } else if (cb != 0) {
        do {
            *dst++ = *srcB++;
        } while (--cb != 0);
    }
    return cnt;
}
