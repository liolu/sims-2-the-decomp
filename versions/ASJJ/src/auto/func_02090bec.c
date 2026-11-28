/* compiler: 1.2/sp2p3 */
/* near start: 9 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

void func_0208ba60(void *, s32, s32, s32);
s16 *func_0208aebc(s32);
extern u8 data_021330c0;
extern u8 data_021330ec;
extern u8 data_02133814;
extern u8 data_02133840;

void *func_02090bec(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    func_0208ba60(arg0, arg1, 0, 0);
    *(void **) arg0                 = (void *) &data_021330c0;
    *(void **) ((u8 *) arg0 + 0x4C) = (void *) &data_021330ec;
    *(s32 *) ((u8 *) arg0 + 0x50)   = arg2;
    *(s32 *) ((u8 *) arg0 + 0x54)   = (s32) func_0208aebc(arg2)[7];
    *(u8 *) ((u8 *) arg0 + 0x58)    = 0;
    *(u8 *) ((u8 *) arg0 + 0x59)    = 1;
    *(void **) arg0                 = (void *) &data_02133814;
    *(void **) ((u8 *) arg0 + 0x4C) = (void *) &data_02133840;
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
    p[0x10 + *(s32 *) ((u8 *) arg0 + 0xC)] = 0x20;
    *(s32 *) ((u8 *) arg0 + 0xC)           = *(s32 *) ((u8 *) arg0 + 0xC) + 1;
    *(s32 *) ((u8 *) arg0 + 8)             = *(s32 *) ((u8 *) arg0 + 8) + 1;
    return arg0;
}
