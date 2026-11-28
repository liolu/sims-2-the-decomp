/* compiler: 1.2/sp2p3 -pragma "opt_strength_reduction off" */
#include "m2c.h"

extern u8 data_02142cf0[];
extern u8 data_02142848[];
extern u8 data_021424d8[];

void func_020d767c(s32 a, s32 b);
void func_020d712c(u8 a);

void func_020d8828(u8 n) {
    s32 i;
    u8 *q;
    u8 *p;
    s32 off;
    s32 j;

    q = data_02142cf0;
    for (i = 15; i >= 0; i--) {
        if (*(u32 *) q != 0) {
            if ((((u32) (q[0xb] << 31)) >> 31) == 0) {
                if (q[0xa] >= n) {
                    func_020d767c(i | (*(u16 *) (data_02142848 + i * 0x44 + 0xb4) << 8), 0);
                }
            }
        }
        q = q - 0x44;
    }
    j = n;
    if (j < data_02142848[0x10]) {
        p   = data_02142848 + j;
        off = j << 5;
        do {
            u8 idx = p[0x634];
            if (idx < 3) {
                u8 *base = *(u8 **) (data_021424d8 + idx * 4 + 8);
                u8 *s    = base + 0x93c + off;
                u8 k     = s[0xa];
                if (k != 0xff) {
                    u8 *t = base + k * 0x24;
                    if (j == t[0x44]) {
                        t[0x44] = 0xff;
                    }
                }
                s[0xa] = 0xff;
            }
            p[0x634] = 3;
            func_020d712c(j);
            j++;
            p++;
            off += 0x20;
        } while (j < data_02142848[0x10]);
    }
    data_02142848[0x10] = n;
    data_02142848[0x11] = n;
}
