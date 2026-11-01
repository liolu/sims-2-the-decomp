/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_Initialize from https://github.com/RonyxDumb/mkds src/arm9/021500a0_PM_Initialize.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned short data_02148024;
extern int data_0214803c[2];
extern short data_02148060;
extern char data_0214804c;
extern int data_02148034;
extern void func_02102860(void);
extern void func_020fdf0c(void);
extern int func_020fe0f0(int bit, int word);
extern void func_020fe118(int a, void *b);
extern void func_020fae14(char *p);
#pragma opt_strength_reduction off
void func_0210294c(void) {
    int i;
    if (data_02148024 != 0) {
        return;
    }
    data_02148024    = 1;
    data_0214803c[0] = 0;
    data_0214803c[1] = 0;
    func_020fdf0c();
    while (func_020fe0f0(8, 1) == 0)
        ;
    func_020fe118(8, (void *) func_02102860);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_02148060 + (i << 3)) = 0;
    }
    func_020fae14(&data_0214804c);
    data_02148034 = *(int *) 0x27ffc3c;
}
