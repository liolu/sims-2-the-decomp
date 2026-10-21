/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02083b84(s32 arg0, s32 arg1) {
    s32 temp_r2;
    u8 temp_r0;

    temp_r2 = arg0 + 0x2128;
    temp_r0 = *(s8 *) (temp_r2 + arg1);
    if ((u32) temp_r0 < 2U) {
        *(s8 *) (temp_r2 + arg1) = temp_r0 + 1;
    }
}