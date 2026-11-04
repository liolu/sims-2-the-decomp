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

extern u16 data_021327bc;
extern u16 data_021327c0;

extern void func_0203cc08(s32, s32);
extern void func_0203cec4(s32);
extern void func_0203cfb0(s32);
extern void func_0203d208(s32, U16One);
extern U16Pair func_0203e23c(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
extern void func_0205077c(s32, s32, s32, s32, s32);
extern void func_02051b80(U16One);
extern void func_020751f8(void *);

void func_02075638(void *arg0) {
    U16Pair ab;
    U16Pair sp18;
    U8Quad sp1C;
    u8 *pb;
    u16 *ph;
    ab.a = data_021327bc;
    ab.b = data_021327c0;
    func_0203cfb0(0);
    func_0203cec4(0x1000);
    func_0203d208(2, *(U16One *) &ab.a);
    pb    = (u8 *) &sp1C;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &sp18;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(2, 0x9DC, 1, 0, 0, 16, sp18, sp1C, 0);
    func_0203d208(0, *(U16One *) &ab.b);
    func_02051b80(*(U16One *) &ab.b);
    func_0203cc08(0, 0);
    func_0205077c(1, 4, 6, 46, 0);
    func_020751f8(arg0);
}
