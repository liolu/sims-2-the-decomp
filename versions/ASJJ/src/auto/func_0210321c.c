/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060188 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060188.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned int func_020fb98c(void);
extern void func_020fb9a0(unsigned int);
extern void func_020fba08(void);
extern void func_020f9e00(void *p);
typedef struct {
    int *f0;
    char pad4[4];
    int f8;
    int fc;
    int f10;
    int f14;
} G;
extern G data_02147d80;
void func_0210321c(int a0, int a1) {
    int gi         = (int) &data_02147d80;
    unsigned int s = func_020fb98c();
    G *g           = (G *) gi;
    if (g->f8 == a0) {
        if (g->f14 != a1) {
            func_020fba08();
        }
    } else {
        while (*(volatile int *) &g->f8 != -3) {
            func_020f9e00(&g->f10);
        }
        g->f8  = a0;
        g->f14 = a1;
    }
    {
        int *pc = (int *) ((gi + 0xc));
        *pc     = *pc + 1;
    }
    *g->f0 = 0;
    func_020fb9a0(s);
}
