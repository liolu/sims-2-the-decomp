/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a;
    u16 b;
} U16Pair;

typedef struct {
    u16 a;
} U16One;

void func_020899f0(u8 *, u8 *, s32, U16Pair, U16Pair, U16One, s32, s32, s32);
void func_020893a8(u8 *, s32);
s32 func_ov003_0214d4a4(u8 *, s32);
s32 func_ov003_0214d3a4(u8 *);
s32 func_02089484(u8 *);
void func_020165bc(s32, s32);
extern u8 data_ov003_0214fa38[];
extern u16 data_ov003_021509e0;
extern s32 data_0213e2f4;

void func_ov003_0214d610(u8 *arg0) {
    U16Pair pb;
    U16Pair pa;
    s32 r;
    s32 t;

    if (*(u16 *) (arg0 + 0x10) == 0) {
        *(u16 *) (arg0 + 0x10) = 1;
        pa.a                   = 0x4F;
        pa.b                   = 0x46;
        pb.a                   = 0x7A;
        pb.b                   = 0x33;
        func_020899f0(arg0 + 0x14, data_ov003_0214fa38, 7, pb, pa, *(U16One *) &data_ov003_021509e0, 1, 0xF, 0);
        func_020893a8(arg0 + 0x14, data_0213e2f4 + 0x53);
    }
    r = func_ov003_0214d4a4(arg0, 0);
    if (r == 0) {
        r = func_ov003_0214d3a4(arg0);
    }
    if (r != 0) {
        return;
    }
    t = func_02089484(arg0 + 0x14);
    if (t != 0xC37 && t != 0xC38 && t != 0xC39) {
        return;
    }
    func_020165bc(*(s32 *) (*(s32 *) (arg0 + 8) + ((*(u16 *) (arg0 + 0x12) + 1) * 4)), 0);
    *(u16 *) (arg0 + 0x12) = (u16) (t + 0xFFFFF3C9);
    func_020165bc(*(s32 *) (*(s32 *) (arg0 + 8) + ((*(u16 *) (arg0 + 0x12) + 1) * 4)), 1);
}
