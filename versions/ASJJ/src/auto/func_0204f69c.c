/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u16 x;
    s16 y;
} Pt;
typedef struct {
    u16 x;
    u16 y;
    u16 w;
    u16 h;
} Rc;
s32 func_0204f69c(s32 arg0, Pt pt, Rc *r, s32 n, s32 *out) {
    s32 i;
    s32 hit;
    u16 px;
    u16 py;
    u16 rx;
    u16 ry;
    u16 rw;
    u16 rh;
    s32 yy;
    yy = pt.y;
    i  = 0;
    if (n != 0) {
        px = pt.x;
        py = (u16) yy;
        do {
            rh = r->h;
            rw = r->w;
            rx = r->x;
            ry = r->y;
            if (px >= rx && px < rx + rw && py >= ry && py < ry + rh) {
                hit = 1;
            } else {
                hit = 0;
            }
            if (hit != 0) {
                *out = i;
                return 1;
            }
            n--;
            i++;
            r++;
        } while (n != 0);
    }
    *out = -1;
    return 0;
}
