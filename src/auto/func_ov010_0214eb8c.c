/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov010_0214eb8c(u8 *arg0, s32 *arg1, s32 *arg2) {
    s32 found;
    s32 idx;
    u8 *p;
    s32 i;
    u8 b;
    s32 c;
    s32 m;
    s32 best;
    u8 *e;
    u8 *q;
    s32 bi;
    s32 base;
    s32 x;
    u8 *f;
    s32 j;
    u8 sel;

    sel   = arg0[0x1E6];
    found = 0;
    i     = 0;
    e     = arg0;
    f     = arg0 + sel;
    best  = 4;
    bi    = 6;
    do {
        b = e[0x56];
        if (b == 0) {
            m = 4;
        } else {
            q = e + (b - 1);
            c = q[0x48];
            if (c >= 0x30 && c <= 0x31) {
                m = 0;
            } else {
                m = c % 8 + 1;
            }
        }
        if (f[0x53] >= 2 && m < best) {
            best = m;
            bi   = i;
        }
        i += 1;
        e += 0x2C;
        f += 0x2C;
    } while (i < 6);
    if (bi < 6) {
        base = sel * 0x28;
        p    = arg0 + base;
        j    = 0;
        do {
            *arg1 = p[0x154];
            x     = *arg1;
            if (x < 0x30) {
                idx = x / 8;
                if (x >= 0x30 && x <= 0x31) {
                    m = 0;
                } else {
                    m = x % 8 + 1;
                }
                if (idx == bi) {
                    if (m > best) {
                        best  = m;
                        found = 1;
                        *arg2 = j;
                    }
                }
            } else if (x >= 0x32 && x <= 0x35 && found == 0) {
                found                                    = 1;
                *(u8 *) (*(u8 **) (arg0 + 0x1B4) + 0x9E) = bi;
                *arg2                                    = j;
            }
            j += 1;
            p += 1;
        } while (j < 5);
        if (found != 0) {
            *arg1 = arg0[base + *arg2 + 0x154];
        }
    }
    return found;
}
