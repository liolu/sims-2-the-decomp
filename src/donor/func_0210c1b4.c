/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* cos from https://github.com/Project-Holon/aletheia src/game/arm9/msl_fdlibm.c (license: none (MIT = tooling only)), reused
 * by tools/donor_match.py */
typedef int i32;
extern int func_0210a804(double x, double *y);
extern double func_0210af54(double x, double y);
extern double func_0210bef8(double x, double y, int iy);
extern double func_0210c1b4(double x);
double func_0210bef8(double x, double y, int iy);
double func_0210c1b4(double x) {
    double y[2];
    double z = 0.0;
    int n;
    int ix;

    ix = (((i32 *) &(x))[1]) & 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return func_0210af54(x, z);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = func_0210a804(x, y);
        switch (n & 3) {
            case 0:
                return func_0210af54(y[0], y[1]);
            case 1:
                return -func_0210bef8(y[0], y[1], 1);
            case 2:
                return -func_0210af54(y[0], y[1]);
            default:
                return func_0210bef8(y[0], y[1], 1);
        }
    }
}
