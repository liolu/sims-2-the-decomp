/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ae8bc from projets/pokemon-dash/src/donor/func_020ae8bc.c (same code in another game of this workspace), reused by
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
extern int func_0210d014(const decimal *d, int digits);
extern void func_0210cfc4(decimal *d, int digits);
extern void func_0210cf60(decimal *d, int digits);
extern int func_0210d014(const decimal *d, int digits);
extern void func_0210cfc4(decimal *d, int digits);
void func_0210cf60(decimal *d, int digits) {
    if (digits > 0 && digits < d->sig.length) {
        int round     = func_0210d014(d, digits);
        d->sig.length = digits;
        if (round >= 0) {
            func_0210cfc4(d, digits);
        }
    }
}
