/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov010_02152ccc;
extern u8 data_ov010_02152da0;
void func_02046aac(void *, s32, s32, s32, s32);

void *func_ov010_021524b8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02046aac(arg0, 30, arg1, arg2, arg3);
    *(u8 **) arg0 = &data_ov010_02152ccc;
    if (arg1 == 1) {
        data_ov010_02152da0    = (u8) arg2;
        *((u8 *) arg0 + 0x20F) = (u8) arg3;
    } else {
        data_ov010_02152da0 = 0;
    }
    return arg0;
}
