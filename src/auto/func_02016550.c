/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void *func_0204456c(u16);

s32 func_02016550(void *arg0, u32 arg1, void *arg2) {
    u8 *temp_r0;
    u8 *temp_r2;
    u8 *temp_r3;

    temp_r0 = (u8 *) func_0204456c(*(u16 *) (*(u8 **) ((u8 *) arg0 + 0x20) + 2));
    if (arg1 >= (u32) * (u8 *) (temp_r0 + 0xA)) {
        return 0;
    }
    temp_r3            = temp_r0 + 0xC;
    temp_r2            = temp_r3 + *(u16 *) (temp_r0 + (*(u8 *) ((u8 *) arg0 + 0x1B) * 2) + 0xC);
    temp_r2            = temp_r2 + 0xA;
    *(s8 *) arg2       = *(s8 *) (temp_r2 + (arg1 * 2));
    *((s8 *) arg2 + 1) = *(s8 *) (temp_r2 + (arg1 * 2) + 1);
    return 1;
}
