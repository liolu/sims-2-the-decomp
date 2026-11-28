/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020468a0(s32, s32, s32);
void *func_02049ee8(void *, void *, void *, s32);

void func_02082fd0(void **out) {
    u16 id;
    s32 params[3];
    void *p;
    params[0] = 0;
    params[1] = 0;
    params[2] = 0;
    id        = 0x1D92;
    p         = func_020468a0(0x1D0, 3, 4);
    if (p != NULL) {
        p = func_02049ee8(p, params, &id, 1);
    }
    *out = p;
}
