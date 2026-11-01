/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u32 _Z19GetInterruptHandlerj(u32);
extern void func_0205334c(void *);
extern void func_02046844(void *);
extern void func_020f6604(s32);
extern void func_020f9968(s32);
extern u8 data_021326f4;
extern u8 data_0213270c;
extern s32 data_0213e558;
extern s32 data_0213e55c;
extern u8 func_02071858;

void **func_020715f4(void **arg0) {
    u32 h;

    *arg0 = (void *) &data_0213270c;
    h     = _Z19GetInterruptHandlerj(2);
    if (h == (u32) &func_02071858) {
        func_020f6604(0);
        func_020f9968(2);
        *(u16 *) 0x04000004 &= ~0x10;
    }
    data_0213e55c = 0;
    data_0213e558 = 0;
    *(s32 *) 0x04000000 &= ~0x2000;
    *(s16 *) 0x04000010 = 0;
    *arg0               = (void *) &data_021326f4;
    func_0205334c(arg0);
    func_02046844(arg0);
    return arg0;
}
