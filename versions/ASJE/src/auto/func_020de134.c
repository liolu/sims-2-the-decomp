/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u32 func_020dae54(u32, s32, s32);

u32 func_020de134(s32 n, u32 *arr, s32 step, s32 *outIdx, s32 *outFlag) {
    s32 lim;
    u32 best;
    s32 bestIdx;
    s32 i;
    s32 flag;
    s32 j;
    u32 d;

    best    = 0;
    lim     = n - step;
    bestIdx = 0;
    i       = 0;
    flag    = 1;
    for (; i < lim; i++) {
        j = step + i;
        d = arr[j] - arr[i];
        if (d > best) {
            bestIdx = i;
            best    = d;
        }
    }
    if (best == 0) {
        best = func_020dae54(arr[n] - arr[0], step, n);
    }
    for (j = 0; j < n; j++) {
        if ((arr[j] & 1) == 0) {
            flag = 0;
            break;
        }
    }
    *outFlag = flag;
    *outIdx  = bestIdx;
    return best;
}
