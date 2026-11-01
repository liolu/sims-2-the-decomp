/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060188 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060188.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned int func_020fbea0(void);
extern void func_020fbeb4(unsigned int);
extern void func_020fbf1c(void);
extern void func_020fa314(void *p);
typedef struct {
    int *f0;
    char pad4[4];
    int f8;
    int fc;
    int f10;
    int f14;
} G;
extern G data_02148260;
void func_02103730(int a0, int a1) {
    int gi         = (int) &data_02148260;
    unsigned int s = func_020fbea0();
    G *g           = (G *) gi;
    if (g->f8 == a0) {
        if (g->f14 != a1) {
            func_020fbf1c();
        }
    } else {
        while (*(volatile int *) &g->f8 != -3) {
            func_020fa314(&g->f10);
        }
        g->f8  = a0;
        g->f14 = a1;
    }
    {
        int *pc = (int *) ((gi + 0xc));
        *pc     = *pc + 1;
    }
    *g->f0 = 0;
    func_020fbeb4(s);
}
