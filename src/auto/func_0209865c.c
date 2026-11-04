/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213355c;
extern u8 data_021347c8;
extern void *data_0213e434;

void func_0209865c(void *arg0, void *arg1) {
    u8 *o = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;
    u8 *g;

    *(u8 **) o          = &data_0213355c;
    *(void **) (o + 4)  = arg1;
    *(s32 *) (o + 8)    = 0;
    *(s32 *) (o + 0xC)  = 0;
    *(s32 *) (o + 0x14) = 0;
    o[0x1C]             = 1;
    *(u8 **) o          = &data_021347c8;
    if (*(u16 *) ((u8 *) arg1 + 0xA) == 0x2C) {
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
        o[*(s32 *) (o + 0xc) + 0x10] = 0x2C;
        *(s32 *) (o + 0xc) += 1;
        *(s32 *) (o + 8) += 1;
    } else {
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
        o[*(s32 *) (o + 0xc) + 0x10] = 0x2B;
        *(s32 *) (o + 0xc) += 1;
        *(s32 *) (o + 8) += 1;
    }
    if (*(u16 *) ((u8 *) arg1 + 0xA) == 0x33) {
        g = *(u8 **) &data_0213e434;
        if (g[0x27] >= 0xA) {
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
            o[*(s32 *) (o + 0xc) + 0x10] = 0x42;
            *(s32 *) (o + 0xc) += 1;
            *(s32 *) (o + 8) += 1;
        }
        g = *(u8 **) &data_0213e434;
        if (g[0x27] < 1) {
            return;
        }
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
        o[*(s32 *) (o + 0xc) + 0x10] = 0x41;
        *(s32 *) (o + 0xc) += 1;
        *(s32 *) (o + 8) += 1;
        return;
    }
    if (*(u16 *) ((u8 *) arg1 + 0xA) == 0x30) {
        g = *(u8 **) &data_0213e434;
        if (g[0x26] >= 0xA) {
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
            o[*(s32 *) (o + 0xc) + 0x10] = 0x44;
            *(s32 *) (o + 0xc) += 1;
            *(s32 *) (o + 8) += 1;
        }
        g = *(u8 **) &data_0213e434;
        if (g[0x26] < 1) {
            return;
        }
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
        o[*(s32 *) (o + 0xc) + 0x10] = 0x43;
        *(s32 *) (o + 0xc) += 1;
        *(s32 *) (o + 8) += 1;
        return;
    }
    if (*(u16 *) ((u8 *) arg1 + 0xA) != 0x2C) {
        return;
    }
    g = *(u8 **) &data_0213e434;
    if (g[0x24] >= 0xA) {
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
        o[*(s32 *) (o + 0xc) + 0x10] = 0x46;
        *(s32 *) (o + 0xc) += 1;
        *(s32 *) (o + 8) += 1;
    }
    g = *(u8 **) &data_0213e434;
    if (g[0x24] < 1) {
        return;
    }
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
    o[*(s32 *) (o + 0xc) + 0x10] = 0x45;
    *(s32 *) (o + 0xc) += 1;
    *(s32 *) (o + 8) += 1;
}
