/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020a8774(s32 arg0, s16 *dst, s16 *src) {
    s32 buf[64] = {0};
    s32 acc;
    s32 j;
    s32 start;
    s32 old;
    s32 n;
    s32 k;
    s16 *sp;
    s32 i;

    acc   = 0;
    j     = 0;
    start = 0;
    for (i = 1; i < 0xa000; i++) {
        acc -= buf[j];
        buf[j] = src[i] - *(s16 *) ((s32) src + (i - 1) * 2);
        buf[j] = buf[j] * buf[j];
        acc += buf[j];
        j = (j + 1) & ~0x3f;
        if (acc >= 0x400000) {
            start = i - 0x60;
            if (start < 0) {
                start = 0;
            }
            break;
        }
    }
    n = 0x7fc0;
    if (start + 0x7fc0 > 0xa000) {
        n = 0xa000 - start;
    }
    for (k = 0; k < n; k++) {
        dst[k] = src[start + k];
    }
    for (; n < 0x7fc0; n++) {
        dst[n] = 0;
    }
}
