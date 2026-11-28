/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207c814 from projets/club-house-games/src/donor/func_0207c814.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
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
extern int func_0210d3ec(const decimal *d, int digits);
int func_0210d3ec(const decimal *d, int digits) {
    const unsigned char *i = d->sig.text + digits;

    if (*i > 5) {
        return 1;
    }
    if (*i < 5) {
        return -1;
    }
    {
        const unsigned char *e = d->sig.text + d->sig.length;
        for (i++; i < e; i++) {
            if (*i != 0) {
                return 1;
            }
        }
    }
    if (d->sig.text[digits - 1] & 1) {
        return 1;
    }
    return -1;
}
