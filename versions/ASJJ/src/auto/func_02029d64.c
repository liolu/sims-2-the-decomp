/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Obj {
    u8 pad0[4];
    u8 *p4;
    u8 pad8[0x28];
    u8 *src;
    u8 *dst;
    u8 pad38[0x10];
    u32 pal;
} Obj;

void func_020bb91c(u8 *, s32, u8 *, s32, s32);
u8 *func_02044580(s32);
void func_020bb824(u8 *, s32, u8 *, s32, s32, s32);

void func_02029d64(Obj *o) {
    s32 i;
    u8 *d;
    s32 j;
    s32 doff;
    s32 off;

    for (i = 0, doff = 0, off = 0; i < 32; i++, doff += 32, off += 48) {
        d = o->dst + doff;
        for (j = 0; j < 48; j += 2) {
            *d++ = ((off + o->src)[(u32) (j + 1)] << 4) | (off + o->src)[j];
        }
    }
    func_020bb91c(o->p4 + 0x1a4, 0, o->dst, 0x400, 0);
    if (o->pal != o->src[0x605]) {
        u8 *p = func_02044580(0x178c) + o->src[0x605] * 32;
        func_020bb824(o->p4 + 0x1a4, 0, p, 0x20, 0, 0);
        o->pal = o->src[0x605];
    }
}
