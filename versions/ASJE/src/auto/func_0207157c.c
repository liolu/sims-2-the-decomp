/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u32 func_020f9978(u32);
extern void func_020532d4(void *);
extern void func_020467cc(void *);
extern void func_020f64c8(s32);
extern void func_020f982c(s32);
extern u8 data_021325b4;
extern u8 data_021325cc;
extern s32 data_0213e418;
extern s32 data_0213e41c;
extern u8 func_020717e0;

void **func_0207157c(void **arg0) {
    u32 h;

    *arg0 = (void *) &data_021325cc;
    h     = func_020f9978(2);
    if (h == (u32) &func_020717e0) {
        func_020f64c8(0);
        func_020f982c(2);
        *(u16 *) 0x04000004 &= ~0x10;
    }
    data_0213e41c = 0;
    data_0213e418 = 0;
    *(s32 *) 0x04000000 &= ~0x2000;
    *(s16 *) 0x04000010 = 0;
    *arg0               = (void *) &data_021325b4;
    func_020532d4(arg0);
    func_020467cc(arg0);
    return arg0;
}
