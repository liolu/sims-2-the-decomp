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
} U8x4;

M2C_UNK func_0203ded0(U16One, u16, s32, s32, s32, s32, s32, U16Pair, U8x4, s32); /* extern */
M2C_UNK func_0203d190(s32, U16One);                 /* extern */
M2C_UNK func_0209f400(void *, s32, s32);            /* extern */
extern u8 data_021247a0;
extern u8 data_0212479c;

void func_0209f6b8(void *arg0) {
    u8 *p;
    u8 *q;
    U16Pair sp18;
    U8x4 sp1C;

    p = (u8 *) arg0;
    if (p[0x2C] == 0) {
        return;
    }
    q      = (u8 *) &sp1C;
    q[0]   = 0;
    q[1]   = 0;
    q[2]   = 0;
    q[3]   = 0;
    sp18.a = 8;
    sp18.b = 0;
    func_0203ded0(*(U16One *) (&data_021247a0 + p[0x25] * 2), ((u16 *) *(void **) (p + 0x28))[p[0x24]], 1, 0, 0, 0, 0x100,
                  sp18, sp1C, 1);
    func_0203d190(2, *(U16One *) (&data_021247a0 + p[0x25] * 2));
    p[0x24] = (u8) (p[0x24] + 1);
    if (((u16 *) *(void **) (p + 0x28))[p[0x24]] == 0) {
        p[0x24] = 0;
        switch (p[0x2D]) {
            case 0:
                p[0x2C] = 0;
                break;
            case 1:
            case 2:
                p[0x2C] = 0;
                if (p[0x5C] == 0) {
                    func_0209f400(p, 0, 0);
                }
                break;
            case 3:
            case 4:
                p[0x2D]               = 0;
                *(void **) (p + 0x28) = &data_0212479c;
                break;
        }
    }
    if (p[0x25] == 0) {
        p[0x25] = 1;
    } else {
        p[0x25] = 0;
    }
}
