/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Os_GetDebugSystemFlags from https://github.com/RonyxDumb/mkds src/arm9/0200e7b0_Os_GetDebugSystemFlags.c (license: none),
 * reused by tools/donor_match.py */
extern int func_020f9ab4(void);
extern unsigned int func_020fbd64(void);
extern int func_020f9b4c(unsigned short *p);
extern int func_020f9bec(int x);
extern int func_020f9c0c(int a);
extern void func_020fbd78(unsigned int flags);
int func_020fa72c(void) {
    int result;
    int done = 0;
    int x;
    int res;
    unsigned int irq;

    x      = (unsigned short) func_020f9ab4();
    result = done;

    do {
        res = -1;
        irq = func_020fbd64();
        if ((func_020f9b4c((unsigned short *) 0x027fffe8) & 0x40) != 0 || (res = func_020f9bec(x)) == 0) {
            if (*(unsigned int *) 0x8000000 == 0x544e494e && *(unsigned int *) 0x8000004 == 0x4f444e45) {
                result = 0x1000000;
            } else {
                result = 0x2000000;
            }
            if (res == 0) {
                func_020f9c0c(x);
                done = 1;
            }
        }
        func_020fbd78(irq);
    } while (done == 0);

    return result;
}
