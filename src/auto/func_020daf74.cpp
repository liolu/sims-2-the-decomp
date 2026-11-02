/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

extern "C" u32 func_020daf74(u32 a, u32 b, s32 n) {
    u64 p;

    p = (u64) a * (u64) b;
    return (u32) (p >> n);
}
