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

extern u16 data_0213267c;
extern u16 data_02132680;

extern void func_0203cb90(s32, s32);
extern void func_0203ce4c(s32);
extern void func_0203cf38(s32);
extern void func_0203d190(s32, U16One);
extern U16Pair func_0203e1c4(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
extern void func_02050704(s32, s32, s32, s32, s32);
extern void func_02051b08(U16One);
extern void func_02075180(void *);

void func_020755c0(void *arg0) {
    U16Pair ab;
    U16Pair sp18;
    U8Quad sp1C;
    u8 *pb;
    u16 *ph;
    ab.a = data_0213267c;
    ab.b = data_02132680;
    func_0203cf38(0);
    func_0203ce4c(0x1000);
    func_0203d190(2, *(U16One *) &ab.a);
    pb    = (u8 *) &sp1C;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &sp18;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e1c4(2, 0x9DC, 1, 0, 0, 16, sp18, sp1C, 0);
    func_0203d190(0, *(U16One *) &ab.b);
    func_02051b08(*(U16One *) &ab.b);
    func_0203cb90(0, 0);
    func_02050704(1, 4, 6, 46, 0);
    func_02075180(arg0);
}
