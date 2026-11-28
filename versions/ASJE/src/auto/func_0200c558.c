/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0212fa2c;
extern u8 data_0212fa48;

void func_0200c558(u8 *arg0, u8 *arg1, s32 *arg2) {
    volatile s32 fr[4];
    s32 t0;
    s32 t1;
    s32 t2;

    *(u8 **) arg0          = &data_0212fa48;
    t0                     = *(s32 *) arg1;
    fr[0]                  = t0;
    *(s32 *) (arg0 + 4)    = t0;
    t1                     = *(s32 *) (arg1 + 4);
    fr[1]                  = t1;
    *(s32 *) (arg0 + 8)    = t1;
    t2                     = *(s32 *) (arg1 + 8);
    fr[2]                  = t2;
    *(s32 *) (arg0 + 0xC)  = t2;
    *(s16 *) (arg0 + 0x10) = -1;
    *(s8 *) (arg0 + 0x12)  = 1;
    *(s8 *) (arg0 + 0x13)  = -1;
    *(s8 *) (arg0 + 0x14)  = 0;
    *(s8 *) (arg0 + 0x15)  = 0;
    *(s8 *) (arg0 + 0x16)  = 0;
    *(u8 **) arg0          = &data_0212fa2c;
    *(s32 *) (arg0 + 0x18) = *arg2;
    *(s8 *) (arg0 + 0x13)  = 0;
}
