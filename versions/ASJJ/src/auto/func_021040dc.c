/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060e38 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060e38.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
struct Obj {
    char pad[0x64];
    u32 unk64;
};
typedef struct {
    u32 *f0;
    char pad4[0x24];
    void (*cb)(void *);
    void *cb_arg;
    char pad30[4];
    u32 flags;
    char pad38[4];
    struct Obj obj;
    char pada4[0x30];
    u16 fd4;
} G;
extern G data_02147d80;
extern u32 func_020fb98c(void);
extern void func_020fb9a0(u32 state);
extern void func_020f9d8c(u16 *self);
extern void func_020f9d58(struct Obj *self);
void func_021040dc(void) {
    int gi             = (int) &data_02147d80;
    G *g               = (G *) gi;
    void (*cb)(void *) = g->cb;
    void *arg          = g->cb_arg;
    u32 s;
    u32 *pf;

    *g->f0 = 0;
    s      = func_020fb98c();
    pf     = (u32 *) ((gi + 0x34));
    {
        u32 val = *pf;
        val &= ~0xc;
        *pf = val;
    }
    func_020f9d8c(&g->fd4);
    if (g->flags & 0x10) {
        func_020f9d58(&g->obj);
    }
    func_020fb9a0(s);
    if (cb) {
        cb(arg);
    }
}
