/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct W {
    s32 v;
} W;
extern "C" s32 func_02046814(s32, s32, s32);
extern "C" s32 func_020170c4(s32, s32);
extern "C" s32 func_02016da4(s32 *, s32, s32, W, s32, s32);
extern "C" s32 func_02016f40(s32 *arg0, s32 a1, s32 a2, W a3, s32 a4, u8 a5) {
    s32 r;
    r = func_02046814(0x74, 0, 4);
    if (r != 0) {
        r = func_020170c4(r, 0);
    }
    arg0[0] = r;
    return func_02016da4(arg0, a1, a2, a3, a4, a5);
}
