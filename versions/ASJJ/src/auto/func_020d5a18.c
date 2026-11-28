/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02046398(void *, s32, s32);
typedef struct {
    u8 a;
    u8 p0[3];
    u8 b;
    u8 p1;
    u16 c;
    s32 d;
} Rec;

void func_020d5a18(Rec *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Rec r;

    func_02046398(&r, 0, 12);
    r.a   = arg1;
    r.d   = arg2;
    r.c   = arg3;
    r.b   = arg4;
    *arg0 = r;
}
