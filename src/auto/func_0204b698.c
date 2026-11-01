/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204b718(u8 *, s32, u8 *, s32 *);
void func_0204c4a0(s32, u32, u8 *, u8 *);

void func_0204b698(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 sp0;
    s32 var_r0;
    u32 var_r5;

    sp0    = 0;
    var_r0 = func_0204b718(arg0, 0, arg1, &sp0);
    var_r5 = 3;
    while (var_r0 != 0 && var_r5 <= 3) {
        func_0204c4a0(var_r0, var_r5, arg1, arg2);
        var_r0 = func_0204b718(arg0, sp0, arg1, &sp0);
        var_r5 += 1;
    }
}
