/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov010_02152d88;
void func_02046aac(void *, s32, s32, s32, s32);

void *func_ov010_02152984(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02046aac(arg0, 23, arg1, arg2, arg3);
    *(u8 **) arg0                 = &data_ov010_02152d88;
    *(s32 *) ((u8 *) arg0 + 0x24) = 0;
    return arg0;
}
