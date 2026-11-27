/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e434;
void func_020462cc(void *a, void *b, s32 c);

typedef struct {
    u8 x, y;
} P2;
typedef struct {
    P2 p[8];
} T16;
typedef struct {
    u8 a, b, c;
    T16 t;
} L;
typedef struct {
    u8 a, b, c;
    T16 t;
} H;

s32 func_020cc1f8(u8 *arg0) {
    L loc;
    s32 n;
    u8 *s1;
    u8 *g;
    s32 a;
    s32 lim;
    H *h;

    switch (*(s32 *) (arg0 + 4)) {
        case 0:
            a   = *(s32 *) (arg0 + 0xC);
            lim = *(s32 *) (arg0 + 0x10);
            if ((u32) (a + 0x10) <= (u32) lim) {
                n = 0x10;
            } else {
                n = lim - a;
                if (n <= 0) {
                    return 0;
                }
            }
            func_020462cc(*(u8 **) (data_0213e434 + 0x4000 + 0x79C) + 0x453, (void *) a, n);
            g                     = *(u8 **) (data_0213e434 + 0x4000 + 0x79C);
            g[0x451]              = g[0x451] + 1;
            g                     = *(u8 **) (data_0213e434 + 0x4000 + 0x79C);
            g[0x452]              = n;
            *(s32 *) (arg0 + 0xC) = *(s32 *) (arg0 + 0xC) + n;
            break;
        case 1:
            g     = *(u8 **) (data_0213e434 + 0x4000 + 0x79C);
            s1    = g + 0x220;
            loc.a = s1[0x30];
            h     = (H *) (s1 + 0x30);
            loc.b = h->b;
            loc.c = h->c;
            loc.t = h->t;
            if (loc.c != 0) {
                func_020462cc(*(u8 **) (arg0 + 0xC), &loc.t, loc.c);
            }
            *(s32 *) (arg0 + 0xC)  = *(s32 *) (arg0 + 0xC) + loc.c;
            *(s32 *) (arg0 + 0x10) = *(s32 *) (arg0 + 0xC);
            *(s32 *) arg0          = loc.b;
            break;
        default:
            return 0;
    }
    return 1;
}
