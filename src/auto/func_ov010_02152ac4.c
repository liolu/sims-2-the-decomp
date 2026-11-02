/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov010_02152ec8;
void func_02046b24(void *, s32, s32, s32, s32);

void *func_ov010_02152ac4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02046b24(arg0, 23, arg1, arg2, arg3);
    *(u8 **) arg0                 = &data_ov010_02152ec8;
    *(s32 *) ((u8 *) arg0 + 0x24) = 0;
    return arg0;
}
