/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0204456c(s32 a);
void *func_02046880(s32 a, s32 b, s32 c);
void *func_02112110(void *a, s32 b, s32 c, s32 d, void *e, void *f);
void func_01ffafdc(void *a, void *b, s32 c, s32 d);
void func_02044cd4(void);
void func_02044cb0(void);

s32 func_02044690(u8 *arg0, s32 arg1) {
    u8 *p;
    s32 i;
    u8 cnt;
    s32 v;
    s32 h;

    *(u16 *) (arg0 + 0xe) = (u16) arg1;
    if (arg1 == 0xffff) {
        return 0;
    }
    p         = func_0204456c(arg1);
    v         = *p;
    p         = p + 1;
    arg0[0xb] = v;
    v         = *p;
    p         = p + 1;
    arg0[9]   = v;
    h         = *(u16 *) p;
    p         = p + 2;
    arg0[0xa] = h;
    cnt       = arg0[0xa];
    if (cnt != 0) {
        *(void **) arg0 = func_02112110(func_02046880(cnt * 8 + 8, 3, 4), cnt, 8, 8, func_02044cd4, func_02044cb0);
        i               = 0;
        if ((s32) arg0[0xa] > 0) {
            do {
                func_01ffafdc(arg0, &p, i, arg0[9]);
                i++;
            } while (i < (s32) arg0[0xa]);
        }
    }
    return 1;
}
