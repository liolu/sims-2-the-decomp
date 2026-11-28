/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 pad[0x10];
    s32 h;
    s32 m;
    s32 s;
} Clock;
typedef struct {
    s32 a;
    u8 f[8];
    s32 t[7];
} T;
s32 func_020f5b84(s32 a, s32 b);
extern s32 data_0213e2f4;
void func_02063eec(T *p) {
    u8 i;
    for (i = 0; i < 7; i++) {
        Clock *c;
        s32 v;
        s32 h, m, s;
        p->f[i] = 0;
        v       = p->t[i];
        c       = (Clock *) (data_0213e2f4 + 0x47f0);
        s       = c->s;
        m       = c->m;
        h       = c->h;
        if (v < 0) {
            p->t[i] -= func_020f5b84(v + 0x80000000, 86400);
        } else {
            p->t[i] -= func_020f5b84(v, 86400);
        }
        p->t[i] += s + (m * 60 + h * 3600);
    }
    p->a = 0x21;
}
