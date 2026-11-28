/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void *func_02046814(s32, s32, s32);
void *func_0204a400(void *, s32 *, s16 *, s32);

void func_02083028(void **arg0, u8 *arg1) {
    s16 sp0;
    s32 v[3];
    void *var_r0;
    u8 *temp_r1;

    v[0]   = 0;
    v[1]   = 0;
    v[2]   = 0;
    sp0    = 0x1D91;
    var_r0 = func_02046814(0x1D4, 3, 4);
    if (var_r0 != NULL) {
        var_r0 = func_0204a400(var_r0, v, &sp0, 1);
    }
    *arg0                      = var_r0;
    temp_r1                    = (u8 *) *arg0;
    *(s32 *) (temp_r1 + 0x1D0) = *(s32 *) arg1;
    *(s32 *) (temp_r1 + 0x44)  = *(s32 *) (arg1 + 4);
}
