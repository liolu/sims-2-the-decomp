/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct H {
    u8 p0[0x2c];
    s32 f2c;
    u16 f30;
    u8 p32[3];
    u8 f35;
    u8 f36;
    u8 p37[5];
    u16 f3c;
    u8 p3e[0x4c - 0x3e];
} H;
typedef struct W {
    u8 p0[0xa0c];
    H h[10];
    u8 fd04;
    u8 fd05;
    u16 fd06;
    u8 fd08;
} W;
typedef struct S {
    s32 a;
    s32 b;
    s32 p8;
    u8 c;
} S;
typedef struct G {
    u8 p0[0x2f60];
    S s;
} G;
typedef struct T {
    u8 p0[0xda8];
    s32 fda8;
} T;
extern G *data_0213e2f4;
extern T *data_02139e64;
void func_02001944(s32);
void func_02071dcc(s32, s32, s32);
void func_02001914(void);

void func_02081f90(W *w, s32 id, u32 sub) {
    u8 i;
    G *g;
    S *s;
    s32 t;

    for (i = 0; i < 10; i++) {
        if (w->h[i].f35 != 0 && id == w->h[i].f2c && (sub == -1 || sub == w->h[i].f30)) {
            w->h[i].f3c--;
            if (w->h[i].f3c == 0) {
                g = data_0213e2f4;
                s = &g->s;
                g->s.a += 150;
                if (g->s.a > 999999) {
                    s->a = 999999;
                } else if (g->s.a < 0) {
                    s->a = 0;
                }
                s->c = 1;
                s->b += 150;
                if (s->b > 999999 || s->b < 0) {
                    s->b = 999999;
                }
                w->h[(u32) i].f35 = 0;
                w->fd08           = 1;
                t                 = data_02139e64->fda8;
                func_02001944(0);
                func_02071dcc(t + 0x24, 0x96b, 0x973);
                func_02001914();
            }
        }
    }
}
