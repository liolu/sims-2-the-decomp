/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a, b;
} P2;
typedef struct {
    P2 p[4];
} T8;
typedef struct {
    u8 a, b, c, d;
} B4;

extern s32 func_020444c0(s32);
extern M2C_UNK func_020bbd20(void *, M2C_UNK, s32, M2C_UNK, s32);
extern u8 data_0212fa78[];
extern u8 data_0212faa8[];
extern u8 data_0212fac8[];

void func_0200e1e8(u8 *arg0) {
    B4 bb;
    T8 t1;
    T8 t2;
    u32 idx;
    s32 r;

    t1  = *(T8 *) data_0212fac8;
    t2  = *(T8 *) data_0212faa8;
    bb  = *(B4 *) data_0212fa78;
    idx = (u8) (arg0[0x23c] - bb.a);
    r   = ((u16 *) &t2)[idx];
    if (*(u16 *) (arg0 + 0xa) == 0x3a) {
        r = ((u16 *) &t1)[idx];
    }
    r = func_020444c0(r);
    func_020bbd20(arg0 + 0x1a4, 0, r, 0x1000, 0);
}
