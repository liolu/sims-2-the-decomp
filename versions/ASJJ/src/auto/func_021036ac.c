/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060484 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060484.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern char data_02147d80[];
extern int data_02145b14[];
extern void func_020f9e00(void *p);
extern void func_021032b8(void *fn);
extern int func_0210384c(void *g);
extern unsigned int func_020fb98c(void);
extern void func_020fb9a0(unsigned int flags);
int func_021036ac(int a, int b, int c, int d, int e, int f) {
    char *g          = (char *) ((void *) (int) ((char *) (data_02147d80) + (0)));
    unsigned int irq = func_020fb98c();
    if (*(u32 *) (g + 0x34) & 4) {
        do {
            func_020f9e00(g + 0xd4);
        } while (*(u32 *) (g + 0x34) & 4);
    }
    *(u32 *) ((void *) (int) ((char *) (g) + (0x34))) |= 4;
    func_020fb9a0(irq);
    *(int *) (g + 0x18) = b;
    *(int *) (g + 0x1c) = a;
    *(int *) (g + 0x20) = c;
    *(int *) (g + 0x28) = d;
    *(int *) (g + 0x2c) = e;
    if (f != 0) {
        func_021032b8((void *) func_0210384c);
        return 1;
    }
    *(int *) (data_02147d80 + 0xd0) = data_02145b14[2];
    func_0210384c(g);
    return (*(int **) g)[0] == 0;
}
