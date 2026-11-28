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
typedef struct {
    u16 x, y;
    U16Pair p;
    U8Quad q;
} Fr;

extern u16 data_02131984;
extern u16 data_02131988;
extern s32 data_027e0000;

extern void func_0203cb90(s32, s32);
extern void func_0203cd5c(s32);
extern void func_0203ce4c(s32);
extern void func_0203cf38(s32);
extern void func_0203d190(s32, U16One);
extern void func_0203e1c4(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
extern void func_02050704(s32, s32, s32, s32, s32);
extern s32 func_020515f4(s32, s32, s32, s32, s32, s32);
extern void func_020519d8(s32, s32, s32);
extern void func_02051b08(U16One);
extern s32 func_020521e0(s32);

void func_020551b4(u8 *arg0) {
    Fr f;
    u8 *pb;
    u16 *ph;
    s32 r;
    f.x = data_02131988;
    f.y = data_02131984;
    func_0203cf38(0);
    func_0203ce4c(0x1000);
    func_0203d190(0, *(U16One *) &f.y);
    func_02051b08(*(U16One *) &f.y);
    func_0203cb90(0, 0);
    func_02050704(0x20, 0x2e, 0x2e, 0x2e, 0);
    func_020519d8(3, 0, 0);
    *(u16 *) (0x05000000 + (data_027e0000 << 10)) = 0;
    func_0203cd5c(2);
    r = func_020515f4(1, 0x80, 0x17, 0xe0, func_020521e0(*(s32 *) (arg0 + 0x24)), 1);
    func_020515f4(r, 0x80, 0x2f, 0xe0, func_020521e0(0xa1c), 1);
    func_0203d190(1, *(U16One *) &f.x);
    pb    = (u8 *) &f.q;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &f.p;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e1c4(1, 0x21fa, 0, 0, 0, 0x100, f.p, f.q, 0);
}
