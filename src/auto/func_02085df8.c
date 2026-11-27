/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02121efc;
extern u8 data_0212210c;
extern u8 data_0212211c;
extern u8 data_0213e434;

typedef struct {
    s32 a, b, c;
} T3;
typedef struct {
    s32 v;
} W;

s32 func_020f5eb8(s32, s32, s32);
void func_02085954(void *, s32, void *, W);

void func_02085df8(u8 *arg0, s32 arg1) {
    volatile s32 w[6];
    T3 loc;
    u8 **tbl;
    u8 *p;
    s32 i;
    s32 ib;
    u8 *pb;
    s32 ic;
    u8 *pc;
    s32 j;
    u8 *p2;
    s32 res;

    tbl = (u8 **) arg0;
    if (arg1 < 0x21) {
        p = &data_02121efc + arg1 * 0x10;
        for (i = 0; i < 2; i++) {
            tbl[i] = p;
            p += 8;
        }
    } else if (arg1 == 0x21) {
        pb = &data_0212210c;
        for (ib = 0; ib < 2; ib++) {
            tbl[ib] = pb;
            pb += 8;
        }
    } else {
        pc = &data_0212211c;
        for (ic = 0; ic < 2; ic++) {
            tbl[ic] = pc;
            pc += 8;
        }
    }
    loc                    = *(T3 *) (*(u8 **) &data_0213e434 + 0x4800);
    w[3]                   = 0x15180000;
    w[4]                   = 0x15180000;
    res                    = func_020f5eb8((loc.c + (loc.b * 0x3C + loc.a * 0xE10)) << 12, 0x15180000, loc.c);
    w[2]                   = res;
    w[5]                   = res;
    w[0]                   = res;
    w[1]                   = res;
    *(s32 *) (arg0 + 0x78) = res;
    p2                     = arg0 + 8;
    for (j = 0; j < 2; j++) {
        func_02085954(arg0, (s32) tbl[j], p2, *(W *) (arg0 + 0x78));
        p2 += 0x38;
    }
}
