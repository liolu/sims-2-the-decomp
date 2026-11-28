/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 y, m, d, w;
} Dt;

s32 func_020f5b84(s32, s32);
s32 func_020f5bdc(s32, s32);
extern s32 data_02128750[];
extern s32 data_02128784[];

Dt func_020d97e4(s32 *arg1) {
    Dt r;
    s32 days;
    s32 q;
    s32 a;
    s32 year;
    s32 yday;
    s32 k;
    s32 km;
    s32 *tbl;

    if (*arg1 < 0) {
        days = func_020f5bdc(*arg1 + 0x80000000, 0x15180);
    } else {
        days = func_020f5bdc(*arg1 + 0x2D7F, 0x15180) + 0x6117;
    }
    q    = days / 1461;
    a    = func_020f5b84(days, 0x5B5) - 1;
    year = a / 365;
    yday = func_020f5b84(a, 0x16D);
    if (year <= 0) {
        year = 0;
        yday += 1;
    }
    k   = 1;
    tbl = (year != 0) ? data_02128750 : data_02128784;
    while (k < 12 && yday >= tbl[k]) {
        k++;
    }
    r.y = year + q * 4;
    r.m = k;
    km  = k - 1;
    r.d = yday - tbl[km] + 1;
    r.w = func_020f5b84(days + 6, 7);
    return r;
}
