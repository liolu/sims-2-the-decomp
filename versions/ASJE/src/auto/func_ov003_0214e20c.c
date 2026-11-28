/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u32 v[2];
} P2;

s32 func_0200f1c4(u32);
void func_ov003_0214a280(u8 *, s32);
void func_0200e1e8(u32);
void func_ov003_0214a324(u8 *, s32);
s32 func_0200df7c(u32, s32);
void func_ov003_0214a1ac(u8 *, s32);
u16 func_0200e330(u32);
void func_ov003_0214a190(u8 *, s32);
u16 func_0200e86c(u32);
void func_ov003_0214a174(u8 *, s32);
u16 func_0200e428(u32);
void func_ov003_0214a13c(u8 *, s32);
extern P2 data_ov003_02150a6c;
extern P2 data_ov003_02150a74;

void func_ov003_0214e20c(u8 *arg0, u8 *arg1) {
    u32 idx;
    P2 ta;
    P2 tb;
    u32 *r3;
    s32 r;
    s32 bits;
    s32 r1;
    u16 r6;

    r = func_0200f1c4(*(u32 *) (*(u8 **) (arg0 + 4) + *(u16 *) (*(u8 **) (arg0 + 4) + 0x76) * 4 + 0x48));
    if (r != 0) {
        if (r == 1) {
            func_ov003_0214a280(*(u8 **) (arg0 + 4), 0);
            func_0200e1e8(*(u32 *) (*(u8 **) (arg0 + 4) + *(u16 *) (*(u8 **) (arg0 + 4) + 0x76) * 4 + 0x48));
        }
        func_ov003_0214a324(*(u8 **) (arg0 + 4), 0);
    }
    r    = func_0200df7c(*(u32 *) (*(u8 **) (arg0 + 4) + *(u16 *) (*(u8 **) (arg0 + 4) + 0x76) * 4 + 0x48), 1);
    bits = (u32) (*(u16 *) (arg1 + 2) << 18) >> 30;
    if (bits != r) {
        func_ov003_0214a1ac(*(u8 **) (arg0 + 4), bits);
    }
    idx = *(volatile u16 *) (*(u8 **) (arg0 + 4) + 0x76);
    ta  = data_ov003_02150a6c;
    tb  = data_ov003_02150a74;
    r3  = (u32 *) ta.v[idx];
    if (((u32) (*(u16 *) (arg1 + 2) << 16) >> 30) == 1) {
        r3 = (u32 *) tb.v[idx];
    }
    r6 = *(u16 *) ((u8 *) r3 + arg1[1] * 2);
    if (r6 != func_0200e330(*(u32 *) (*(u8 **) (arg0 + 4) + *(u16 *) (*(u8 **) (arg0 + 4) + 0x76) * 4 + 0x48))) {
        func_ov003_0214a190(*(u8 **) (arg0 + 4), r6);
    }
    r  = func_0200e86c(*(u32 *) (*(u8 **) (arg0 + 4) + *(u16 *) (*(u8 **) (arg0 + 4) + 0x76) * 4 + 0x48));
    r1 = (u32) (*(u16 *) (arg1 + 2) << 26) >> 26;
    if (r1 != r) {
        func_ov003_0214a174(*(u8 **) (arg0 + 4), r1);
    }
    r  = func_0200e428(*(u32 *) (*(u8 **) (arg0 + 4) + *(u16 *) (*(u8 **) (arg0 + 4) + 0x76) * 4 + 0x48));
    r1 = (u32) (*(u16 *) (arg1 + 4) << 26) >> 26;
    if (r1 == r) {
        return;
    }
    if (r1 == 0x3F) {
        r1 = 0xFFFF;
    }
    func_ov003_0214a13c(*(u8 **) (arg0 + 4), r1);
}
