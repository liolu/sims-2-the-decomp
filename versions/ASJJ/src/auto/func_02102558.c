/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_021501c0 from https://github.com/RonyxDumb/mkds src/arm9/021501c0_func_021501c0.c (license: none), reused by
 * tools/donor_match.py */
extern int data_02147b5c;
void func_02102558(void) {
    int *p = &data_02147b5c;
    while (*(volatile int *) p != 0) {
    }
}
