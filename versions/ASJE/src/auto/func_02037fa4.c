/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02037e30();
M2C_UNK func_01ffac40();
M2C_UNK func_0201d0ac();
M2C_UNK func_020117e8();
M2C_UNK func_02018acc();
M2C_UNK func_02031e84();

typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    u8 p[0x30];
    u16 h;
    u8 q[3];
    u8 c;
    u8 r[6];
} O;

u32 func_02037fa4(u8 *arg0, s32 arg1, u8 *arg2) {
    volatile V3 b;
    O o;
    volatile V3 a;
    V3 *d;
    s32 t;

    switch (arg1) {
        case 0x13:
            arg0[0x30] = *arg2;
            return 0;
        case 0x15:
            return func_02037e30(arg0, arg2);
        case 0x16:
            func_01ffac40(*(u8 **) (arg0 + 4) + 0xe0, arg0);
            func_0201d0ac(&o);
            o.h = 0x43;
            o.c = 0;
            func_020117e8(*(u32 *) (arg0 + 4), 3, &o, arg0);
            a.x  = 0;
            a.y  = 0;
            a.z  = 0;
            d    = (V3 *) (*(u8 **) (arg0 + 4) + 0x10);
            b.x  = 0;
            d->x = 0;
            t    = a.y;
            b.y  = t;
            d->y = t;
            t    = a.z;
            b.z  = t;
            d->z = t;
            func_02018acc(&o);
            return 0;
        case 7:
            func_02031e84(*(u32 *) (arg0 + 4), arg0[0x31] == 0);
            return 0;
        case 1:
            arg0[0x31] = *arg2;
            return 0;
        case 0x1c:
            *(u8 **) (arg0 + 0x34) = arg2;
            return 0;
    }
    return 0;
}
