/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e2f4;
extern s32 data_0213e5b4;

static inline void ins(u8 *p, s32 c) {
    s32 i;
    s32 v;
    u8 *t;

    i = *(s32 *) (p + 8);
    if (i > *(s32 *) (p + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (p + 0xC));
    }
    t                  = p + *(s32 *) (p + 0xC);
    t[0x10]            = c;
    *(s32 *) (p + 0xC) = *(s32 *) (p + 0xC) + 1;
    *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
}

void func_02092bb4(u8 *arg0) {
    s32 a;
    s32 b;
    u8 *g;

    g = data_0213e2f4;
    a = *(s32 *) (g + 0x44C0);
    b = g[0x24];
    if (a >= 6) {
        ins(arg0, 0x3B);
    } else if (b == 0) {
        ins(arg0, 0x3C);
    } else {
        ins(arg0, 0x37);
        if (6 - a <= b) {
            ins(arg0, 0x38);
        }
    }
    if (a <= 1) {
        return;
    }
    if ((*(s32 *) g & 8) == 0) {
        return;
    }
    if (*(s32 *) (g + 0x41DC) < data_0213e5b4) {
        ins(arg0, 0x39);
        return;
    }
    ins(arg0, 0x3A);
}
