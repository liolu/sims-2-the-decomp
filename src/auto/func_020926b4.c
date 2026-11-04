/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213355c;
extern u8 data_02133f6c;

void func_020926b4(u8 *arg0, s32 arg1) {
    s32 i;
    s32 v;
    u8 *t;
    *(void **) arg0        = &data_0213355c;
    *(s32 *) (arg0 + 4)    = arg1;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 12)   = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    *(u8 *) (arg0 + 0x1c)  = 1;
    *(void **) arg0        = &data_02133f6c;
    i                      = *(s32 *) (arg0 + 8);
    if (i > *(s32 *) (arg0 + 12)) {
        do {
            t = arg0 + (i - 1);
            v = t[0x10];
            t = arg0 + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (arg0 + 12));
    }
    arg0[*(s32 *) (arg0 + 12) + 0x10] = 0x1b;
    *(s32 *) (arg0 + 12) += 1;
    *(s32 *) (arg0 + 8) += 1;
}
