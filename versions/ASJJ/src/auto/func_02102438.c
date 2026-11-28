/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_Initialize from https://github.com/RonyxDumb/mkds src/arm9/021500a0_PM_Initialize.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned short data_02147b44;
extern int data_02147b5c[2];
extern short data_02147b80;
extern char data_02147b6c;
extern int data_02147b54;
extern void func_0210234c(void);
extern void func_020fd9f8(void);
extern int func_020fdbdc(int bit, int word);
extern void func_020fdc04(int a, void *b);
extern void func_020fa900(char *p);
#pragma opt_strength_reduction off
void func_02102438(void) {
    int i;
    if (data_02147b44 != 0) {
        return;
    }
    data_02147b44    = 1;
    data_02147b5c[0] = 0;
    data_02147b5c[1] = 0;
    func_020fd9f8();
    while (func_020fdbdc(8, 1) == 0)
        ;
    func_020fdc04(8, (void *) func_0210234c);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_02147b80 + (i << 3)) = 0;
    }
    func_020fa900(&data_02147b6c);
    data_02147b54 = *(int *) 0x27ffc3c;
}
