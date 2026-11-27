/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fb168(s32 a);
s32 func_020fb17c(s32 a);
void *func_020ec964(void *a, u32 b, u16 c);
void func_020ecf00(void *a, void *b, s32 c);
void func_020ec728(void *a, s32 b);

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

extern s32 data_0211e638[];
extern G data_02139e9c;
extern u8 data_02139ea4[];
extern u8 data_02139f04;
extern u8 data_02139f24;

void func_02046668(void) {
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

    a   = func_020fb168(0);
    lim = func_020fb17c(0);
    nxt = (a + 3) & ~3;
    cur = nxt;
    for (i = 0; (u32) i < 3; i++) {
        nxt += data_0211e638[i] & ~3;
        sz  = nxt - cur;
        blk = func_020ec964((void *) cur, sz, 2);
        func_020ecf00(data_02139ea4 + i * 0x20, blk, 4);
        func_020ec728(blk, 1);
        data_02139e9c.e[i].blk   = (s32) blk;
        data_02139e9c.e[i].start = cur;
        data_02139e9c.e[i].end   = nxt;
        data_02139e9c.e[i].size  = sz;
        data_02139e9c.count += 1;
        cur = nxt;
    }
    top = lim & ~3;
    sz2 = top - nxt;
    blk = func_020ec964((void *) nxt, sz2, 2);
    func_020ecf00(&data_02139f04, blk, 4);
    func_020ec728(blk, 1);
    data_02139e9c.e[3].blk   = (s32) blk;
    data_02139e9c.e[3].start = nxt;
    data_02139e9c.e[3].end   = top;
    data_02139e9c.e[3].size  = sz2;
    data_02139e9c.count += 1;
    a   = func_020fb168(4);
    lim = func_020fb17c(4);
    c3  = (a + 3) & ~3;
    t3  = lim & ~3;
    sz3 = t3 - c3;
    blk = func_020ec964((void *) c3, sz3, 2);
    func_020ecf00(&data_02139f24, blk, 4);
    func_020ec728(blk, 1);
    data_02139e9c.e[4].blk   = (s32) blk;
    data_02139e9c.e[4].start = c3;
    data_02139e9c.e[4].end   = t3;
    data_02139e9c.e[4].size  = sz3;
    data_02139e9c.count += 1;
}
