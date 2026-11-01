/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02083634(s32 arg0, s32 arg1) {
    s32 temp_r2;
    temp_r2                  = arg0 + 0x43;
    *(u8 *) (temp_r2 + arg1) = *(u8 *) (temp_r2 + arg1) + 1;
    if ((u32) * (u8 *) (temp_r2 + arg1) > 0xAU) {
        *(u8 *) (temp_r2 + arg1) = 0xA;
    }
}
