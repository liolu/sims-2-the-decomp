/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

typedef struct {
    u8 pad[0x38];
    volatile u8 cur;
    u8 tgt;
    u8 step;
    u8 id;
} S1;
typedef struct {
    u8 f : 2;
    u8 rest : 6;
} B1;
extern S1 *data_021424d4;
extern u8 data_02142848[];
extern s32 data_02142548[];

void func_020d0774(void) {
    s32 a, b, c;
    s32 i;
    S1 *P;
    P = data_021424d4;
    a = P->step;
    if (a != 0) {
        b = P->tgt;
        c = P->cur;
        if ((u32) c > (u32) b) {
            if (c - a <= b) {
                P->cur              = b;
                data_021424d4->step = 0;
            } else {
                P->cur = P->cur - a;
            }
        } else if ((u32) c < (u32) b) {
            if (c + a >= b) {
                P->cur              = b;
                data_021424d4->step = 0;
            } else {
                P->cur = P->cur + a;
            }
        } else {
            P->step = 0;
        }
        for (i = data_02142848[0x10] - 1; i >= 0; i--) {
            if (data_021424d4->id == data_02142848[i + 0x634] && *(s32 *) ((u8 *) data_02142548 + i * 0x18) != 0) {
                B1 *p = (B1 *) ((u8 *) data_021424d4 + 0x94d + i * 0x20);
                p->f  = (u8) (p->f | 2);
            }
        }
    }
}
