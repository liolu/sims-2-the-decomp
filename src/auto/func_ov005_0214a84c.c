/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov005_0214aba8;
void func_02046b24(void *, s32, s32, s32, s32);

void *func_ov005_0214a84c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02046b24(arg0, 34, arg1, arg2, arg3);
    *(u8 **) arg0                 = &data_ov005_0214aba8;
    *(s32 *) ((u8 *) arg0 + 0x24) = 0;
    *(s32 *) ((u8 *) arg0 + 0x28) = 0;
    *(s32 *) ((u8 *) arg0 + 0x6C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x70) = 255;
    return arg0;
}
