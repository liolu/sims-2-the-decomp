/* compiler: 1.2/sp2p3 */
/* near start: 9 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

void func_0208bb24(void *, s32, s32, s32);
s16 *func_0208af58(s32);
extern u8 data_02133494;
extern u8 data_021334c0;
extern u8 data_02133be8;
extern u8 data_02133c14;

void *func_02090c54(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    func_0208bb24(arg0, arg1, 0, 0);
    *(void **) arg0                 = (void *) &data_02133494;
    *(void **) ((u8 *) arg0 + 0x4C) = (void *) &data_021334c0;
    *(s32 *) ((u8 *) arg0 + 0x50)   = arg2;
    *(s32 *) ((u8 *) arg0 + 0x54)   = (s32) func_0208af58(arg2)[7];
    *(u8 *) ((u8 *) arg0 + 0x58)    = 0;
    *(u8 *) ((u8 *) arg0 + 0x59)    = 1;
    *(void **) arg0                 = (void *) &data_02133be8;
    *(void **) ((u8 *) arg0 + 0x4C) = (void *) &data_02133c14;
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
