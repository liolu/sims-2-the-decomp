/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} W;
extern void func_02072c88(void *, W, s32);
extern s32 func_020f5d7c(s32, s32);

void func_020b0590(void *arg0, volatile s32 arg1, s32 arg2, ...) {
    volatile s32 fr[4];
    s32 t;
    u8 *p = (u8 *) arg0;

    if (arg2 != 0) {
        *(s32 *) (p + 0xDC) = *(s32 *) (p + 0xDC) + arg1;
        t                   = *(s32 *) (p + 0xE0);
        fr[2]               = t;
        fr[0]               = func_020f5d7c(*(s32 *) (p + 0xDC), t);
        func_02072c88(p + 0x9C, *(W *) &fr[0], 1);
        return;
    }
    *(s32 *) (p + 0xD4) = *(s32 *) (p + 0xD4) + arg1;
    t                   = *(s32 *) (p + 0xD8);
    fr[3]               = t;
    fr[1]               = func_020f5d7c(*(s32 *) (p + 0xD4), t);
    func_02072c88(*(void **) (p + 0x98), *(W *) &fr[1], 1);
}
