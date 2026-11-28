/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Hms;

s32 func_020f5b84(s32, s32);

void func_020d972c(Hms *arg0, s32 *arg1) {
    Hms t;
    s32 v;
    s32 s;
    s32 r;

    v = *arg1;
    if (v < 0) {
        s = func_020f5b84(v + 0x80000000, 0x15180);
    } else {
        s = func_020f5b84(v + 0x2D7F, 0x15180);
    }
    r     = func_020f5b84(s, 0xE10);
    t.a   = s / 0xE10;
    t.b   = r / 0x3C;
    t.c   = func_020f5b84(r, 0x3C);
    *arg0 = t;
}
