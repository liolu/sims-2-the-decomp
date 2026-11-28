/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020586a4(s32, s32, s32, s32, s32, s32);
void func_0207c75c(u8 *);
void func_0208b35c(u8 *, s32);
extern s32 data_02139e64;
extern u8 *data_0213e2f4;

static inline void ins(u8 *p, s32 val) {
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
    t[0x10]            = val;
    *(s32 *) (p + 0xC) = *(s32 *) (p + 0xC) + 1;
    *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
}

s32 func_02097070(u8 *arg0, s32 arg1) {
    u8 *g;
    u8 *q;
    s32 x;
    u8 c;

    c = arg0[arg1 + 0x10];
    switch (c) {
        case 0x5F:
            g = data_0213e2f4;
            x = *(s32 *) (g + 0x2000 + 0xF60);
            q = g + 0x2F60;
            if (x >= 0xC8) {
                *(s32 *) q = x - 0xC8;
                x          = *(s32 *) q;
                if (x > 0xF423F) {
                    *(s32 *) q = 0xF423F;
                } else if (x < 0) {
                    *(s32 *) q = 0;
                }
                *(s32 *) (q + 8) = *(s32 *) (q + 8) + 0xC8;
                x                = *(s32 *) (q + 8);
                if (x > 0xF423F || x < 0) {
                    *(s32 *) (q + 8) = 0xF423F;
                }
                func_0207c75c(data_0213e2f4 + 0x21DC);
                func_0208b35c(arg0, 0x5F);
                return 4;
            }
            func_020586a4(data_02139e64, 0x139, -1, 0, 0, 1);
            return 0;
        case 0x40:
            g                             = data_0213e2f4;
            q                             = g + 0x2F60;
            *(s32 *) (g + 0x2000 + 0xF60) = *(s32 *) (g + 0x2000 + 0xF60) + 0x64;
            x                             = *(s32 *) (g + 0x2000 + 0xF60);
            if (x > 0xF423F) {
                *(s32 *) q = 0xF423F;
            } else if (x < 0) {
                *(s32 *) q = 0;
            }
            q[0xC]           = 1;
            *(s32 *) (q + 4) = *(s32 *) (q + 4) + 0x64;
            x                = *(s32 *) (q + 4);
            if (x > 0xF423F || x < 0) {
                *(s32 *) (q + 4) = 0xF423F;
            }
            data_0213e2f4[0x25]   = data_0213e2f4[0x25] - 0xA;
            *(s32 *) (arg0 + 8)   = 0;
            *(s32 *) (arg0 + 0xC) = 0;
            if ((u32) data_0213e2f4[0x25] >= 0xA) {
                ins(arg0, 0x40);
            }
            if ((u32) data_0213e2f4[0x25] >= 1) {
                ins(arg0, 0x3F);
            }
            return 4;
        case 0x3F:
            g                             = data_0213e2f4;
            q                             = g + 0x2F60;
            *(s32 *) (g + 0x2000 + 0xF60) = *(s32 *) (g + 0x2000 + 0xF60) + 0xA;
            x                             = *(s32 *) (g + 0x2000 + 0xF60);
            if (x > 0xF423F) {
                *(s32 *) q = 0xF423F;
            } else if (x < 0) {
                *(s32 *) q = 0;
            }
            q[0xC]           = 1;
            *(s32 *) (q + 4) = *(s32 *) (q + 4) + 0xA;
            x                = *(s32 *) (q + 4);
            if (x > 0xF423F || x < 0) {
                *(s32 *) (q + 4) = 0xF423F;
            }
            data_0213e2f4[0x25]   = data_0213e2f4[0x25] - 1;
            *(s32 *) (arg0 + 8)   = 0;
            *(s32 *) (arg0 + 0xC) = 0;
            if ((u32) data_0213e2f4[0x25] >= 0xA) {
                ins(arg0, 0x40);
            }
            if ((u32) data_0213e2f4[0x25] >= 1) {
                ins(arg0, 0x3F);
            }
            return 4;
        default:
            return 2;
    }
}
