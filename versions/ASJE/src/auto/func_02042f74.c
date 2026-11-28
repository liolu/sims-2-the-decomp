/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_02043064(void *, void *);
extern void *func_02043340(void *, void *, s32, void *);
extern s32 func_0204311c(void *);
extern s32 func_0204306c(s32, void *, void *);
extern void **func_02043084(void **);
extern void **func_020430f0(void *);
extern void func_020433e4(void *, void *);
extern void *func_02043118(void *);
extern void func_020430f8(void *, void *);
extern void *func_02043110(void *);
extern void func_020430fc(void *, void *, s32);
extern void **func_0204310c(void *);

s32 func_02042f74(void *arg0, void *arg1) {
    void *loc[2];
    void *r4;
    void **lp;
    void *f8;
    s32 r2;
    r2 = func_02043064(arg0, arg1);
    r4 = func_02043340(arg0, arg1, r2, (u8 *) arg0 + 4);
    if (r4 == (u8 *) arg0 + 4 || func_0204306c(func_0204311c(arg0), arg1, (u8 *) r4 + 0xC) != 0) {
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
        *(void **) ((u8 *) arg0 + 8) = *func_02043084(lp);
    }
    func_020433e4(r4, *func_020430f0(arg0));
    func_020430f8(func_02043118(arg0), (u8 *) r4 + 0xC);
    func_020430fc(func_02043110(arg0), r4, 1);
    {
        void **p = func_0204310c(arg0);
        *p       = (void *) ((s32) *p - 1);
    }
    return 1;
}
