/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Os_GetDebugSystemFlags from https://github.com/RonyxDumb/mkds src/arm9/0200e7b0_Os_GetDebugSystemFlags.c (license: none),
 * reused by tools/donor_match.py */
extern int func_020f96dc(void);
extern unsigned int func_020fb98c(void);
extern int func_020f9774(unsigned short *p);
extern int func_020f9814(int x);
extern int func_020f9834(int a);
extern void func_020fb9a0(unsigned int flags);
int func_020fa354(void) {
    int result;
    int done = 0;
    int x;
    int res;
    unsigned int irq;

    x      = (unsigned short) func_020f96dc();
    result = done;

    do {
        res = -1;
        irq = func_020fb98c();
        if ((func_020f9774((unsigned short *) 0x027fffe8) & 0x40) != 0 || (res = func_020f9814(x)) == 0) {
            if (*(unsigned int *) 0x8000000 == 0x544e494e && *(unsigned int *) 0x8000004 == 0x4f444e45) {
                result = 0x1000000;
            } else {
                result = 0x2000000;
            }
            if (res == 0) {
                func_020f9834(x);
                done = 1;
            }
        }
        func_020fb9a0(irq);
    } while (done == 0);

    return result;
}
