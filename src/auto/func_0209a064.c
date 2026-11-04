/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02133600;
extern u8 data_02134b3c;
extern u8 data_02134b68;

void func_0208bb98(void *a, void *b, s32 c, s32 d);
s32 func_0208afd0(void *p);

void *func_0209a064(void *arg0, void *arg1, void *arg2) {
    u8 *p = (u8 *) arg0;
    s32 n;
    s32 v;
    u8 *t;

    func_0208bb98(arg0, arg1, 0, 0);
    *(void **) (p + 0x4C) = (void *) &data_02133600;
    *(void **) (p + 0x50) = arg2;
    *(s32 *) (p + 0x54)   = *(s16 *) ((u8 *) func_0208afd0(arg2) + 0xE);
    p[0x58]               = 0;
    p[0x59]               = 1;
    *(void **) p          = (void *) &data_02134b3c;
    *(void **) (p + 0x4C) = (void *) &data_02134b68;
    n                     = *(s32 *) (p + 8);
    if (n > *(s32 *) (p + 0xC)) {
        do {
            t = p + (n - 1);
            v = t[0x10];
            t = p + n;
            n -= 1;
            t[0x10] = v;
        } while (n > *(s32 *) (p + 0xC));
    }
    p[0x10 + *(s32 *) (p + 0xC)] = 0x21;
    *(s32 *) (p + 0xC) += 1;
    *(s32 *) (p + 8) += 1;
    return arg0;
}
