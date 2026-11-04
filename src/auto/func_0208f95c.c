/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s16 *func_0208afd0(s32);
extern u8 data_0213355c;
extern u8 data_02133600;
extern u8 data_02133b4c;
extern u8 data_02133b74;

void *func_0208f95c(void *arg0, s32 arg1, s32 arg2) {
    s32 v;
    u8 *t;
    u8 *p = (u8 *) arg0;
    s32 i;

    *(void **) arg0                 = (void *) &data_0213355c;
    *(s32 *) ((u8 *) arg0 + 4)      = arg1;
    *(s32 *) ((u8 *) arg0 + 8)      = 0;
    *(s32 *) ((u8 *) arg0 + 0xC)    = 0;
    *(s32 *) ((u8 *) arg0 + 0x14)   = 0;
    *(u8 *) ((u8 *) arg0 + 0x1C)    = 1;
    *(void **) ((u8 *) arg0 + 0x20) = (void *) &data_02133600;
    *(s32 *) ((u8 *) arg0 + 0x24)   = arg2;
    *(s32 *) ((u8 *) arg0 + 0x28)   = (s32) func_0208afd0(arg2)[7];
    *(u8 *) ((u8 *) arg0 + 0x2C)    = 0;
    *(u8 *) ((u8 *) arg0 + 0x2D)    = 1;
    *(void **) arg0                 = (void *) &data_02133b4c;
    *(void **) ((u8 *) arg0 + 0x20) = (void *) &data_02133b74;
    i                               = *(s32 *) ((u8 *) arg0 + 8);
    if (i > *(s32 *) ((u8 *) arg0 + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) ((u8 *) arg0 + 0xC));
    }
    t                            = p + *(s32 *) ((u8 *) arg0 + 0xC);
    t[0x10]                      = 1;
    *(s32 *) ((u8 *) arg0 + 0xC) = *(s32 *) ((u8 *) arg0 + 0xC) + 1;
    *(s32 *) ((u8 *) arg0 + 8)   = *(s32 *) ((u8 *) arg0 + 8) + 1;
    return arg0;
}
