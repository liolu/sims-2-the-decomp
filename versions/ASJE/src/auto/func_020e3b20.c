/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"
extern s32 data_0213891c;
extern s32 data_02142f78;
extern s32 *data_02138924;
extern s32 *data_02138920;
extern u32 data_02142f74;
s32 *func_020de7a8(s32);
void func_020de754(s32 *);
void func_02108030(s32 *, s32 *, s32);

void func_020e3b20(s32 arg0, u32 arg1) {
    s32 *r5;
    s32 *r4;
    s32 a;
    s32 b;
    u32 x;
    u32 t;
    u32 k;

    a = data_0213891c;
    b = data_02142f78;
    if (a == b) {
        r5 = func_020de7a8(a << 4);
        r4 = r5 + data_0213891c * 2;
        func_02108030(r5, data_02138924, data_0213891c << 2);
        func_02108030(r4, data_02138920, data_0213891c << 2);
        data_0213891c = data_0213891c << 1;
        if (data_0213891c != 0x40) {
            func_020de754(data_02138924);
        }
        data_02138924 = r5;
        data_02138920 = r4;
    }
    t = (arg1 + 0x1f) & ~0x1fU;
    k = (((data_02142f74 >> 5) & 0x1f) + 0x21 - ((t >> 5) & 0x1f)) & 0x1f;
    t = t + (k << 5);
    data_02142f74 += t;
    data_02138920[data_02142f78]   = t;
    data_02138924[data_02142f78++] = arg0;
}
