/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} W;
s32 func_02046814(s32, s32, s32);
s32 func_0204c52c(s32, s32, s32, W, s32);

s32 func_0204bf78(s32 a0, s32 a1, s32 a2, W a3, s32 a4) {
    s32 r;
    r = func_02046814(0x28, 3, 4);
    if (r == 0) {
        return r;
    }
    return func_0204c52c(r, a1, a2, a3, a4);
}
