/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e458;
extern u8 data_021246d4[];
extern u8 data_021246c8[];

s32 func_0204cb3c(s32, s32);

void func_0209c32c(void) {
    s32 v;
    s32 i;
    s32 o;
    u8 *p;
    s32 k;
    u8 *base;
    u8 *tb;
    s32 lo;
    s32 cur;
    u8 *tp;

    base                = data_0213e458;
    base[0xc6]          = 8;
    data_0213e458[0xc5] = data_0213e458[0xc6];
    data_0213e458[0xc7] = 1;
    data_0213e458[0xc3] = 0x1c;
    data_0213e458[0xc8] = 1;
    tp                  = data_021246d4;
    for (i = 0; i < 5; i++) {
        data_0213e458[i + 0xce] = func_0204cb3c(1, *tp);
        data_0213e458[i + 0xc9] = func_0204cb3c(0, 2);
        tp++;
        if (data_0213e458[i + 0xc9] >= 2) {
            v = -1;
        } else {
            v = 1;
        }
        data_0213e458[i + 0xd3] = v;
    }
    p  = base;
    tb = data_021246c8;
    for (o = 0, lo = 0x10; o < 4; o++, tb++, lo += 0x10) {
        for (k = 0, cur = 2; k < 7; k++, cur += 0x10) {
            p[2] = tb[0];
            p[0] = cur;
            p[1] = lo;
            p += 4;
        }
    }
}
