/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* scalbn from https://github.com/zeldaret/st libs/c/src/extras.c (license: CC0-1.0), reused by tools/donor_match.py */
extern double func_0210c520(double x, int *eptr);
extern double func_0210c5e0(double value, int exp);
extern double func_02107f38(double x, int n);
double func_02107f38(double x, int n) {
    double value;
    int exp;

    value = func_0210c520(x, &exp);
    exp += n;

    return func_0210c5e0(value, exp);
}
