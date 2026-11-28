/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ffc1ac(s32 *arg0, s32 *arg1, s32 arg2) {
    volatile s32 fr[4];
    s32 a;
    s32 b;
    s32 c;
    arg2 += 12;
    c     = (s32) (((s64) arg1[2] * arg1[2]) >> arg2);
    fr[1] = c;
    fr[3] = c;
    b     = (s32) (((s64) arg1[1] * arg1[1]) >> arg2);
    fr[0] = b;
    fr[2] = b;
    a     = (s32) (((s64) arg1[0] * arg1[0]) >> arg2);
    {
        s32 t = a + b;
        *arg0 = t + c;
    }
}
