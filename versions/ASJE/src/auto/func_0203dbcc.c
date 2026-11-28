/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 a, b, c, d;
} U8x4;
typedef struct {
    u16 lo, hi;
} U16Pair;

s32 func_0203b930(u32 x);
void func_0203db00(U16Pair *p, u32 A, s32 res, s32 c, U8x4 e, U16Pair f, s32 g, s32 h);
void func_0203da10(U16Pair *p, u32 A, s32 res, s32 c, U8x4 e, U16Pair f, s32 g);
void func_0203d648(U16Pair *p, u32 A, s32 res, s32 c, U8x4 e, U16Pair f, s32 g, s32 h, u8 i);

U16Pair func_0203dbcc(U16Pair *a, u32 b, s32 c, s32 d, U8x4 e, U16Pair f, s32 g, s32 h, u8 i) {
    volatile U16Pair A;
    volatile U16Pair r;
    volatile U16Pair t;
    s32 res;
    u16 x;
    u16 y;
    s32 v;

    res  = func_0203b930(b);
    t.lo = a->lo;
    x    = t.lo;
    t.hi = a->hi;
    y    = t.hi;
    A.lo = x;
    A.hi = y;
    if (e.a == 0 && e.b == 0 && e.c == 0 && e.d == 0) {
        e.c = (u8) A.lo;
        e.d = (u8) A.hi;
    }
    v = A.lo - e.a;
    if ((s32) e.c > v) {
        e.c = (u8) v;
    }
    v = A.hi - e.b;
    if ((s32) e.d > v) {
        e.d = (u8) v;
    }
    if (d == 2) {
        func_0203db00(a + 1, A.lo, res, c, e, f, g, h);
    } else if (d == 1) {
        func_0203da10(a + 1, A.lo, res, c, e, f, g);
    } else {
        func_0203d648(a + 1, A.lo, res, c, e, f, g, h, i);
    }
    r.lo = e.c;
    r.hi = e.d;
    return r;
}
