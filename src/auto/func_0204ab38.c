/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_0213d700;
extern s32 data_0213d704;
extern u8 *data_0213d6f0;

void func_0204ab38(volatile u32 *a, u32 *b, u32 *c, volatile s32 d, s32 e, s32 f, s32 g, u8 h) {
    volatile s32 sp[15];
    s32 idx;
    u8 *obj;
    u32 t;

    if (data_0213d700 == data_0213d704) {
        return;
    }
    idx                   = data_0213d700;
    obj                   = ((u8 **) data_0213d6f0)[idx];
    t                     = a[0];
    sp[6]                 = t;
    *(s32 *) (obj + 0x0)  = t;
    t                     = a[1];
    sp[7]                 = t;
    *(s32 *) (obj + 0x4)  = t;
    t                     = a[2];
    sp[8]                 = t;
    *(s32 *) (obj + 0x8)  = t;
    t                     = b[0];
    sp[9]                 = t;
    *(s32 *) (obj + 0xC)  = t;
    t                     = b[1];
    sp[10]                = t;
    *(s32 *) (obj + 0x10) = t;
    t                     = b[2];
    sp[11]                = t;
    *(s32 *) (obj + 0x14) = t;
    *(s32 *) (obj + 0x30) = d;
    *(s32 *) (obj + 0x3C) = e;
    *(s32 *) (obj + 0x40) = g;
    t                     = c[0];
    sp[12]                = t;
    *(s32 *) (obj + 0x18) = t;
    t                     = c[1];
    sp[13]                = t;
    *(s32 *) (obj + 0x1C) = t;
    t                     = c[2];
    sp[14]                = t;
    *(s32 *) (obj + 0x20) = t;
    sp[0]                 = 0x5A000;
    sp[3]                 = 0x5A000;
    *(s32 *) (obj + 0x24) = 0x5A000;
    sp[1]                 = 0;
    sp[4]                 = 0;
    *(s32 *) (obj + 0x34) = 0;
    sp[2]                 = 0;
    sp[5]                 = 0;
    *(s32 *) (obj + 0x38) = 0;
    *(u8 *) (obj + 0x44)  = h;
    data_0213d700         = data_0213d700 + 1;
}
