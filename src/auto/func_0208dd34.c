/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02083d1c(u8 *, u32);
extern u8 data_0213355c;
extern u8 data_021337c0;
extern u8 data_0213e434;

void *func_0208dd34(void *arg0, void *arg1) {
    u8 *o = (u8 *) arg0;
    s32 r;
    s32 i;
    s32 e;
    s32 v;
    u8 *t;

    *(void **) o        = &data_0213355c;
    *(void **) (o + 4)  = arg1;
    *(s32 *) (o + 8)    = 0;
    *(s32 *) (o + 0xC)  = 0;
    *(s32 *) (o + 0x14) = 0;
    *(u8 *) (o + 0x1C)  = 1;
    *(void **) o        = &data_021337c0;
    r                   = func_02083d1c(*(u8 **) &data_0213e434 + 0x18, 0x131);
    if (r != 6) {
        i = *(s32 *) (o + 8);
        e = *(s32 *) (o + 0xC);
        if (i > e) {
            do {
                t = o + (i - 1);
                v = t[0x10];
                t = o + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (o + 0xC));
        }
        o[0x10 + *(s32 *) (o + 0xC)] = 0x28;
        *(s32 *) (o + 0xC) += 1;
        *(s32 *) (o + 8) += 1;
    }
    i = *(s32 *) (o + 8);
    e = *(s32 *) (o + 0xC);
    if (i > e) {
        do {
            t = o + (i - 1);
            v = t[0x10];
            t = o + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (o + 0xC));
    }
    o[0x10 + *(s32 *) (o + 0xC)] = 0x5D;
    *(s32 *) (o + 0xC) += 1;
    *(s32 *) (o + 8) += 1;
    return arg0;
}
