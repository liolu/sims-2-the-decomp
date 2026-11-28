/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef s32 (*Fn)(s32);
typedef struct {
    s32 v;
    u8 pad[0x1C];
} T;

extern s32 data_027e0000;
extern u32 data_027e0004;
extern T data_0213d91c[];
extern T data_0213d920[];
extern T data_0213d924[];
extern Fn data_0211e77c[];
extern Fn data_0211e784[];

s32 func_0204ed50(void) {
    s32 cur   = data_027e0000;
    s32 r     = 0;
    u32 flags = data_0213d920[cur].v;

    if (flags & 1) {
        r = data_0211e77c[data_0213d91c[cur].v](data_0213d924[cur].v);
    } else if (flags & 2) {
        r = data_0211e784[data_0213d91c[cur].v](data_0213d924[cur].v);
    }
    if (r == 0) {
        data_027e0004 &= ~(0x4000 << data_027e0000);
        data_0213d920[data_027e0000].v = 0;
    }
    flags                          = data_0213d920[data_027e0000].v;
    data_0213d920[data_027e0000].v = flags & ~4;
    return r;
}
