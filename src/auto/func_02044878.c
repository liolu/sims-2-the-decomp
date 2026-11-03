/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021317f4;
extern u8 data_021317e8;

void func_02044878(u8 *arg0) {
    volatile s32 sp[6];
    s32 t;

    *(u8 **) arg0          = (u8 *) &data_021317f4;
    *(s32 *) (arg0 + 4)    = 0;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    arg0[0x10]             = 1;
    arg0[0x11]             = 0;
    arg0[0x12]             = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    sp[2]                  = 0;
    sp[1]                  = 0;
    sp[0]                  = 0;
    sp[3]                  = 0;
    *(s32 *) (arg0 + 4)    = 0;
    t                      = sp[1];
    sp[4]                  = t;
    *(s32 *) (arg0 + 8)    = t;
    t                      = sp[2];
    sp[5]                  = t;
    *(s32 *) (arg0 + 0xC)  = t;
    *(u8 **) arg0          = (u8 *) &data_021317e8;
    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = 0;
    *(s32 *) (arg0 + 0x20) = 0;
}
