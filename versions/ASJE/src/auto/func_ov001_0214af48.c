/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov001_0214b090;
void func_02046aac(void *, s32, s32, s32, s32);
void func_0204630c(void *, s32, s32);

void *func_ov001_0214af48(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p;
    p = (u8 *) arg0;
    func_02046aac(arg0, 32, arg1, arg2, arg3);
    *(u8 **) p         = &data_ov001_0214b090;
    *(s32 *) (p + 56)  = 0;
    *(s32 *) (p + 60)  = 0;
    *(s32 *) (p + 64)  = 0;
    *(s32 *) (p + 68)  = 0;
    *(s32 *) (p + 208) = arg1;
    *(s32 *) (p + 212) = arg2;
    func_0204630c(p + 36, 0, 20);
    return arg0;
}
