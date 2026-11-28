/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020732bc(void *);
extern u8 *data_0213e2f4;

s32 func_02091114(u8 *p, s32 arg1) {
    u8 *g;
    u8 *t;
    s32 c;
    s32 v;
    s32 k;
    s32 i;
    s32 x;

    c = (p + arg1)[0x10];
    g = data_0213e2f4;
    switch (c) {
        case 0x57:
            *(s32 *) (g + 0x4000 + 0x4c8) = *(s32 *) (g + 0x4000 + 0x4c8) + 1;
            g[0x26]                       = g[0x26] - 1;
            func_020732bc(g + 0x41f8);
            break;
        case 0x58:
            *(s32 *) (g + 0x4000 + 0x4c8) = *(s32 *) (g + 0x4000 + 0x4c8) + 5;
            g[0x26]                       = g[0x26] - 5;
            func_020732bc(g + 0x41f8);
            break;
    }
    *(s32 *) (p + 8)   = 0;
    *(s32 *) (p + 0xc) = 0;
    g                  = data_0213e2f4;
    k                  = *(s32 *) (g + 0x4000 + 0x4c8);
    c                  = g[0x26];
    if (k < 10 && c != 0) {
        i = *(s32 *) (p + 8);
        x = *(s32 *) (p + 0xc);
        if (i > x) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
                x       = *(s32 *) (p + 0xc);
            } while (i > x);
        }
        t                  = p + x;
        t[0x10]            = 0x57;
        *(s32 *) (p + 0xc) = *(s32 *) (p + 0xc) + 1;
        *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
        if (k + 5 < 10 && c >= 5) {
            i = *(s32 *) (p + 8);
            x = *(s32 *) (p + 0xc);
            if (i > x) {
                do {
                    t = p + (i - 1);
                    v = t[0x10];
                    t = p + i;
                    i -= 1;
                    t[0x10] = v;
                    x       = *(s32 *) (p + 0xc);
                } while (i > x);
            }
            t                  = p + x;
            t[0x10]            = 0x58;
            *(s32 *) (p + 0xc) = *(s32 *) (p + 0xc) + 1;
            *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
        }
    }
    return 4;
}
