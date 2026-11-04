/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02133600[];
extern u8 data_021346dc[];
extern u8 data_02134708[];

void func_0208bb98(void *a, void *b, s32 c, s32 d);
u8 *func_0208afd0(void *a);

void *func_02096f64(void *arg0, void *arg1, void *arg2) {
    u8 *o = (u8 *) arg0;
    s32 k;
    s32 v;
    u8 *t;
    u8 *p;

    func_0208bb98(arg0, arg1, 0, 1);
    *(u8 **) (o + 0x4c)   = data_02133600;
    *(void **) (o + 0x50) = arg2;
    p                     = func_0208afd0(arg2);
    *(s32 *) (o + 0x54)   = *(s16 *) (p + 0xe);
    o[0x58]               = 0;
    o[0x59]               = 1;
    *(u8 **) o            = data_021346dc;
    *(u8 **) (o + 0x4c)   = data_02134708;
    k                     = *(s32 *) (o + 0x8);
    if (k > *(s32 *) (o + 0xc)) {
        do {
            t = o + (k - 1);
            v = t[0x10];
            t = o + k;
            k -= 1;
            t[0x10] = v;
        } while (k > *(s32 *) (o + 0xc));
    }
    o[0x10 + *(s32 *) (o + 0xc)] = 0x2f;
    *(s32 *) (o + 0xc)           = *(s32 *) (o + 0xc) + 1;
    *(s32 *) (o + 0x8)           = *(s32 *) (o + 0x8) + 1;
    return arg0;
}
