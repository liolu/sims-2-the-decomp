/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a;
    u16 b;
} U16Pair;

typedef struct {
    u16 a;
} U16One;

void func_02089a68(u8 *, u8 *, s32, U16Pair, U16Pair, U16One, s32, s32, s32);
void func_02089420(u8 *, s32);
s32 func_ov003_0214d5e4(u8 *, s32);
s32 func_ov003_0214d4e4(u8 *);
s32 func_020894fc(u8 *);
void func_020165bc(s32, s32);
extern u8 data_ov003_0214fb78[];
extern u16 data_ov003_02150b20;
extern s32 data_0213e434;

void func_ov003_0214d750(u8 *arg0) {
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
        func_02089a68(arg0 + 0x14, data_ov003_0214fb78, 7, pb, pa, *(U16One *) &data_ov003_02150b20, 1, 0xF, 0);
        func_02089420(arg0 + 0x14, data_0213e434 + 0x53);
    }
    r = func_ov003_0214d5e4(arg0, 0);
    if (r == 0) {
        r = func_ov003_0214d4e4(arg0);
    }
    if (r != 0) {
        return;
    }
    t = func_020894fc(arg0 + 0x14);
    if (t != 0xC37 && t != 0xC38 && t != 0xC39) {
        return;
    }
    func_020165bc(*(s32 *) (*(s32 *) (arg0 + 8) + ((*(u16 *) (arg0 + 0x12) + 1) * 4)), 0);
    *(u16 *) (arg0 + 0x12) = (u16) (t + 0xFFFFF3C9);
    func_020165bc(*(s32 *) (*(s32 *) (arg0 + 8) + ((*(u16 *) (arg0 + 0x12) + 1) * 4)), 1);
}
