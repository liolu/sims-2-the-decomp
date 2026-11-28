/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02133048;
extern u8 data_02134264;
extern u8 data_0213df5c;
extern s32 func_02081e40(void *, s32, s32);

void *func_020973a0(void *arg0, s32 arg1) {
    u8 *o;
    s32 i;
    s32 v;
    u8 *t;
    u8 *g;

    o                   = (u8 *) arg0;
    *(u8 **) o          = &data_02133048;
    *(s32 *) (o + 4)    = arg1;
    *(s32 *) (o + 8)    = 0;
    *(s32 *) (o + 0xc)  = 0;
    *(s32 *) (o + 0x14) = 0;
    o[0x1c]             = 1;
    *(u8 **) o          = &data_02134264;
    g                   = *(u8 **) &data_0213df5c;
    if (g[0x25] >= 0xa) {
        i = *(s32 *) (o + 8);
        if (i > *(s32 *) (o + 0xc)) {
            do {
                t = o + (i - 1);
                v = t[0x10];
                t = o + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (o + 0xc));
        }
        o[*(s32 *) (o + 0xc) + 0x10] = 0x40;
        *(s32 *) (o + 0xc) += 1;
        *(s32 *) (o + 8) += 1;
    }
    g = *(u8 **) &data_0213df5c;
    if (g[0x25] >= 1) {
        i = *(s32 *) (o + 8);
        if (i > *(s32 *) (o + 0xc)) {
            do {
                t = o + (i - 1);
                v = t[0x10];
                t = o + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (o + 0xc));
        }
        o[*(s32 *) (o + 0xc) + 0x10] = 0x3f;
        *(s32 *) (o + 0xc) += 1;
        *(s32 *) (o + 8) += 1;
    }
    if (func_02081e40(*(u8 **) &data_0213df5c + 0x21e4, 0x89c, -1) != 0) {
        i = *(s32 *) (o + 8);
        if (i > *(s32 *) (o + 0xc)) {
            do {
                t = o + (i - 1);
                v = t[0x10];
                t = o + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (o + 0xc));
        }
        o[*(s32 *) (o + 0xc) + 0x10] = 0x5f;
        *(s32 *) (o + 0xc) += 1;
        *(s32 *) (o + 8) += 1;
    }
    return o;
}
