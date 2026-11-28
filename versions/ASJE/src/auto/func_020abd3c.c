/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02125890[];

u32 func_0203d3c0(u32, s32);
void func_020abe14(u8 **, u32, u8 *, s32);

void func_020abd3c(u8 **p, u32 bs, u8 *st) {
    u32 v;
    u32 m;
    s32 i;
    s32 t;

    v = func_0203d3c0(bs, 4);
    if (v < 8) {
        (*p)[0] = 0;
        (*p)[1] = v;
        *p += 2;
        return;
    }
    if (v == 0xE) {
        m = func_0203d3c0(bs, 8);
        for (i = 0; i < 8; i++) {
            if (m & (1 << i)) {
                (*p)[0] = 0;
                (*p)[1] = i;
                *p += 2;
            }
        }
        return;
    }
    t = data_02125890[v];
    if (v == 0xD) {
        st[0x15] = 1;
    }
    func_020abe14(p, bs, st, t);
}
