/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Pt {
    s32 x;
    s32 y;
} Pt;
typedef struct R4 {
    s32 l;
    s32 r;
    s32 t;
    s32 b;
} R4;
s32 func_02017844(u8 *a, u8 *o, Pt p) {
    volatile R4 rc;
    s32 l, r, t, b;
    s32 ox, oy;
    s32 x0, x1, y0, y1;
    l    = *(s32 *) (a + 0x8);
    rc.l = l;
    ox   = *(s32 *) (o + 0x50);
    x0   = ox + l;
    r    = *(s32 *) (a + 0x10);
    rc.r = r;
    x1   = ox + r;
    t    = *(s32 *) (a + 0xc);
    rc.t = t;
    oy   = *(s32 *) (o + 0x54);
    y0   = oy + t;
    b    = *(s32 *) (a + 0x14);
    rc.b = b;
    y1   = oy + b;
    if (p.x >= x0 && p.x <= x1 && ((s32 *) &p)[1] >= y0 && ((s32 *) &p)[1] <= y1) {
        return 1;
    }
    return 0;
}
