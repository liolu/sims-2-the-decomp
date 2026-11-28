/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;
typedef struct {
    u16 a, b;
} U16Pair;
typedef struct {
    u8 a, b, c, d;
} U8Quad;

extern u8 data_02142384;
extern s32 data_02142390;
extern u8 data_02142380;
extern u16 data_0214238c;
extern u8 data_02142388;
extern u16 data_02127788;
extern u16 data_0212778c;
extern u8 *data_0213e2f4;
extern u8 data_021277f0;
extern u8 data_021277d0;
extern u8 data_021277b8;

extern void func_0203cf38(s32);
extern void func_0203c4c8(void);
extern void func_0203ce4c(s32);
extern void func_0203d190(s32, U16One);
extern void func_0203cb90(s32, s32);
extern U16Pair func_0203e1c4(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
extern void func_02051b08(U16One);
extern void func_020505b8(s32, s32, s32);
extern void func_020519d8(s32, s32, s32);
extern s32 func_020521e0(s32);
extern s32 func_020512c0(s32, s32, s32, s32, s32);
extern void func_020c9908(void *);
extern void func_020c95cc(void *);
extern void func_020ca480(void *);
extern void func_020ca02c(void *);
extern u8 *func_02046814(s32, s32, s32);
extern u8 *func_020170c4(u8 *, s32);
extern void func_02049a88(u8 *, s32);
extern void func_02016708(u8 *, void *);
extern void func_020168a4(u8 *, s32);
extern s32 func_020c83c8(void);
extern void func_020165bc(u8 *, s32);

void func_020cb8c4(u8 *a) {
    u8 fr[0x3c];
    u8 *pb;
    u16 *ph;
    u8 *o;
    s32 h;

    if (a[0x31] == 1) {
        a[0x31]             = 0;
        *(s32 *) (a + 0x24) = 0;
        data_02142384       = 0;
        data_02142390       = 0;
        data_02142380       = 0;
        data_0214238c       = 0;
        data_02142388       = 0;
    }
    func_0203cf38(0);
    func_0203c4c8();
    func_0203ce4c(0x1000);
    func_0203d190(1, *(U16One *) &data_02127788);
    func_0203cb90(1, 0);
    pb    = fr + 0x38;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) (fr + 0x34);
    ph[0] = 0;
    ph[1] = 0;
    func_0203e1c4(1, 0x21f3, 1, 0, 0, 0x100, *(U16Pair *) (fr + 0x34), *(U8Quad *) (fr + 0x38), 0);
    *(u16 *) (fr + 0) = data_0212778c;
    func_0203d190(0, *(U16One *) (fr + 0));
    func_0203cb90(0, 0);
    func_02051b08(*(U16One *) (fr + 0));
    func_020505b8(0x20, 0, 1);
    func_020519d8(3, 0, 0);
    switch (*(s32 *) (a + 0x24)) {
        case 0:
            func_020512c0(1, 0x7f, 0xc, func_020521e0(0x7ea), 1);
            h = func_020512c0(0x29, 0x2f, 0x32, func_020521e0(0x802), 0);
            h = func_020512c0(h, 0x2f, 0x52, func_020521e0(0x801), 0);
            h = func_020512c0(h, 0x2f, 0x72, func_020521e0(0x800), 0);
            func_020512c0(h, 0x2f, 0x92, func_020521e0(0x7ec), 0);
            func_020c9908(a);
            break;
        case 1:
        case 2:
        case 3:
            func_0203cb90(0, 0);
            h = *(s32 *) (*(u8 **) (data_0213e2f4 + 0x4000 + 0x79c) + 0x228);
            switch (h) {
                case 0:
                    h = 0x805;
                    break;
                case 1:
                    h = 0x806;
                    break;
                default:
                    h = 0x804;
                    break;
            }
            func_020512c0(1, 0x7f, 0xc, func_020521e0(h), 1);
            data_02142388       = 0;
            *(u16 *) (a + 0x2c) = 0;
            func_020c95cc(a);
            break;
        case 4:
            func_020ca480(a);
            break;
        case 5:
            func_020ca02c(a);
            break;
    }
    *(s32 *) (fr + 0x8)  = 0xb0000;
    *(s32 *) (fr + 0x20) = 0xb0000;
    *(s32 *) (fr + 0x4)  = 0;
    *(s32 *) (fr + 0x1c) = 0;
    o                    = func_02046814(0x74, 0, 4);
    if (o != 0) {
        o = func_020170c4(o, 0);
    }
    *(u8 **) (a + 0x40) = o;
    func_02049a88(*(u8 **) (a + 0x40), 2);
    func_02016708(*(u8 **) (a + 0x40), &data_021277f0);
    *(s32 *) (*(u8 **) (a + 0x40) + 0x50) = *(s32 *) (fr + 0x1c);
    *(s32 *) (*(u8 **) (a + 0x40) + 0x54) = *(s32 *) (fr + 0x20);
    func_020168a4(*(u8 **) (a + 0x40), 1);
    o                    = *(u8 **) (a + 0x40);
    *(u32 *) (o + 4)     = *(u32 *) (o + 4) | 0x10;
    *(s32 *) (fr + 0x10) = 0xac000;
    *(s32 *) (fr + 0x28) = 0xac000;
    *(s32 *) (fr + 0xc)  = 0xee000;
    *(s32 *) (fr + 0x24) = 0xee000;
    o                    = func_02046814(0x74, 0, 4);
    if (o != 0) {
        o = func_020170c4(o, 0);
    }
    *(u8 **) (a + 0x44) = o;
    func_02049a88(*(u8 **) (a + 0x44), 1);
    func_02016708(*(u8 **) (a + 0x44), &data_021277d0);
    *(s32 *) (*(u8 **) (a + 0x44) + 0x50) = *(s32 *) (fr + 0x24);
    *(s32 *) (*(u8 **) (a + 0x44) + 0x54) = *(s32 *) (fr + 0x28);
    func_020168a4(*(u8 **) (a + 0x44), 1);
    o                    = *(u8 **) (a + 0x44);
    *(u32 *) (o + 4)     = *(u32 *) (o + 4) & ~1;
    *(s32 *) (fr + 0x18) = 0xac000;
    *(s32 *) (fr + 0x30) = 0xac000;
    *(s32 *) (fr + 0x14) = 0xee000;
    *(s32 *) (fr + 0x2c) = 0xee000;
    o                    = func_02046814(0x74, 0, 4);
    if (o != 0) {
        o = func_020170c4(o, 0);
    }
    *(u8 **) (a + 0x48) = o;
    func_02049a88(*(u8 **) (a + 0x48), 4);
    func_02016708(*(u8 **) (a + 0x48), &data_021277b8);
    *(s32 *) (*(u8 **) (a + 0x48) + 0x50) = *(s32 *) (fr + 0x2c);
    *(s32 *) (*(u8 **) (a + 0x48) + 0x54) = *(s32 *) (fr + 0x30);
    func_020168a4(*(u8 **) (a + 0x48), 1);
    if (*(s32 *) (data_0213e2f4 + 0x4000 + 0x79c) == 0) {
        return;
    }
    *(s32 *) (a + 0x34) = 0;
    *(s32 *) (a + 0x34) = *(s32 *) (a + 0x34) + 1;
    *(s32 *) (a + 0x34) = 0;
    *(s32 *) (a + 0x3c) = func_020c83c8();
    func_020165bc(*(u8 **) (a + 0x40), (*(s32 *) (a + 0x3c) + 1) & 0xff);
}
