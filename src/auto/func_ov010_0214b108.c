/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov010_02152c34[];
extern u8 data_ov010_02152b9c[];
s32 func_0204cbb4(s32, s32);
s32 func_0201661c(void *, s32, u16, s32);
void func_ov010_0214b090(void *);
s32 func_020d59bc(s32);

void func_ov010_0214b108(u8 *arg0, s32 arg1) {
    u8 *r5;
    u8 *q;
    s32 idx;
    s32 v;
    s32 c;
    s32 off;
    s32 r2;

    v  = arg1;
    r5 = *(u8 **) (arg0 + 0x1B4);
    if (v < 0x30) {
        idx = v / 8;
        if (v % 8 == 7) {
            v = func_0204cbb4(0, 6) + idx * 8;
        }
    } else {
        if (v < 0x34) {
            idx = r5[0x9E];
        } else {
            idx = 0;
        }
    }
    if (v < 0x32) {
        off                      = idx * 0x2C;
        c                        = arg0[0x56 + off];
        arg0[0x56 + off]         = c + 1;
        *(arg0 + off + c + 0x48) = v;
    }
    q                    = arg0 + idx * 0x2C;
    r5[0xA0]             = v;
    r5[0xA1]             = idx;
    *(s32 *) (r5 + 0x74) = *(s32 *) (q + 0x34);
    if (v < 0x34) {
        func_0201661c(r5, (s32) data_ov010_02152b9c, *(u16 *) (data_ov010_02152c34 + 6), 0);
        *(s32 *) (r5 + 0x10) &= ~0x20000000;
        *(s32 *) (r5 + 0x4) |= 1;
        r2 = 4;
    } else {
        func_ov010_0214b090(arg0);
        *(s16 *) (r5 + 0x84) = 0x28;
        *(s32 *) (r5 + 0x4) &= ~1;
        r2 = 0xA;
    }
    if (r5[0x80] != (u8) r2) {
        r5[0x80] = (u8) r2;
        r5[0x82] |= 1;
        r5[0x81] = 0;
    }
    func_020d59bc(0x25D);
}
