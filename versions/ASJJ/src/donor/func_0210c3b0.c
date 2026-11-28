/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cf860 from eyeshield-21/src/donor/func_020cf860.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef int i32;
extern int func_0210a2f0(double x, double *y);
extern double func_0210aa40(double x, double y);
extern double func_0210b9e4(double x, double y, int iy);
extern double func_0210c3b0(double x);
extern double func_0210b9e4(double x, double y, int iy);
double func_0210c3b0(double x) {
    double y[2];
    double z = 0.0;
    int n;
    int ix;

    ix = (((i32 *) &(x))[1]) & 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return func_0210b9e4(x, z, 0);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = func_0210a2f0(x, y);
        switch (n & 3) {
            case 0:
                return func_0210b9e4(y[0], y[1], 1);
            case 1:
                return func_0210aa40(y[0], y[1]);
            case 2:
                return -func_0210b9e4(y[0], y[1], 1);
            default:
                return -func_0210aa40(y[0], y[1]);
        }
    }
}
