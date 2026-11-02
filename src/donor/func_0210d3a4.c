/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* __ull2dec from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/ansi_fp.c (license: none), reused by
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
extern void func_0210d3a4(decimal *result, unsigned long long val);
void func_0210d3a4(decimal *result, unsigned long long val) {
    result->sgn        = 0;
    result->sig.length = 0;

    for (; val != 0; val /= 10) {
        result->sig.text[result->sig.length++] = (unsigned char) (val % 10);
    }

    {
        unsigned char *i = result->sig.text;
        unsigned char *j = result->sig.text + result->sig.length;

        for (; i < --j; ++i) {
            unsigned char t = *i;
            *i              = *j;
            *j              = t;
        }
    }

    result->exp = result->sig.length - 1;
}
