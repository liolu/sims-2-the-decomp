/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* __kernel_cos from https://github.com/Project-Holon/aletheia src/game/arm9/msl_fdlibm_pow.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef int i32;
extern double func_0210af54(double x, double y);
extern const double zero, one, two, two53, huge, tiny, L1, L2, L3, L4, L5, L6, P1, P2, P3, P4, P5, lg2, lg2_h, lg2_l, ovt, cp,
    cp_h, cp_l, ivln2, ivln2_h, ivln2_l;
double func_0210af54(double x, double y) {
    static const double one = 1.00000000000000000000e+00;
    static const double C1  = 4.16666666666666019037e-02;
    static const double C2  = -1.38888888888741095749e-03;
    static const double C3  = 2.48015872894767294178e-05;
    static const double C4  = -2.75573143513906633035e-07;
    static const double C5  = 2.08757232129817482790e-09;
    static const double C6  = -1.13596475577881948265e-11;

    double a, hz, z, r, qx;
    int ix;

    ix = (((i32 *) &(x))[1]) & 0x7fffffff;
    if (ix < 0x3e400000) {
        if ((int) x == 0) {
            return one;
        }
    }
    z = x * x;
    r = z * (C1 + z * (C2 + z * (C3 + z * (C4 + z * (C5 + z * C6)))));
    if (ix < 0x3FD33333) {
        return one - (0.5 * z - (z * r - x * y));
    } else {
        if (ix > 0x3fe90000) {
            qx = 0.28125;
        } else {
            (((i32 *) &(qx))[1]) = ix - 0x00200000;
            (((i32 *) &(qx))[0]) = 0;
        }
        hz = 0.5 * z - qx;
        a  = one - qx;
        return a - (hz - (z * r - x * y));
    }
}
