/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02044580(s32 a);
void *func_02046894(s32 a, s32 b, s32 c);
void *func_02111bfc(void *a, s32 b, s32 c, s32 d, void *e, void *f);
void func_01ffafdc(void *a, void *b, s32 c, s32 d);
void func_02044ce8(void);
void func_02044cc4(void);

s32 func_020446a4(u8 *arg0, s32 arg1) {
    u8 *p;
    s32 i;
    u8 cnt;
    s32 v;
    s32 h;

    *(u16 *) (arg0 + 0xe) = (u16) arg1;
    if (arg1 == 0xffff) {
        return 0;
    }
    p         = func_02044580(arg1);
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
        *(void **) arg0 = func_02111bfc(func_02046894(cnt * 8 + 8, 3, 4), cnt, 8, 8, func_02044ce8, func_02044cc4);
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
