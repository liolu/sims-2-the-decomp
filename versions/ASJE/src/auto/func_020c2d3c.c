/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_020f5d7c(s32, s32);

void func_020c2d3c(void *arg0, void *arg1, void *arg2) {
    volatile s32 fr[12];
    s32 t;
    s32 k;
    u8 *a = (u8 *) arg0;

    *(s32 *) (a + 0) = 0;
    *(s32 *) (a + 4) = 0;
    *(s32 *) (a + 8) = 0;
    fr[9]            = *(s32 *) (*(u8 **) ((u8 *) arg1 + 0x140) + 4);
    k                = 0x2000;
    fr[1]            = k;
    fr[8]            = k;
    t                = func_020f5d7c(*(s32 *) arg2, k);
    t += fr[9];
    fr[0]            = t;
    fr[5]            = t;
    *(s32 *) (a + 0) = t;
    fr[2]            = 0;
    fr[6]            = 0;
    *(s32 *) (a + 4) = 0;
    fr[11]           = *(s32 *) (*(u8 **) ((u8 *) arg1 + 0x140) + 8);
    k                = 0x2000;
    fr[4]            = k;
    fr[10]           = k;
    t                = func_020f5d7c(*(s32 *) ((u8 *) arg2 + 4), k);
    t += fr[11];
    fr[3]            = t;
    fr[7]            = t;
    *(s32 *) (a + 8) = t;
}
