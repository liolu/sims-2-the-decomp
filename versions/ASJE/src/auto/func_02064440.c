/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
s32 func_020644c4(void *, W);

s32 func_02064440(u8 *arg0) {
    W w;
    u8 temp_r2;
    u8 temp_r2_2;

    temp_r2 = arg0[0x4651];
    if (temp_r2 == 2) {
        return 1;
    }
    if (temp_r2 != 0) {
        return 0;
    }
    temp_r2_2 = arg0[0x4650];
    if (temp_r2_2 == 2) {
        return 1;
    }
    if (temp_r2_2 != 0) {
        return 0;
    }
    w.v = *(s32 *) (arg0 + 0x480C);
    return func_020644c4(arg0, w);
}
