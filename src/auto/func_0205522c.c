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

extern u16 data_02131ac4;
extern u16 data_02131ac8;
extern s32 data_027e0000;

extern void func_0203cc08(s32, s32);
extern void func_0203cdd4(s32);
extern void func_0203cec4(s32);
extern void func_0203cfb0(s32);
extern void func_0203d208(s32, U16One);
extern void func_0203e23c(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
extern void func_0205077c(s32, s32, s32, s32, s32);
extern s32 func_0205166c(s32, s32, s32, s32, s32, s32);
extern void func_02051a50(s32, s32, s32);
extern void func_02051b80(U16One);
extern s32 func_02052258(s32);

void func_0205522c(u8 *arg0) {
    Fr f;
    u8 *pb;
    u16 *ph;
    s32 r;
    f.x = data_02131ac8;
    f.y = data_02131ac4;
    func_0203cfb0(0);
    func_0203cec4(0x1000);
    func_0203d208(0, *(U16One *) &f.y);
    func_02051b80(*(U16One *) &f.y);
    func_0203cc08(0, 0);
    func_0205077c(0x20, 0x2e, 0x2e, 0x2e, 0);
    func_02051a50(3, 0, 0);
    *(u16 *) (0x05000000 + (data_027e0000 << 10)) = 0;
    func_0203cdd4(2);
    r = func_0205166c(1, 0x80, 0x17, 0xe0, func_02052258(*(s32 *) (arg0 + 0x24)), 1);
    func_0205166c(r, 0x80, 0x2f, 0xe0, func_02052258(0xa1c), 1);
    func_0203d208(1, *(U16One *) &f.x);
    pb    = (u8 *) &f.q;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &f.p;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(1, 0x21fa, 0, 0, 0, 0x100, f.p, f.q, 0);
}
