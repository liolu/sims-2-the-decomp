/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
extern u8 *data_0213e0a8;

void func_01ffbf5c(s32 *vec, u8 *a);
u32 func_0204cb14(s32 a, u32 b);
void func_0204ab4c(s32 *a, s32 *b, s32 *c, W d, s32 e, s32 f, u8 *g, s32 h);

void func_02049fd4(u8 *arg0) {
    u8 fr[0x94];
    s32 *q;
    u8 *R;
    u32 idx;
    s32 t;
    s32 l;
    s32 z;
    s32 one;

    if (arg0[0x1d4] == 0) {
        return;
    }
    R = *(u8 **) (data_0213e0a8 + 0xf8);
    if (*(s32 *) (arg0 + 0x1d0) == 0) {
        return;
    }
    z                    = 0;
    *(s32 *) (fr + 0x54) = z;
    *(s32 *) (fr + 0x58) = z;
    *(s32 *) (fr + 0x5C) = 0x3000;
    func_01ffbf5c((s32 *) (fr + 0x54), R + 0x88);

    one                    = 0x1000;
    q                      = *(s32 **) (arg0 + 0x1d0) + 0x1E;
    t                      = q[0];
    *(s32 *) (fr + 0x30)   = t;
    *(s32 *) (arg0 + 0)    = t;
    t                      = q[1];
    *(s32 *) (fr + 0x34)   = t;
    *(s32 *) (arg0 + 4)    = t;
    t                      = q[2];
    *(s32 *) (fr + 0x38)   = t;
    *(s32 *) (arg0 + 8)    = t;
    t                      = *(s32 *) (fr + 0x54);
    *(s32 *) (fr + 0x3C)   = t;
    *(s32 *) (arg0 + 0)    = *(s32 *) (arg0 + 0) + t;
    t                      = *(s32 *) (fr + 0x58);
    *(s32 *) (fr + 0x40)   = t;
    *(s32 *) (arg0 + 4)    = *(s32 *) (arg0 + 4) + t;
    t                      = *(s32 *) (fr + 0x5C);
    *(s32 *) (fr + 0x44)   = t;
    *(s32 *) (arg0 + 8)    = *(s32 *) (arg0 + 8) + t;
    *(s32 *) (fr + 0x00)   = one;
    *(s32 *) (fr + 0x0C)   = one;
    *(s32 *) (arg0 + 0x18) = *(s32 *) (arg0 + 0x18) + 0x1000;
    l                      = *(s32 *) (arg0 + 0x1C);
    *(s32 *) (fr + 0x2C)   = l;
    if (*(s32 *) (arg0 + 0x18) < l) {
        return;
    }
    do {
        *(s32 *) (fr + 0x60) = z;
        *(s32 *) (fr + 0x64) = z;
        *(s32 *) (fr + 0x68) = z;
        *(s32 *) (fr + 0x6C) = z;
        *(s32 *) (fr + 0x70) = z;
        *(s32 *) (fr + 0x74) = z;
        t                    = *(s32 *) (arg0 + 0x38);
        *(s32 *) (fr + 0x84) = t;
        *(s32 *) (fr + 0x88) = one;
        *(s32 *) (fr + 0x8C) = t;
        *(s32 *) (fr + 0x6C) = t;
        *(s32 *) (fr + 0x48) = one;
        *(s32 *) (fr + 0x70) = one;
        *(s32 *) (fr + 0x4C) = t;
        *(s32 *) (fr + 0x74) = t;
        t                    = *(s32 *) (arg0 + 0);
        *(s32 *) (fr + 0x10) = t;
        *(s32 *) (fr + 0x60) = t;
        t                    = *(s32 *) (arg0 + 4);
        *(s32 *) (fr + 0x14) = t;
        *(s32 *) (fr + 0x64) = t;
        t                    = *(s32 *) (arg0 + 8);
        *(s32 *) (fr + 0x78) = z;
        *(s32 *) (fr + 0x18) = t;
        *(s32 *) (fr + 0x68) = t;
        *(s32 *) (fr + 0x7C) = z;
        *(s32 *) (fr + 0x80) = z;
        *(s32 *) (fr + 0x04) = z;
        *(s32 *) (fr + 0x1C) = z;
        *(s32 *) (fr + 0x78) = z;
        t                    = *(s32 *) (R + 0x88);
        *(s32 *) (fr + 0x20) = t;
        *(s32 *) (fr + 0x7C) = t;
        *(s32 *) (fr + 0x08) = z;
        *(s32 *) (fr + 0x24) = z;
        *(s32 *) (fr + 0x80) = z;
        idx                  = func_0204cb14(0, arg0[0x1CC]) & 0xFF;
        func_0204ab4c((s32 *) (fr + 0x60), (s32 *) (fr + 0x78), (s32 *) (fr + 0x6C), *(W *) (arg0 + 0x20),
                      *(s32 *) (arg0 + 0x28), *(u16 *) (arg0 + idx * 2 + 0x24), arg0, idx);
        l                      = *(s32 *) (arg0 + 0x1C);
        *(s32 *) (fr + 0x28)   = l;
        *(s32 *) (arg0 + 0x18) = *(s32 *) (arg0 + 0x18) - l;
        l                      = *(s32 *) (arg0 + 0x1C);
        *(s32 *) (fr + 0x50)   = l;
    } while (*(s32 *) (arg0 + 0x18) >= l);
}
