/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void *func_0200b448(void *, s32);
void *func_02046814(s32, s32, s32);
extern s32 data_027e0004;

void *func_02087a98(void *unused, s32 arg1) {
    u8 *var_r0;
    s32 *p;

    var_r0 = func_02046814(0x220, 3, 4);
    if (var_r0 != NULL) {
        var_r0 = func_0200b448(var_r0, arg1);
    }
    p  = (s32 *) (var_r0 + 4);
    *p = *p | 4;
    if ((data_027e0004 & 8) != 8) {
        return var_r0;
    }
    *p = *p & ~1;
    *p = *p | 0x02000000;
    return var_r0;
}
