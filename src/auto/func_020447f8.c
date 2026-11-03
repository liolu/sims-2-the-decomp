/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021317f4;
extern u8 data_02131800;

void func_020447f8(void *arg0) {
    volatile s32 sp[6];
    u8 *p = (u8 *) arg0;
    s32 t;

    *(u8 **) p        = &data_021317f4;
    *(s32 *) (p + 4)  = 0;
    *(s32 *) (p + 8)  = 0;
    *(s32 *) (p + 12) = 0;
    p[16]             = 1;
    p[17]             = 0;
    p[18]             = 0;
    *(s32 *) (p + 20) = 0;
    sp[2]             = 0;
    sp[1]             = 0;
    sp[0]             = 0;
    sp[3]             = 0;
    *(s32 *) (p + 4)  = 0;
    t                 = sp[1];
    sp[4]             = t;
    *(s32 *) (p + 8)  = t;
    t                 = sp[2];
    sp[5]             = t;
    *(s32 *) (p + 12) = t;
    *(u8 **) p        = &data_02131800;
    *(s32 *) (p + 24) = 0;
    *(s32 *) (p + 28) = 0;
    *(s32 *) (p + 32) = 0;
}
