/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VB {
    virtual void v0();
    virtual void *v1();
    virtual void v2();
    virtual void v3(VB *o);
    virtual void v4();
    virtual void *v5();
    u8 pad[0xe];
    u8 fl;
};

extern "C" {
VB **func_01ff9620(...);
s32 func_0201879c(...);
VB *func_020187a4(...);
void *func_01ff98c0(VB *arg0, s32 arg1, VB **arg2);
}

static inline void Fin(VB *a0, VB *o) {
    a0->v3(o);
    o->v5();
    if (o != 0) {
        o->v1();
    }
}

void *func_01ff98c0(VB *arg0, s32 arg1, VB **arg2) {
    VB **a;
    VB **b;
    VB **c;
    VB *d;
    VB *r;
    s32 t;
    void *p;
    if (arg2 == 0) {
        return arg0;
    }
    a = func_01ff9620(arg0, arg1, arg2, 0);
    if (a != 0) {
        b = func_01ff9620(arg0, arg1, a, 0);
        if (b != 0) {
            c = func_01ff9620(arg0, arg1, b, 0);
            if (c != 0) {
                func_01ff98c0(arg0, arg1, func_01ff9620(arg0, arg1, c, 0));
                d = func_020187a4(c);
                if (func_0201879c() & 1) {
                    Fin(arg0, d);
                }
            }
            r = *b;
            if (r->fl & 1) {
                Fin(arg0, r);
            }
        }
        r = *a;
        if (r->fl & 1) {
            Fin(arg0, r);
        }
    }
    r = *arg2;
    t = r->fl & 1;
    if (t == 0) {
        return (void *) t;
    }
    arg0->v3(r);
    p = r->v5();
    if (r == 0) {
        return p;
    }
    return r->v1();
}
