/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213355c[];
extern u8 data_02134464[];

void *func_0209527c(void *arg0, void *arg1) {
    u8 *o = (u8 *) arg0;
    s32 k;
    s32 v;
    u8 *t;

    *(u8 **) o           = data_0213355c;
    *(void **) (o + 0x4) = arg1;
    *(s32 *) (o + 0x8)   = 0;
    *(s32 *) (o + 0xc)   = 0;
    *(s32 *) (o + 0x14)  = 0;
    o[0x1c]              = 1;
    *(u8 **) o           = data_02134464;
    k                    = *(s32 *) (o + 0x8);
    if (k > *(s32 *) (o + 0xc)) {
        do {
            t = o + (k - 1);
            v = t[0x10];
            t = o + k;
            k -= 1;
            t[0x10] = v;
        } while (k > *(s32 *) (o + 0xc));
    }
    o[0x10 + *(s32 *) (o + 0xc)] = 0x29;
    *(s32 *) (o + 0xc)           = *(s32 *) (o + 0xc) + 1;
    *(s32 *) (o + 0x8)           = *(s32 *) (o + 0x8) + 1;
    k                            = *(s32 *) (o + 0x8);
    if (k > *(s32 *) (o + 0xc)) {
        do {
            t = o + (k - 1);
            v = t[0x10];
            t = o + k;
            k -= 1;
            t[0x10] = v;
        } while (k > *(s32 *) (o + 0xc));
    }
    o[0x10 + *(s32 *) (o + 0xc)] = 0x2a;
    *(s32 *) (o + 0xc)           = *(s32 *) (o + 0xc) + 1;
    *(s32 *) (o + 0x8)           = *(s32 *) (o + 0x8) + 1;
    return arg0;
}
