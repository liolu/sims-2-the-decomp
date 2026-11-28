/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02131df4;
extern u8 data_0213e2f4;
extern "C" s32 func_020734e4(void *, s32);
extern "C" void func_0205f258(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p;
    u8 *q;
    u8 *base;
    u8 flag;
    flag = *(u8 *) (&data_02131df4 + arg1);
    if (flag == 0) {
        return;
    }
    base = *(u8 **) &data_0213e2f4;
    if (func_020734e4(base + 0x41f8, arg1) == 0) {
        return;
    }
    p  = arg0 + 8;
    q  = p + arg1;
    *q = (u8) (*q + (u8) arg2);
    if (*q > 9) {
        *q = 9;
    }
}
