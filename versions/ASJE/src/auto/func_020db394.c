/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

extern M2C_UNK func_02107fcc(void *, s32, u32);
extern M2C_UNK func_020fad58(void *, u32);

typedef struct {
    u8 unk_0[0x24];
    s32 cnt;
} SubS;

static inline void incr(SubS *x) {
    x->cnt = x->cnt + 1;
}

void func_020db394(u8 *arg0) {
    u8 *dst;
    u8 *dst2;
    u32 n;
    s32 r4;
    s32 off;
    u16 *src;
    u32 r2;
    u32 r1;

    n    = *(u32 *) (arg0 + 0x9C);
    dst  = *(u8 **) (arg0 + 0x94);
    dst2 = *(u8 **) (arg0 + 0x98);
    if (*(s32 *) (arg0 + 0xA4) == 0) {
        n   = n >> 2;
        off = n * *(s32 *) (arg0 + 0xA0);
        incr((SubS *) (arg0 + 0x7C));
        dst  = dst + off;
        dst2 = dst2 + off;
        if (*(s32 *) (arg0 + 0xA0) >= 4) {
            *(s32 *) (arg0 + 0xA0) = 0;
        }
    }
    if (*(s32 *) (arg0 + 0x64) == 0) {
        goto flush;
    }
    if (*(s32 *) (arg0 + 0x84) != 1) {
        goto loop;
    }
flush:
    func_02107fcc(dst, 0, n);
    func_02107fcc(dst2, 0, n);
    func_020fad58(dst, n);
    func_020fad58(dst2, n);
    return;
loop:
    if (*(u16 **) (arg0 + 0x38) == *(u16 **) (arg0 + 0x30)) {
        *(u16 **) (arg0 + 0x38) = *(u16 **) (arg0 + 0x2C);
    }
    src = *(u16 **) (arg0 + 0x38);
    r2  = *(u32 *) (arg0 + 0x40);
    r4  = (s32) (*(s32 *) (arg0 + 0x30) - (s32) src) >> 1;
    if ((u32) r4 > n) {
        r4 = (s32) n;
    }
    r1 = r2 >> 1;
    if ((u32) r4 > r1) {
        if (r2 == 0) {
            *(s32 *) (arg0 + 0x5C) = 1;
            goto flush;
        }
        r4 = (s32) r1;
    }
    if (*(s32 *) (arg0 + 0x74) == 8) {
        u8 *end = dst + r4;
        u8 *a   = dst;
        u8 *b   = dst2;
        do {
            u16 v = *src;
            src += 1;
            *a = (u8) (v >> 8);
            a += 1;
            *b = (u8) v;
            b += 1;
        } while (a < end);
    } else {
        u8 *end = dst + r4;
        u8 *a   = dst;
        u8 *b   = dst2;
        do {
            u32 v = *(u32 *) src;
            src += 2;
            *(u16 *) a = (u16) (v >> 16);
            a += 2;
            *(u16 *) b = (u16) v;
            b += 2;
        } while (a < end);
    }
    *(u32 *) (arg0 + 0x40)  = *(u32 *) (arg0 + 0x40) - (r4 * 2);
    *(u16 **) (arg0 + 0x38) = *(u16 **) (arg0 + 0x38) + r4;
    func_020fad58(dst, (u32) r4);
    func_020fad58(dst2, (u32) r4);
    dst  = dst + r4;
    dst2 = dst2 + r4;
    n    = n - r4;
    if (n == 0) {
        *(s32 *) (arg0 + 0xA4) = 0;
        return;
    }
    goto loop;
}
