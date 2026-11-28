/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02133048;
extern u8 data_0212f8f8;
extern u8 data_0213325c;

void func_0208d658(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;
    *(void **) arg0        = (void *) &data_02133048;
    *(s32 *) (arg0 + 4)    = arg1;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    arg0[0x1C]             = 1;
    *(void **) arg0        = (void *) &data_0212f8f8;
    i                      = *(s32 *) (arg0 + 8);
    if (i > *(s32 *) (arg0 + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (arg0 + 0xC));
    }
    *(u8 *) ((u8 *) arg0 + *(s32 *) ((u8 *) arg0 + 0xC) + 0x10) = 1;
    *(s32 *) (arg0 + 0xC) += 1;
    *(s32 *) (arg0 + 8) += 1;
    *(void **) arg0        = (void *) &data_0213325c;
    *(s32 *) (arg0 + 0x20) = arg2;
}
