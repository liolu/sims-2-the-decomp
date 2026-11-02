/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* ldexp from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/ldexp.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern double func_0210c18c(double x, double y);
extern double func_0210c5e0(double x, int n);
static inline int __fpclassifyd(double x) {
    switch (((int *) &x)[1] & 0x7FF00000) {
        case 0x7FF00000:
            if ((((int *) &x)[1] & 0x000FFFFF) || ((int *) &x)[0]) {
                return 1;
            }
            return 2;
        case 0:
            if ((((int *) &x)[1] & 0x000FFFFF) || ((int *) &x)[0]) {
                return 5;
            }
            return 3;
    }
    return 4;
}
extern double _dmul(double a, double b);
double func_0210c5e0(double x, int n) {
    int k;
    int hx;
    int lx;

    if (__fpclassifyd(x) <= 2 || x == 0.0) {
        return x;
    }

    hx = ((int *) &x)[1];
    lx = ((int *) &x)[0];
    k  = (hx & 0x7FF00000) >> 20;
    if (k == 0) {
        if ((lx | (hx & 0x7FFFFFFF)) == 0) {
            return x;
        }

        x  = _dmul(*(double *) &x, 18014398509481984.0);
        hx = ((int *) &x)[1];
        k  = ((hx & 0x7FF00000) >> 20) - 54;
        if (n < -50000) {
            return _dmul(1.0e-300, x);
        }
    }
    if (k == 0x7FF) {
        return x + x;
    }
    k = k + n;
    if (k > 0x7FE) {
        return _dmul(1.0e300, func_0210c18c(1.0e300, x));
    }
    if (k > 0) {
        ((int *) &x)[1] = (hx & 0x800FFFFF) | (k << 20);
        return x;
    }
    if (k <= -54) {

        if (n > 50000) {
            return _dmul(1.0e300, func_0210c18c(1.0e300, x));
        } else {
            return _dmul(1.0e-300, func_0210c18c(1.0e-300, x));
        }
    }

    k += 54;
    ((int *) &x)[1] = (hx & 0x800FFFFF) | (k << 20);
    return _dmul(5.55111512312578270212e-17, x);
}
