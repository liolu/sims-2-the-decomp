/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018ad0(void *);
M2C_UNK func_02018aa0(void *, s32);
u8 *func_0201e15c(u8 *arg0) {
    volatile s32 sp[10];
    s32 zero;
    s32 t;
    func_02018ad0(arg0);
    zero                   = 0;
    *(s32 *) (arg0 + 0x14) = zero;
    *(s32 *) (arg0 + 0x18) = zero;
    *(s32 *) (arg0 + 0x1C) = zero;
    *(s32 *) (arg0 + 0x20) = zero;
    *(s32 *) (arg0 + 0x24) = zero;
    *(s32 *) (arg0 + 0x28) = zero;
    func_02018aa0(arg0, 0x47);
    *(s32 *) (arg0 + 0x10) = zero;
    sp[4]                  = 0x1000;
    sp[5]                  = 0x1000;
    sp[6]                  = 0x1000;
    *(s32 *) (arg0 + 0x14) = 0x1000;
    t                      = sp[5];
    sp[0]                  = t;
    *(s32 *) (arg0 + 0x18) = t;
    t                      = sp[6];
    sp[1]                  = t;
    *(s32 *) (arg0 + 0x1C) = t;
    sp[7]                  = 0;
    sp[8]                  = 0;
    sp[9]                  = 0;
    *(s32 *) (arg0 + 0x20) = 0;
    t                      = sp[8];
    sp[2]                  = t;
    *(s32 *) (arg0 + 0x24) = t;
    t                      = sp[9];
    sp[3]                  = t;
    *(s32 *) (arg0 + 0x28) = t;
    *(s32 *) (arg0 + 0x2C) = 0x20;
    *(u8 *) (arg0 + 0x30)  = 0;
    *(u8 *) (arg0 + 0x31)  = 1;
    *(u8 *) (arg0 + 0x32)  = 0;
    return arg0;
}
