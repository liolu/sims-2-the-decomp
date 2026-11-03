/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_01ffc270(s32 *, s32 *);
extern void func_01ffc328(s32 *);

void func_0204c4a0(void *arg0, s32 unused, void *arg2, void *arg3) {
    volatile s32 fr[11];
    s32 z0;
    s32 y0;
    s32 x0;
    s32 d0;
    s32 d1;
    s32 d2;
    s32 lim;
    s32 o;
    s32 t;

    z0     = ((s32 *) arg0)[2];
    fr[5]  = z0;
    d2     = ((s32 *) arg2)[2] - z0;
    y0     = ((s32 *) arg0)[1];
    fr[6]  = y0;
    d1     = ((s32 *) arg2)[1] - y0;
    x0     = ((s32 *) arg0)[0];
    fr[7]  = x0;
    d0     = ((s32 *) arg2)[0] - x0;
    fr[8]  = d0;
    fr[9]  = d1;
    fr[10] = d2;
    func_01ffc270((s32 *) &fr[0], (s32 *) &fr[8]);
    lim   = ((s32 *) arg0)[6];
    o     = fr[0];
    fr[1] = lim;
    if (o >= lim) {
        return;
    }
    func_01ffc328((s32 *) &fr[8]);
    t     = fr[8];
    fr[2] = t;
    ((s32 *) arg3)[0] += t;
    t     = fr[9];
    fr[3] = t;
    ((s32 *) arg3)[1] += t;
    t     = fr[10];
    fr[4] = t;
    ((s32 *) arg3)[2] += t;
}
