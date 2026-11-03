/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_02139fa4;
extern u8 *data_0213e580;
extern u8 *data_0213e434;
extern void *func_ov013_0214a5ec(u8 *);
extern void func_02048108(s32, s32, s32, s32, s32, s32);
extern void func_0205871c(s32, s32, s32, s32, s32, s32);
extern s32 func_0200fb30(s32, s32, s32);
extern void func_02011090(void *, s32, s32, s32, s32);

void func_ov013_0214a7e4(u8 *a) {
    s32 *p1;
    u8 *c4;
    u8 flag;
    s32 r1;
    s32 dv;

    *(void **) (a + 0xD0) = func_ov013_0214a5ec(a);
    c4                    = *(u8 **) (a + 0xC4);
    flag                  = c4[0x8C];
    c4[0x8C]              = 0;
    if (flag != 0) {
        func_02048108((s32) data_02139fa4, 0xC, 1, 0, 0, 0);
    }
    if (a[0xE4] == 0) {
        func_0205871c((s32) data_02139fa4, 0x13F, -1, 0, 0, 1);
        a[0xE4] = 1;
    }
    func_0200fb30(*(s32 *) (data_0213e580 + 0xF8), 1, 0);
    func_02011090(*(void **) (data_0213e580 + 0xF8), 0, 1, 1, 0);
    flag                = data_02139fa4[0x19];
    data_02139fa4[0x19] = 0;
    if (flag == 0) {
        return;
    }
    r1 = *(s32 *) (data_02139fa4 + 0x14);
    if (r1 != 1) {
        goto l9a8;
    }
    dv = *(s32 *) (a + 0x10);
    p1 = (s32 *) (data_0213e434 + 0x2F60);
    *p1 += dv;
    if (*p1 > 0xF423F) {
        *p1 = 0xF423F;
    } else if (*p1 < 0) {
        *p1 = 0;
    }
    if (dv > 0) {
        ((u8 *) p1)[0xC] = 1;
        p1[1] += dv;
        if (p1[1] > 0xF423F || p1[1] < 0) {
            p1[1] = 0xF423F;
        }
    } else {
        p1[2] -= dv;
        if (p1[2] > 0xF423F || p1[2] < 0) {
            p1[2] = 0xF423F;
        }
    }
    func_02048108((s32) data_02139fa4, 0xC, 1, 0, 0, 0);
    return;
l9a8:
    if (r1 != 2) {
        return;
    }
    func_02048108((s32) data_02139fa4, 0xC, 1, 0, 0, 0);
}
