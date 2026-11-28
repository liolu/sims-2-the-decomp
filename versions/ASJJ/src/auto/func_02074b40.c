/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    s32 a;
    s32 b;
    s32 c;
} S;
typedef struct O {
    s32 x0;
    s32 x4;
    u8 pad8[8];
    S s[5];
    u8 pad4c[4];
    s32 x50;
} O;
void func_02074b40(O *o) {
    volatile s32 t[2];
    s32 v;
    int i;
    S *s = o->s;
    for (i = 0; i < 5; i++, s++) {
        if (s->c >= 3) {
            s->c = 0;
            s->a = 0;
            s->b = 0x708;
        }
    }
    o->x50 = -1;
    v      = o->x4 >> 3;
    t[0]   = v;
    t[1]   = v;
    o->x0  = v;
}
