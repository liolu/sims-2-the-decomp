/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"
extern s32 data_02138548;
extern s32 data_02142bd8;
extern s32 *data_02138550;
extern s32 *data_0213854c;
extern u32 data_02142bd4;
s32 *func_020de3d0(s32);
void func_020de37c(s32 *);
void func_02107c58(s32 *, s32 *, s32);

void func_020e3748(s32 arg0, u32 arg1) {
    s32 *r5;
    s32 *r4;
    s32 a;
    s32 b;
    u32 x;
    u32 t;
    u32 k;

    a = data_02138548;
    b = data_02142bd8;
    if (a == b) {
        r5 = func_020de3d0(a << 4);
        r4 = r5 + data_02138548 * 2;
        func_02107c58(r5, data_02138550, data_02138548 << 2);
        func_02107c58(r4, data_0213854c, data_02138548 << 2);
        data_02138548 = data_02138548 << 1;
        if (data_02138548 != 0x40) {
            func_020de37c(data_02138550);
        }
        data_02138550 = r5;
        data_0213854c = r4;
    }
    t = (arg1 + 0x1f) & ~0x1fU;
    k = (((data_02142bd4 >> 5) & 0x1f) + 0x21 - ((t >> 5) & 0x1f)) & 0x1f;
    t = t + (k << 5);
    data_02142bd4 += t;
    data_0213854c[data_02142bd8]   = t;
    data_02138550[data_02142bd8++] = arg0;
}
