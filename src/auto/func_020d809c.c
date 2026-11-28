/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020d809c(s16 *in, s16 *out, u32 n, s16 *c, s16 *state) {
    s16 x[3] = {0, 0, 0};
    s16 y[2] = {0, 0};
    u32 i;
    s32 v;
    s16 *a = c + 3;
    s16 t;

    if (state != 0) {
        x[0] = state[2];
        x[1] = state[1];
        x[2] = state[0];
        y[0] = state[4];
        y[1] = state[3];
    }
    for (i = 0; i < n; i++) {
        t    = in[i];
        x[2] = x[1];
        x[1] = x[0];
        x[0] = t;
        v    = c[0] * x[0];
        v += c[1] * x[1];
        v += c[2] * x[2];
        v += a[0] * y[0];
        v += a[1] * y[1];
        v >>= 14;
        if (v >= 0x8000) {
            v = 0x7fff;
        } else if (v < -0x8000) {
            v = -0x8000;
        }
        out[i] = v;
        y[1]   = y[0];
        y[0]   = v;
    }
}
