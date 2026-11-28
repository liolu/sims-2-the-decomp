/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 v;
} W;
void func_0204a510(void *a, W b, void *c, void *d);
void func_0204ad20(void);

u8 *func_02049e5c(u8 *arg0, u32 *arg1, s32 arg2, s32 arg3) {
    volatile u32 sp[25];
    u32 *o;
    u32 a0;
    u32 a1;
    u32 a2;

    sp[4]  = 0x12000;
    o      = (u32 *) arg0;
    a0     = arg1[0];
    sp[19] = a0;
    sp[22] = a0;
    a1     = arg1[1];
    sp[20] = a1;
    sp[23] = a1;
    a2     = arg1[2];
    sp[21] = a2;
    sp[24] = a2;
    sp[3]  = 0x4000;
    sp[0]  = 0x12000;
    sp[1]  = arg2;
    sp[2]  = arg3;
    func_0204a510(arg0, *(W *) &sp[3], (void *) func_0204ad20, (void *) &sp[22]);
    *(u32 *) (arg0 + 0x1c8) = 0;
    sp[5]                   = 0x12000;
    sp[12]                  = 0x12000;
    o[8]                    = 0x12000;
    sp[6]                   = 0x1400;
    sp[13]                  = 0x1400;
    o[11]                   = 0x1400;
    sp[7]                   = 0x1600;
    sp[14]                  = 0x1600;
    o[12]                   = 0x1600;
    sp[8]                   = 0x10;
    sp[15]                  = 0x10;
    o[13]                   = 0x10;
    sp[9]                   = 0x14000;
    sp[16]                  = 0x14000;
    o[14]                   = 0x14000;
    sp[10]                  = 0x17000;
    sp[17]                  = 0x17000;
    o[15]                   = 0x17000;
    sp[11]                  = 0x4000;
    sp[18]                  = 0x4000;
    o[16]                   = 0x4000;
    return arg0;
}
