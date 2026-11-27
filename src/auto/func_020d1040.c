/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

typedef struct {
    u8 p0[5];
    u8 k;
    u8 p1[4];
    u8 a;
    u8 fl;
    u8 p2[5];
    u8 m : 2;
    u8 rest : 6;
    u16 t;
    u8 p3[0xc];
} E;
typedef struct {
    u8 p[4];
    u8 *q;
    u8 p2[0x33];
    u8 id;
    u8 p3[0x900];
    E es[1];
} G;
typedef struct {
    s32 v[6];
} C;

extern u8 data_02142848[];
extern C data_02142548[];
extern G *data_021424d4;
extern void func_020d0e9c(s32, s32);
extern void func_020d0858(s32, s32);
extern void func_020d0d14(s32);
extern void func_020d0ac8(s32);

void func_020d1040(void) {
    s32 i;
    G *g;
    E *p;
    u16 h;

    for (i = data_02142848[0x10] - 1; i >= 0; i--) {
        if (data_02142548[i].v[0] != 0) {
            g = data_021424d4;
            p = &g->es[i];
            if (g->id == data_02142848[i + 0x634]) {
                if (p->fl & 4) {
                    h = *(u16 *) (g->q + p->k * 0x20 + 4);
                    if (p->t >= h) {
                        p->t = p->t - h;
                        p->m |= 2;
                    } else {
                        p->t = 0;
                        func_020d0e9c((u8) i, 0);
                        p->fl = 0;
                        p->m  = 0;
                    }
                }
                if (p->fl & 8) {
                    func_020d0858((u8) i, 0);
                    p->m |= 2;
                }
                if (p->fl & 0x10) {
                    func_020d0858((u8) i, 1);
                    p->m |= 2;
                }
                if (p->fl & 0x20) {
                    func_020d0858((u8) i, 2);
                    p->m |= 1;
                }
                if (p->a != 0xFF) {
                    if (p->m & 1) {
                        func_020d0d14((u8) i);
                    }
                    if (p->m & 2) {
                        func_020d0ac8((u8) i);
                    }
                }
            }
        }
    }
}
