/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 data;
    s32 pos;
    s32 f8;
    u16 vol;
    u16 fe;
    s32 f10;
    s32 f14;
} Chan;

typedef struct {
    u8 pad[0x5c];
    s16 l;
    s16 r;
} Mix;

extern Chan data_02142408[];
extern Mix data_02142d08;

void func_020d6ff0(s32 idx) {
    u32 vol;
    s32 v;
    Chan *c;
    u32 d;
    s32 s;

    c = &data_02142408[idx];
    d = c->data;
    if (d == 0) {
        return;
    }
    if ((d & 0x80000000) != 0) {
        s   = ((s16 *) (d << 1))[c->pos >> 16];
        vol = ((u32) c->vol << 8) >> 16;
    } else {
        s   = ((s8 *) d)[c->pos >> 16];
        vol = c->vol;
    }
    s = s * vol;
    v = (data_02142d08.l + s) >> 7;
    if (v < -0x8000) {
        data_02142d08.l = -0x8000;
    } else if (v >= 0x8000) {
        data_02142d08.l = 0x7fff;
    } else {
        data_02142d08.l = v;
    }
    v = (data_02142d08.r + s) >> 7;
    if (v < -0x8000) {
        data_02142d08.r = -0x8000;
    } else if (v >= 0x8000) {
        data_02142d08.r = 0x7fff;
    } else {
        data_02142d08.r = v;
    }
    c->data = 0;
}
