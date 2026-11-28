/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_020430f0(void *, void *);
extern void *func_020433cc(void *, void *, s32, void *);
extern s32 func_020431a8(void *);
extern s32 func_020430f8(s32, void *, void *);
extern void **func_02043110(void **);
extern void **func_0204317c(void *);
extern void func_02043470(void *, void *);
extern void *func_020431a4(void *);
extern void func_02043184(void *, void *);
extern void *func_0204319c(void *);
extern void func_02043188(void *, void *, s32);
extern void **func_02043198(void *);

s32 func_02043000(void *arg0, void *arg1) {
    void *loc[2];
    void *r4;
    void **lp;
    void *f8;
    s32 r2;
    r2 = func_020430f0(arg0, arg1);
    r4 = func_020433cc(arg0, arg1, r2, (u8 *) arg0 + 4);
    if (r4 == (u8 *) arg0 + 4 || func_020430f8(func_020431a8(arg0), arg1, (u8 *) r4 + 0xC) != 0) {
        r4 = (u8 *) arg0 + 4;
    }
    if (r4 == (u8 *) arg0 + 4) {
        return 0;
    }
    loc[0] = r4;
    loc[1] = r4;
    lp     = &loc[1];
    f8     = *(void **) ((u8 *) arg0 + 8);
    if (r4 == f8) {
        *(void **) ((u8 *) arg0 + 8) = *func_02043110(lp);
    }
    func_02043470(r4, *func_0204317c(arg0));
    func_02043184(func_020431a4(arg0), (u8 *) r4 + 0xC);
    func_02043188(func_0204319c(arg0), r4, 1);
    {
        void **p = func_02043198(arg0);
        *p       = (void *) ((s32) *p - 1);
    }
    return 1;
}
