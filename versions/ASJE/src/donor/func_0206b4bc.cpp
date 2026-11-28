/* compiler: 1.2/sp2p3  */
/* func_0206b534 from sims-2-the/src/auto/func_0206b534.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
struct V {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
};
struct L {
    V *a;
    V *b;
};
struct S {
    u8 pad0[0x44];
    V *a[5];
    V *b;
    V *c[4];
    V *d[4];
};
extern "C" {
extern void func_0200fb30(...);
extern void func_0203c32c(...);
extern void func_0203d000(...);
extern void *func_020455a4(...);
extern void func_020467cc(...);
extern void *data_0213e440;
void func_0206b4bc(void *arg0) {
    S *s;
    s32 i;
    s32 j;
    L *l;
    V *o;
    V *p;
    s32 z;

    s = (S *) arg0;
    for (i = 0; i < 5; i++) {
        o = s->a[i];
        if (o != ((void *) 0)) {
            o->f1();
        }
    }
    o = s->b;
    if (o != ((void *) 0)) {
        o->f1();
    }
    for (j = 0; j < 4; j++) {
        o = s->c[j];
        if (o != ((void *) 0)) {
            o->f1();
        }
        o = s->d[j];
        if (o != ((void *) 0)) {
            o->f1();
        }
    }
    l = (L *) func_020455a4((u8 *) arg0 + 0x298);
    while (l != ((void *) 0)) {
        u8 *e = *(u8 **) l;
        if (e != ((void *) 0)) {
            p = *(V **) (e + 0x10);
            if (p != ((void *) 0)) {
                if (p != ((void *) 0)) {
                    p->f1();
                }
            }
            func_020467cc(e);
        }
        l = *(L **) ((u8 *) l + 4);
    }
    func_0203c32c(3, 0, 0);
    func_0203d000(3);
    if (*(u8 *) ((u8 *) arg0 + 0x31c) != 0) {
        if (*(s32 *) ((u8 *) data_0213e440 + 0xf8) != 0) {
            *(u8 *) ((u8 *) arg0 + 0x31c) = (z = 0);
            func_0200fb30(*(s32 *) ((u8 *) data_0213e440 + 0xf8), *(u8 *) ((u8 *) arg0 + 0x31c), z);
        }
    }
    ((V *) ((u8 *) arg0 + 0x298))->f7();
}
}
