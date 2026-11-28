/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_01ff90f4(void *, s32);
extern s32 *func_01ff921c(void *, s32 *, s32, s32);
void func_01ff92a8(void *arg0, s32 *arg1);

void func_01ff92a8(void *arg0, s32 *arg1) {
    s32 *p;
    s32 *last;
    s32 v;

    if (arg1 == 0) {
        return;
    }
    v = *arg1;
    p = func_01ff921c(arg0, arg1, v, 0);
    if (p != 0) {
        while (p != 0) {
            last = p;
            p    = func_01ff921c(arg0, p, v, 0);
        }
        func_01ff92a8(arg0, last);
        return;
    }
    if (func_01ff90f4(arg0, v) == 0) {
        return;
    }
    for (p = func_01ff921c(arg0, arg1, v, 1); p != 0; p = func_01ff921c(arg0, p, v, 1)) {
        func_01ff92a8(arg0, p);
    }
}
