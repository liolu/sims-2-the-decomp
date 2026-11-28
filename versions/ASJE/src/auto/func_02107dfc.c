/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021101b8 from projets/resident-evil-deadly-silence/src/donor/func_021101b8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern double func_0210c3e4(double x, int *eptr);
extern double func_0210c4a4(double value, int exp);
extern double func_02107dfc(double x, int n);
double func_02107dfc(double x, int n) {
    double value;
    int exp;

    value = func_0210c3e4(x, &exp);
    exp += n;

    return func_0210c4a4(value, exp);
}
