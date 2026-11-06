/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
};

extern "C" {

typedef struct {
    s32 v;
} W32;

extern u8 *data_0213d95c;
extern s32 data_02139fa4;
extern s32 data_027e0000;
extern u8 *data_0213e580;
extern u8 *data_0213e434;

s32 func_020a4174(s32, W32, W32);
s32 func_020a3f40(s32, W32, W32);
u8 *func_020a4214(s32, W32, W32);
void func_ov009_0214b494(u8 *, s32);
void func_ov009_0214ad6c(u8 *, s32, s32);
s32 func_020d59bc(s32);
void func_ov009_02149b70(u8 *);
void func_ov009_0214a89c(u8 *);
void func_ov009_0214a8e4(u8 *);
void func_ov009_0214ad64(u8 *, s32);
void func_ov009_0214a958(u8 *, u8 *);
void func_ov009_0214a814(u8 *, W32, s32);
s32 func_ov009_0214b600(u8 *, s32);
void func_020d5604(s32);
void func_02048108(s32, s32, s32, s32, s32, s32);
void func_01ffabc8(s32, s32, s32);
void func_ov009_0214b100(u8 *);
void func_ov009_0214a8d0(u8 *);
void func_ov009_0214af70(u8 *);

void func_ov009_02149d40(u8 *arg0) {
    u8 fr[0x30];
    u8 *o;
    u8 *r4o;
    s32 t;
    s32 r5;
    s32 r4;
    s32 v;
    s32 d;
    s32 z;

    o       = *(u8 **) (arg0 + 0xDC);
    t       = o[0x8C];
    o[0x8C] = 0;
    if (t != 0 && arg0[0xD4] != 0) {
        z                    = 0;
        *(s32 *) (fr + 0)    = z;
        *(s32 *) (fr + 0x14) = z;
        if (*(s32 *) (arg0 + 0xD0) > *(s32 *) (fr + 0) && *(s32 *) (arg0 + 0x9C) != 5) {
            r5 = func_020a4174(*(s32 *) (arg0 + 0x38), *(W32 *) (arg0 + 0xAC), *(W32 *) (arg0 + 0xB0));
            r4 = func_020a3f40(*(s32 *) (arg0 + 0x38), *(W32 *) (arg0 + 0xAC), *(W32 *) (arg0 + 0xB0));
            if (r4 != 0) {
                t                      = *(s32 *) (arg0 + 0x34);
                *(s32 *) (fr + 0x18)   = t;
                *(s32 *) (arg0 + 0xD0) = *(s32 *) (arg0 + 0xD0) - t;
            }
            *(s32 *) (arg0 + 0x9C) = 5;
            func_ov009_0214b494(arg0 + 0x3C, *(s32 *) (arg0 + 0x9C));
            func_ov009_0214ad6c(arg0 + 0x3C, r5, r4);
            func_020d59bc(0x26F);
        }
    }
    func_ov009_02149b70(arg0);
    if (((u32) (data_0213d95c[0] << 29)) >> 31) {
        *(u16 *) (arg0 + 0xC0) = *(u16 *) (data_0213d95c + 0x2A);
        *(u16 *) (arg0 + 0xC2) = *(u16 *) (data_0213d95c + 0x2C);
    }
    ((VA *) *(u8 **) (arg0 + 0xD8))->f2();
    func_ov009_0214a89c(arg0 + 0x3C);
    r4o = func_020a4214(*(s32 *) (arg0 + 0x38), *(W32 *) (arg0 + 0xAC), *(W32 *) (arg0 + 0xB0));
    if (r4o == 0 || *(s32 *) (arg0 + 0x9C) == 0) {
        arg0[0xD4] = 0;
        func_ov009_0214a8e4(arg0 + 0x3C);
        func_ov009_0214ad64(arg0 + 0x3C, 0);
    } else {
        arg0[0xD4]           = 1;
        v                    = *(s32 *) (*(u8 **) (arg0 + 0xD8) + 0x90);
        *(s32 *) (fr + 4)    = v;
        *(s32 *) (fr + 0x1C) = v;
        d                    = ((s32) ((((long long) v << 20) + 0x800) >> 12) >> 12) - r4o[9];
        if (d < 0) {
            d = -d;
        }
        if (d > 0x80) {
            d = 0x80;
        }
        func_ov009_0214ad64(arg0 + 0x3C, d);
        func_ov009_0214a958(arg0 + 0x3C, r4o);
    }
    if (*(s32 *) (arg0 + 0x9C) == 3) {
        t                      = *(s32 *) (arg0 + 0x30);
        *(s32 *) (fr + 0x20)   = t;
        *(s32 *) (arg0 + 0xD0) = *(s32 *) (arg0 + 0xD0) - t;
    }
    z                    = 0;
    *(s32 *) (fr + 8)    = z;
    *(s32 *) (fr + 0x24) = z;
    if (*(s32 *) (arg0 + 0xD0) <= *(s32 *) (fr + 8)) {
        *(s32 *) (fr + 0xC)    = z;
        *(s32 *) (fr + 0x28)   = z;
        *(s32 *) (arg0 + 0xD0) = z;
        if (*(s32 *) (arg0 + 0x9C) == 3) {
            *(s32 *) (arg0 + 0x9C) = 4;
            func_ov009_0214b494(arg0 + 0x3C, *(s32 *) (arg0 + 0x9C));
        }
    }
    func_ov009_0214a814(arg0 + 0x3C, *(W32 *) (arg0 + 0xD0), 1);
    if (func_ov009_0214b600(arg0 + 0x3C, *(s32 *) (arg0 + 0x9C)) != 0) {
        switch (*(s32 *) (arg0 + 0x9C)) {
            case 1:
                *(s32 *) (arg0 + 0x9C) = 2;
                func_ov009_0214b494(arg0 + 0x3C, *(s32 *) (arg0 + 0x9C));
                *(s32 *) (arg0 + 0xE0) = func_020d59bc(0x155);
                break;
            case 2:
                *(s32 *) (arg0 + 0x9C) = 3;
                func_ov009_0214b494(arg0 + 0x3C, *(s32 *) (arg0 + 0x9C));
                break;
            case 4:
                *(s32 *) (arg0 + 0x9C) = 0;
                func_ov009_0214b494(arg0 + 0x3C, *(s32 *) (arg0 + 0x9C));
                break;
            case 0:
                if (*(s32 *) (arg0 + 0xE0) != -1) {
                    func_020d5604(*(s32 *) (arg0 + 0xE0));
                    *(s32 *) (arg0 + 0xE0) = -1;
                }
                func_02048108(data_02139fa4, 0xC, 1, 0, 0, 0);
                if (data_027e0000 == 0) {
                    data_027e0000 = 1;
                } else {
                    data_027e0000 = 0;
                }
                func_01ffabc8(*(s32 *) (data_0213e580 + 0xF8) + 0xE0, 0x12, 0);
                if (data_027e0000 == 0) {
                    data_027e0000 = 1;
                } else {
                    data_027e0000 = 0;
                }
            case 5:
                *(s32 *) (arg0 + 0x9C) = 3;
                func_ov009_0214b494(arg0 + 0x3C, *(s32 *) (arg0 + 0x9C));
                break;
        }
    }
    func_ov009_0214b100(arg0 + 0x3C);
    func_ov009_0214a8d0(arg0 + 0x3C);
    func_ov009_0214af70(arg0 + 0x3C);
    t                                         = *(s32 *) (arg0 + 0xD0);
    *(s32 *) (fr + 0x10)                      = t;
    *(s32 *) (data_0213e434 + 0x4000 + 0x1DC) = t;
}
}
