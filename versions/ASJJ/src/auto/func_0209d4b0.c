/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 x, y;
} P2;
typedef struct {
    P2 p[0x300];
} Blk;
typedef struct {
    u8 pad[0x8c];
    u8 f8c;
} Q;
typedef struct {
    u8 p0[0x2c];
    s32 f2c;
    u8 p1[4];
    s32 f34;
    u8 p2[0x10];
    Blk b48;
    s32 f648;
    u8 f64c, f64d, f64e;
    u8 p3;
    Blk b650;
    s32 fc50;
    u8 fc54, fc55, fc56;
    u8 p4;
    s32 fc58, fc5c, fc60, fc64;
    u8 fc68;
    u8 p5[3];
    s32 fc6c;
    u8 p6[0x28];
    Q *fc98;
    Q *fc9c;
} A;
typedef struct {
    Blk b;
    s32 f600;
    u8 f604, f605, f606;
    u8 p[0x32];
    u8 f639;
} G;
typedef struct {
    G *p;
    u8 pad[0x35];
    u8 f39;
} GG;
typedef struct {
    u8 p0[0xc];
    s32 fc;
    u8 p1[9];
    u8 f19;
} H;
typedef struct {
    u8 f0;
    u8 p[0x29];
    u16 f2a;
    u16 f2c;
} D;

extern H *data_02139a84;
extern D *data_0213d43c;
extern GG data_0213e0c8;
void func_0205892c(void *, s32, s32, s32, s32, s32);
void func_0209ca78(void);
void func_0209cc4c(void *);
void func_0209cd84(void *, s32, s32);
void func_0209cffc(void *);
void func_020b3868(void *, s32, s32);
void func_020d50f0(void);
s32 func_020d54a8(s32);

void func_0209d4b0(A *arg0) {
    u8 t;
    G *g;
    s32 x, y;
    H *h;
    Q *q;
    s32 c0, c1, v;
    h      = data_02139a84;
    t      = h->f19;
    h->f19 = 0;
    if (t != 0 && h->fc == 1) {
        data_0213e0c8.p->f606 = 0;
        return;
    }
    q      = arg0->fc9c;
    t      = q->f8c;
    q->f8c = 0;
    if (t != 0) {
        arg0->b650 = arg0->b48;
        arg0->fc50 = arg0->f648;
        arg0->fc54 = arg0->f64c;
        arg0->fc55 = arg0->f64d;
        arg0->fc56 = arg0->f64e;
        g          = data_0213e0c8.p;
        arg0->b48  = g->b;
        arg0->f648 = g->f600;
        arg0->f64c = g->f604;
        arg0->f64d = g->f605;
        arg0->f64e = g->f606;
        g          = data_0213e0c8.p;
        g->b       = arg0->b650;
        g->f600    = arg0->fc50;
        g->f604    = arg0->fc54;
        g->f605    = arg0->fc55;
        g->f606    = arg0->fc56;
        func_020d54a8(0x175);
    }
    q      = arg0->fc98;
    t      = q->f8c;
    q->f8c = 0;
    if (t != 0) {
        func_0205892c(data_02139a84, 0x988, -1, 2, 0, 1);
    }
    if (((u32) (data_0213d43c->f0 << 0x1d)) >> 0x1f) {
        s32 r = 0, b = 0, a = 0;
        arg0->fc58 = data_0213d43c->f2a;
        arg0->fc5c = data_0213d43c->f2c;
        c0         = arg0->fc58;
        if (c0 >= 0x20 && c0 < 0xe0) {
            a = 1;
        }
        if (a != 0 && arg0->fc5c >= 8) {
            b = 1;
        }
        if (b != 0 && arg0->fc5c < 0x88) {
            r = 1;
        }
        arg0->fc68 = r;
        v          = arg0->f2c;
        switch (v) {
            case 0: {
                if (arg0->fc68 != 0) {
                    s32 m;
                    arg0->f2c  = 1;
                    g          = data_0213e0c8.p;
                    arg0->b650 = g->b;
                    arg0->fc50 = g->f600;
                    arg0->fc54 = g->f604;
                    arg0->fc55 = g->f605;
                    arg0->fc56 = g->f606;
                    arg0->fc60 = (arg0->fc5c - 8) >> 2;
                    arg0->fc64 = (arg0->fc58 - 0x20) >> 2;
                    m          = arg0->f34;
                    switch (m) {
                        case 0:
                        case 1:
                            func_0209cd84(arg0, m == 1 ? 1 : 0, 1);
                            arg0->fc6c = func_020d54a8(5);
                            break;
                        case 3: {
                            s32 c60    = arg0->fc60;
                            s32 c64    = arg0->fc64;
                            arg0->fc54 = *(u8 *) ((u8 *) (c60 * 0x30 + (s32) arg0) + c64 + 0x650);
                            if (arg0->fc54 != (u8) arg0->fc50) {
                                func_020b3868((u8 *) arg0 + 0x650, c64, c60);
                            }
                        }
                            func_020d54a8(0xe9);
                            break;
                        case 2:
                        case 4:
                        case 5:
                            func_020d54a8(0x14e);
                            break;
                        default:
                            break;
                    }
                } else {
                    arg0->f2c = 2;
                }
                break;
            }
            case 1:
                func_0209cffc(arg0);
                break;
        }
        data_0213e0c8.f39 = arg0->fc68;
    } else {
        s32 m;
        if (arg0->f2c == 1 && (arg0->fc68 != 0 || ((m = arg0->f34) != 2 && m != 4 && m != 5))) {
            switch (arg0->f34) {
                case 2:
                case 4:
                case 5:
                    func_020d54a8(0x173);
                    break;
                case 0:
                case 1: {
                    enum {
                        MN = -1
                    } mn = MN;
                    if (arg0->fc6c != mn) {
                        func_020d50f0();
                        arg0->fc6c = -1;
                    }
                } break;
                default:
                    break;
            }
            g          = data_0213e0c8.p;
            arg0->b48  = g->b;
            arg0->f648 = g->f600;
            arg0->f64c = g->f604;
            arg0->f64d = g->f605;
            arg0->f64e = g->f606;
            g          = data_0213e0c8.p;
            g->b       = arg0->b650;
            g->f600    = arg0->fc50;
            g->f604    = arg0->fc54;
            g->f605    = arg0->fc55;
            g->f606    = arg0->fc56;
        }
        arg0->f2c         = 0;
        data_0213e0c8.f39 = 0;
    }
    func_0209cc4c(arg0);
    func_0209ca78();
}
