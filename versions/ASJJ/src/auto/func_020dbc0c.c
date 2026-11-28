/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

void func_020ff244(void *, s32, s32);
s32 func_020ff2b0(void *, s32, s32);

typedef struct T {
    u8 pad[0x40];
    s32 f40;
} T;
typedef struct S {
    u8 pad0[0x20];
    s32 f20;
    u8 pad24[0x1c];
    u32 f40;
    u8 pad44[4];
    u32 f48;
    u8 pad4c[8];
    u8 f54[0x40];
    s32 f94p;
    u8 pad[4];
    s32 f98;
} S;

s32 func_020dbc0c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *volatile sp[2];
    void *p;
    s32 r;
    u8 *q;
    u32 d;
    T *t;
    s32 nv;

    if (arg1 != -1 && *(s32 *) (arg0 + 0x94) != arg1) {
        if (*(void *volatile *) (arg0 + 0xb0) != 0) {
            sp[0] = *(void *volatile *) (arg0 + 0xb0);
        } else {
            sp[0] = arg0 + 0x54;
        }
        p = sp[0];
        func_020ff244(p, arg1 + *(volatile s32 *) (arg0 + 0xb4), 0);
        *(s32 *) (arg0 + 0x94) = arg1;
    }
    if (*(void *volatile *) (arg0 + 0xb0) != 0) {
        sp[1] = *(void *volatile *) (arg0 + 0xb0);
    } else {
        sp[1] = arg0 + 0x54;
    }
    r = func_020ff2b0(sp[1], arg2, arg3);
    if (r != arg3) {
        *(s32 *) (arg0 + 0x20) = 1;
    }
    t  = (T *) (arg0 + 0x54);
    nv = t->f40;
    nv += r;
    t->f40                 = nv;
    *(s32 *) (arg0 + 0x98) = *(s32 *) (arg0 + 0x94);
    d                      = *(s32 *) (arg0 + 0xb8) - *(s32 *) (arg0 + 0x98);
    if (d >= *(u32 *) (arg0 + 0x40)) {
        d = *(u32 volatile *) (arg0 + 0x40);
    }
    *(u32 *) (arg0 + 0x48) = d;
    return r;
}
