/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct A {
    u8 p;
    u8 idx;
    u16 a : 6;
    u16 b : 6;
    u16 c : 2;
    u16 d : 2;
    u16 e0 : 6;
    u16 e : 6;
    u16 e1 : 4;
} A;
typedef struct P2 {
    s32 a;
    s32 b;
} P2;
extern P2 data_ov003_02150bac;
extern P2 data_ov003_02150bb4;
s32 func_0200df7c(s32, s32);
u16 func_0200e2c0(s32);
u16 func_0200e7a0(s32);
u16 func_0200e41c(s32);
u16 func_0200e434(s32);
void func_ov003_0214a364(u8 *, s32);
void func_ov003_0214a348(u8 *, s32);
void func_ov003_0214a32c(u8 *, s32);
void func_ov003_0214a260(u8 *, s32);
void func_ov003_0214a298(u8 *, s32);

void func_ov003_0214e1c4(u8 *arg0, A *arg1) {
    P2 x;
    P2 y;
    u8 *o;
    s32 w;
    u32 v;
    u16 r6;
    s32 idx;

    o = *(u8 **) (arg0 + 4);
    v = func_0200df7c(*(s32 *) (o + *(u16 *) (o + 0x76) * 4 + 0x48), 2);
    if (arg1->c != v) {
        func_ov003_0214a364(*(u8 **) (arg0 + 4), arg1->c);
    }
    o   = *(u8 **) (arg0 + 4);
    idx = *(u16 *) (o + 0x76);
    x   = data_ov003_02150bac;
    y   = data_ov003_02150bb4;
    w   = ((s32 *) &x)[idx];
    if (arg1->d == 1) {
        w = ((s32 *) &y)[idx];
    }
    r6 = *(u16 *) ((u8 *) w + (arg1->idx << 1));
    if (r6 != func_0200e2c0(*(s32 *) (o + *(u16 *) (o + 0x76) * 4 + 0x48))) {
        func_ov003_0214a348(*(u8 **) (arg0 + 4), r6);
    }
    o = *(u8 **) (arg0 + 4);
    v = func_0200e7a0(*(s32 *) (o + *(u16 *) (o + 0x76) * 4 + 0x48));
    if (arg1->a != v) {
        func_ov003_0214a32c(*(u8 **) (arg0 + 4), arg1->a);
    }
    o = *(u8 **) (arg0 + 4);
    w = func_0200e41c(*(s32 *) (o + *(u16 *) (o + 0x76) * 4 + 0x48));
    v = arg1->e;
    if (v != w) {
        if (v == 0x3F) {
            v = 0xFFFF;
        }
        func_ov003_0214a260(*(u8 **) (arg0 + 4), v);
    }
    o = *(u8 **) (arg0 + 4);
    w = func_0200e434(*(s32 *) (o + *(u16 *) (o + 0x76) * 4 + 0x48));
    v = arg1->b;
    if (v == w) {
        return;
    }
    if (v == 0x3F) {
        v = 0xFFFF;
    }
    func_ov003_0214a298(*(u8 **) (arg0 + 4), v);
}
