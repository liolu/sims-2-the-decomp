/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_Initialize from https://github.com/RonyxDumb/mkds src/arm9/021500a0_PM_Initialize.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned short data_02147ee4;
extern int data_02147efc[2];
extern short data_02147f20;
extern char data_02147f0c;
extern int data_02147ef4;
extern void func_02102724(void);
extern void func_020fddd0(void);
extern int func_020fdfb4(int bit, int word);
extern void func_020fdfdc(int a, void *b);
extern void func_020facd8(char *p);
#pragma opt_strength_reduction off
void func_02102810(void) {
    int i;
    if (data_02147ee4 != 0) {
        return;
    }
    data_02147ee4    = 1;
    data_02147efc[0] = 0;
    data_02147efc[1] = 0;
    func_020fddd0();
    while (func_020fdfb4(8, 1) == 0)
        ;
    func_020fdfdc(8, (void *) func_02102724);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_02147f20 + (i << 3)) = 0;
    }
    func_020facd8(&data_02147f0c);
    data_02147ef4 = *(int *) 0x27ffc3c;
}
