/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u32 func_020f95a0(u32);
extern void func_0205355c(void *);
extern void func_02046858(void *);
extern void func_020f60f0(s32);
extern void func_020f9454(s32);
extern u8 data_021321e4;
extern u8 data_021321fc;
extern s32 data_0213e080;
extern s32 data_0213e084;
extern u8 func_02071848;

void **func_020715e4(void **arg0) {
    u32 h;

    *arg0 = (void *) &data_021321fc;
    h     = func_020f95a0(2);
    if (h == (u32) &func_02071848) {
        func_020f60f0(0);
        func_020f9454(2);
        *(u16 *) 0x04000004 &= ~0x10;
    }
    data_0213e084 = 0;
    data_0213e080 = 0;
    *(s32 *) 0x04000000 &= ~0x2000;
    *(s16 *) 0x04000010 = 0;
    *arg0               = (void *) &data_021321e4;
    func_0205355c(arg0);
    func_02046858(arg0);
    return arg0;
}
