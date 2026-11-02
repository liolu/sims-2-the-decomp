/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void *func_0204561c(s32);
extern s32 data_027e0000;
extern u8 data_027e0014;

void *func_02087268(s32 unused, s32 arg1, s32 arg2) {
    u8 *var_r0;
    u8 *t;

    var_r0 = (u8 *) func_0204561c((data_027e0000 * 0x34) + (s32) &data_027e0014);
    while (var_r0 != NULL) {
        t = *(u8 **) var_r0;
        if (arg1 == *(u16 *) (t + 0xC) && arg2 == *(u16 *) (t + 0xA)) {
            return t;
        }
        var_r0 = *(u8 **) (var_r0 + 4);
    }
    return NULL;
}
