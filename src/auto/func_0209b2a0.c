/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_027e1154;

void func_0209b2a0(void *arg0) {
    volatile s32 sp0;
    volatile s32 sp4;
    u8 *p;
    p                 = (u8 *) arg0;
    *(s32 *) p        = 0;
    *(s32 *) (p + 4)  = 0;
    *(s32 *) (p + 8)  = 0;
    *(s32 *) (p + 12) = *(s32 *) &data_027e1154;
    sp0               = *(s32 *) ((u8 *) &data_027e1154 + 4);
    *(s32 *) (p + 16) = *(s32 *) ((u8 *) &data_027e1154 + 4);
    sp4               = *(s32 *) ((u8 *) &data_027e1154 + 8);
    *(s32 *) (p + 20) = *(s32 *) ((u8 *) &data_027e1154 + 8);
    p[24]             = 21;
    p[25]             = 255;
    p[26]             = 255;
    p[27]             = 255;
}
