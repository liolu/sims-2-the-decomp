/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef s32 (*Fn)(s32);
typedef struct {
    s32 v;
    u8 pad[0x1C];
} T;

extern s32 data_027e0000;
extern u32 data_027e0004;
extern T data_0213d7dc[];
extern T data_0213d7e0[];
extern T data_0213d7e4[];
extern Fn data_0211e640[];
extern Fn data_0211e648[];

s32 func_0204ecd8(void) {
    s32 cur   = data_027e0000;
    s32 r     = 0;
    u32 flags = data_0213d7e0[cur].v;

    if (flags & 1) {
        r = data_0211e640[data_0213d7dc[cur].v](data_0213d7e4[cur].v);
    } else if (flags & 2) {
        r = data_0211e648[data_0213d7dc[cur].v](data_0213d7e4[cur].v);
    }
    if (r == 0) {
        data_027e0004 &= ~(0x4000 << data_027e0000);
        data_0213d7e0[data_027e0000].v = 0;
    }
    flags                          = data_0213d7e0[data_027e0000].v;
    data_0213d7e0[data_027e0000].v = flags & ~4;
    return r;
}
