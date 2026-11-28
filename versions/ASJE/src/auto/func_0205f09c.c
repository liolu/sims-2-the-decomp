/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 p0[4];
    s32 f4;
    u8 c[0x24];
    s32 t[0x21];
    s32 last;
} Q;

extern u32 data_0213e2f4;
extern u8 data_02131df4[];

s32 func_020734e4(u32, s32);

void func_0205f09c(Q *self, s32 *arg1) {
    s32 diff;
    s32 m;
    u8 i;
    s32 r8;
    u8 k;
    s32 zero;
    s32 cap;
    s32 d2;
    s32 nine;
    u8 *pd;
    u8 *ps;

    diff = (s32) ((s64) self->last - *arg1);
    m    = -1;
    if (diff < 0) {
        diff = diff * m;
    }
    if (diff < 0x12C) {
        return;
    }
    zero = 0;
    cap  = 10;
    nine = 9;
    for (i = 0; i < 0x21; i++) {
        if (data_02131df4[i] == 0) {
            continue;
        }
        if (i == self->f4) {
            continue;
        }
        d2 = *arg1 - self->t[i];
        if (d2 < 0) {
            d2 = d2 * m;
        }
        r8 = d2 / 86400;
        if (r8 > 10) {
            r8 = cap;
        }
        k = zero;
        if (r8 > 0) {
            ps = (u8 *) self + i;
            pd = (u8 *) ((u32) data_02131df4 + i);
            do {
                if (*(volatile u8 *) pd != 0) {
                    if (func_020734e4(data_0213e2f4 + 0x41F8, i) != 0) {
                        ps[8] += 1;
                        if (ps[8] > 9) {
                            ps[8] = nine;
                        }
                    }
                }
                k++;
            } while (k < r8);
        }
        self->t[i] = *arg1;
        self->last = *arg1;
    }
}
