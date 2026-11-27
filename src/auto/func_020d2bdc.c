/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

typedef struct {
    u8 p0[8];
    u8 *list;
    u8 p1[0x1c];
    u8 f28;
    u8 f29;
    u8 p2;
    u8 cur;
    u8 p3[4];
    u8 lim;
    u8 p4[3];
    u8 f34;
    u8 f35;
    u8 p5[5];
    u8 id;
} G;

typedef void (*FP3)(s32, s32, s32);

extern G *data_021424d4;
extern FP3 data_021424d8;
extern u8 data_02142848[];

void func_020d0e9c(s32, s32);
void func_020d423c(s32, s32, s32);
void func_020d4710(s32);

s32 func_020d2bdc(void) {
    G *g;
    G *save;
    s32 i;
    u8 *q;
    u8 idx;
    u8 lim;

    data_021424d4->cur = data_021424d4->f35;
    while ((g = data_021424d4, lim = g->lim, idx = g->cur, idx < lim) && g->list[idx] == 0xFE) {
        g->cur = g->cur + 1;
        if (data_021424d8 != 0) {
            save = data_021424d4;
            data_021424d8(5, 0, 1);
            data_021424d4 = save;
        }
    }
    if (idx >= lim || g->list[idx] == 0xFF) {
        if ((g->f29 & 1) != 0) {
            g->cur = 0;
            if (data_021424d8 != 0) {
                save = data_021424d4;
                data_021424d8(1, 0, 1);
                data_021424d4 = save;
            }
        } else {
            i = data_02142848[0x10] - 1;
            if (i >= 0) {
                q = data_02142848 + i;
                do {
                    if (data_021424d4->id == q[0x634]) {
                        func_020d0e9c((u8) i, 0);
                    }
                    q--;
                    i--;
                } while (i >= 0);
            }
            data_021424d4->f28 = 0;
            save               = data_021424d4;
            idx                = save->id;
            if (data_021424d8 != 0) {
                data_021424d8(0, idx, 1);
                data_021424d4 = save;
            }
            if (data_021424d4->id == 1) {
                func_020d4710(0);
                data_021424d4 = 0;
            }
            return 1;
        }
    }
    g = data_021424d4;
    func_020d423c(g->id, g->cur, g->f34);
    g                  = data_021424d4;
    g->f35             = g->cur + 1;
    data_021424d4->f34 = 0;
    return 0;
}
