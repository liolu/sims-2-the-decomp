/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060484 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060484.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern char data_02148260[];
extern int data_02145ff4[];
extern void func_020fa314(void *p);
extern void func_021037cc(void *fn);
extern int func_02103d60(void *g);
extern unsigned int func_020fbea0(void);
extern void func_020fbeb4(unsigned int flags);
int func_02103bc0(int a, int b, int c, int d, int e, int f) {
    char *g          = (char *) ((void *) (int) ((char *) (data_02148260) + (0)));
    unsigned int irq = func_020fbea0();
    if (*(u32 *) (g + 0x34) & 4) {
        do {
            func_020fa314(g + 0xd4);
        } while (*(u32 *) (g + 0x34) & 4);
    }
    *(u32 *) ((void *) (int) ((char *) (g) + (0x34))) |= 4;
    func_020fbeb4(irq);
    *(int *) (g + 0x18) = b;
    *(int *) (g + 0x1c) = a;
    *(int *) (g + 0x20) = c;
    *(int *) (g + 0x28) = d;
    *(int *) (g + 0x2c) = e;
    if (f != 0) {
        func_021037cc((void *) func_02103d60);
        return 1;
    }
    *(int *) (data_02148260 + 0xd0) = data_02145ff4[2];
    func_02103d60(g);
    return (*(int **) g)[0] == 0;
}
