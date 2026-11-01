/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* __rounddec from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/ansi_fp.c (license: none), reused by
 * tools/donor_match.py */
typedef struct decimal {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;
extern int func_0210d528(const decimal *d, int digits);
extern void func_0210d4d8(decimal *d, int digits);
extern void func_0210d474(decimal *d, int digits);
int func_0210d528(const decimal *d, int digits);
void func_0210d4d8(decimal *d, int digits);
void func_0210d474(decimal *d, int digits) {
    if (digits > 0 && digits < d->sig.length) {
        int round     = func_0210d528(d, digits);
        d->sig.length = digits;
        if (round >= 0) {
            func_0210d4d8(d, digits);
        }
    }
}
