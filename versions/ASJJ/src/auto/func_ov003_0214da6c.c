/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_021504ec;
extern u8 data_ov003_021506bc;
extern u8 data_ov003_0214f704;

void func_02046ae0(u8 *arg0, s32 arg1);
s32 func_0200e944(s32 arg0);
void func_02046958(u8 *arg0, u8 *arg1, s32 arg2);

u8 *func_ov003_0214da6c(u8 *arg0, u8 *arg1) {
    u8 *r1;
    u8 *r2;

    *(u8 **) arg0       = &data_ov003_021504ec;
    *(u8 **) (arg0 + 4) = arg1;
    func_02046ae0(arg0 + 8, 32);
    *(u8 **) arg0 = &data_ov003_021506bc;
    arg0[17]      = 0;
    arg0[18]      = 0;
    arg0[19]      = 30;
    arg0[20]      = 0;
    r1            = *(u8 **) (arg0 + 4);
    arg0[16]      = (u8) func_0200e944(*(s32 *) (r1 + *(u16 *) (r1 + 118) * 4 + 72));
    func_02046958(arg0 + 8, &data_ov003_0214f704, 5);
    r2 = *(u8 **) (*(u8 **) (arg0 + 8) + 8);
    *(u32 *) (r2 + 4) &= ~1;
    r2 = *(u8 **) (*(u8 **) (arg0 + 8) + 12);
    *(u32 *) (r2 + 4) &= ~1;
    return arg0;
}
