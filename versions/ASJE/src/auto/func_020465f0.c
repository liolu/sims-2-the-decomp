/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fb02c(s32 a);
s32 func_020fb040(s32 a);
void *func_020ec828(void *a, u32 b, u16 c);
void func_020ecdc4(void *a, void *b, s32 c);
void func_020ec5ec(void *a, s32 b);

typedef struct {
    s32 blk;
    s32 pad[4];
    s32 start;
    s32 end;
    s32 size;
} E;

typedef struct {
    s32 count;
    E e[5];
} G;

extern s32 data_0211e4fc[];
extern G data_02139d5c;
extern u8 data_02139d64[];
extern u8 data_02139dc4;
extern u8 data_02139de4;

void func_020465f0(void) {
    s32 sz2;
    s32 a;
    s32 cur;
    s32 nxt;
    s32 i;
    s32 sz;
    s32 top;
    s32 lim;
    s32 c3;
    s32 sz3;
    s32 t3;
    void *blk;

    a   = func_020fb02c(0);
    lim = func_020fb040(0);
    nxt = (a + 3) & ~3;
    cur = nxt;
    for (i = 0; (u32) i < 3; i++) {
        nxt += data_0211e4fc[i] & ~3;
        sz  = nxt - cur;
        blk = func_020ec828((void *) cur, sz, 2);
        func_020ecdc4(data_02139d64 + i * 0x20, blk, 4);
        func_020ec5ec(blk, 1);
        data_02139d5c.e[i].blk   = (s32) blk;
        data_02139d5c.e[i].start = cur;
        data_02139d5c.e[i].end   = nxt;
        data_02139d5c.e[i].size  = sz;
        data_02139d5c.count += 1;
        cur = nxt;
    }
    top = lim & ~3;
    sz2 = top - nxt;
    blk = func_020ec828((void *) nxt, sz2, 2);
    func_020ecdc4(&data_02139dc4, blk, 4);
    func_020ec5ec(blk, 1);
    data_02139d5c.e[3].blk   = (s32) blk;
    data_02139d5c.e[3].start = nxt;
    data_02139d5c.e[3].end   = top;
    data_02139d5c.e[3].size  = sz2;
    data_02139d5c.count += 1;
    a   = func_020fb02c(4);
    lim = func_020fb040(4);
    c3  = (a + 3) & ~3;
    t3  = lim & ~3;
    sz3 = t3 - c3;
    blk = func_020ec828((void *) c3, sz3, 2);
    func_020ecdc4(&data_02139de4, blk, 4);
    func_020ec5ec(blk, 1);
    data_02139d5c.e[4].blk   = (s32) blk;
    data_02139d5c.e[4].start = c3;
    data_02139d5c.e[4].end   = t3;
    data_02139d5c.e[4].size  = sz3;
    data_02139d5c.count += 1;
}
