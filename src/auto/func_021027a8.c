/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_02102a84(void);
extern void func_02102328(int param);
extern void func_02102000(int a, int b, int c, int d);
extern volatile int data_02148028;
extern int data_0214802c;
int func_021027a8(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_02102a84()) {
        return 1;
    }
    data_02148028 = 0;
    func_02102328(0x3006000);
    p = &data_02148028;
    while (!*p) {
    }
    *p            = 0;
    data_0214802c = 0;
    func_02102000(0, 2, 0, 0);
    func_02102328((a & 0xff) | 0x2006100);
    func_02102328((b & 0xffff) | 0x1010000);
    return 0;
}
