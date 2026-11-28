/* compiler: 1.2/sp2p3  */
/* func_02085424 from sims-2-the/src/auto/func_02085424.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
};
typedef struct {
    void *vt;
    s32 f4;
    void *a[6];
    void *b[6];
    void *f38;
    void *f3c;
} S;
extern "C" {
extern u16 func_02088120(s32);
extern void func_020b8860(void *);
extern void func_02046858(void *);
extern void func_020d96c0(void *);
extern void func_02053308(void *);
extern u16 func_0208814c(s32);
extern void func_0204450c(void);
extern u8 data_02132884[];
void *func_020852fc(S *arg0) {
    void *t;
    u16 i;

    arg0->vt = (void *) data_02132884;
    for (i = 0; i < func_02088120(arg0->f4); i++) {
        if (arg0->a[i] != ((void *) 0)) {
            if (arg0->a[i] != ((void *) 0)) {
                ((VA *) arg0->a[i])->f1();
            }
            arg0->a[i] = ((void *) 0);
        }
        t = arg0->b[i];
        if (t != ((void *) 0)) {
            if (t != ((void *) 0)) {
                func_020b8860(t);
                func_02046858(t);
            }
            arg0->b[i] = ((void *) 0);
        }
    }
    t = arg0->f38;
    if (t != ((void *) 0)) {
        if (t != ((void *) 0)) {
            func_020d96c0(t);
            func_02046858(t);
        }
        arg0->f38 = ((void *) 0);
    }
    t = arg0->f3c;
    if (t != ((void *) 0)) {
        if (t != ((void *) 0)) {
            func_02053308(t);
            func_02046858(t);
        }
        arg0->f3c = ((void *) 0);
    }
    func_0208814c(arg0->f4);
    func_0204450c();
    arg0->f4 = 0x21;
    return arg0;
}
}
