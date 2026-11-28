/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e0a8;
extern void *func_020468a0(s32, s32, s32);
extern void func_020462e0(void *, void *, s32);
extern void func_02046398(void *, s32, s32);

static inline void cz(void *d, void *src, s32 n) {
    if (src != NULL) {
        func_020462e0(d, src, n);
    } else {
        func_02046398(d, 0, n);
    }
}

s32 func_02054048(u8 *arg0, s32 unused, s32 arg2) {
    u16 hs[4];
    volatile s32 vs[8];
    s32 f8;
    s32 f1c;
    s32 f20;
    s32 f24;
    u8 *r4;
    u8 *r5;
    s32 *q;
    s32 t;
    s32 t0;
    u8 n;
    s32 idx;

    f1c   = ((s32) * (s16 *) (arg0 + 0)) << 12;
    vs[5] = f1c;
    f20   = ((s32) * (s16 *) (arg0 + 2)) << 12;
    vs[6] = f20;
    r4    = (u8 *) (s32) * (s16 *) (arg0 + 4);
    f24   = ((s32) r4) << 12;
    vs[7] = f24;
    r5    = data_0213e0a8 + 0x6C;
    hs[0] = arg0[0xA];
    hs[1] = arg0[0xC];
    hs[2] = arg0[0xE];
    hs[3] = arg0[0x10];
    f8    = ((u32) arg0[8]) << 12;
    vs[0] = f8;
    r4    = func_020468a0(0x4C, 3, 4);
    if (r4 != NULL) {
        t0                  = vs[0];
        t                   = vs[5];
        vs[1]               = t0;
        vs[2]               = t;
        *(s32 *) (r4 + 0)   = t;
        t                   = vs[6];
        vs[3]               = t;
        *(s32 *) (r4 + 4)   = t;
        t                   = vs[7];
        vs[4]               = t;
        *(s32 *) (r4 + 8)   = t;
        *(s32 *) (r4 + 0xC) = vs[1];
        q                   = (s32 *) (r4 + 0x28);
        do {
            q++;
        } while (q != (s32 *) (r4 + 0x40));
        *(u16 *) (r4 + 0x40) = arg2;
        cz(r4 + 0x42, hs, 8);
        func_02046398(r4 + 0x10, 0, 0x18);
    }
    n                                        = r5[0x80];
    r5[0x80]                                 = n + 1;
    *(void **) (r5 + n * 4)                  = r4;
    idx                                      = (s32) r5[0x80] - 1;
    *(u8 *) (*(u8 **) (r5 + idx * 4) + 0x4A) = idx;
    return 0;
}
