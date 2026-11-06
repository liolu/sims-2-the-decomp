/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} S16;

extern void func_020165bc(u8 *, s32);
extern void func_0203c844(s32, s32, s32, s32, s32);
extern void func_02051338(s32, s32, s32, u8 *, s32);
extern void func_02051a2c(s32);
extern void func_02051a50(s32, s32, s32);
extern void func_02051b80(S16);
extern u8 *func_02052258(s32);
extern s32 func_020c48e4(void);
extern void func_020d59bc(s32);
extern void func_ov010_0214b3a4(u8 *, u8 *, s32);
extern S16 data_ov010_02152b14;
extern u8 data_ov010_02152ee0;

static inline void stepA(u8 *arg0, s32 off) {
    u8 *r9;
    u32 r8;
    s32 r7;
    u32 r6;
    u8 *r5;
    u8 *q;
    u8 *pb;
    u32 r2;

    r9 = *(u8 **) (arg0 + 0x90);
    r6 = arg0[0x9f];
    r2 = r9[0x1e4];
    r8 = arg0[off];
    if (r2 < r9[0x1e5]) {
        r7        = r8 * 0x28;
        q         = r9 + 0x154 + r7;
        pb        = q + r6;
        q[r6]     = (*(u8 **) (r9 + 0x1c4))[r2];
        r9[0x1e4] = r9[0x1e4] + 1;
    } else {
        r7    = r8 * 0x28;
        q     = r9 + 0x154 + r7;
        q[r6] = 0xff;
        pb    = q + r6;
    }
    r5 = r9 + 0x13c + r7;
    func_ov010_0214b3a4(r9, ((u8 **) r5)[r6], *pb);
    if ((data_ov010_02152ee0 != 0 && r8 != func_020c48e4()) || (r9[r7 + 0x15b] & 1)) {
        q                = ((u8 **) r5)[r6];
        *(u32 *) (q + 4) = *(u32 *) (q + 4) & ~1;
        q                = *(u8 **) (((u8 **) r5)[r6] + 0x74);
        *(u32 *) (q + 4) = *(u32 *) (q + 4) & ~1;
    }
}

static inline void stepB(u8 *r3, u32 ix, u32 r0) {
    u8 *q;
    u8 *r2p;
    s32 m;

    if (r3[0x1ea] & 1) {
        m = ix * 0x28;
        if (!(r3[m + 0x15b] & 1)) {
            r3                 = r3 + 0x13c + m;
            r2p                = ((u8 **) r3)[r0];
            *(u32 *) (r2p + 4) = *(u32 *) (r2p + 4) & ~1;
            q                  = *(u8 **) (((u8 **) r3)[r0] + 0x74);
            *(u32 *) (q + 4)   = *(u32 *) (q + 4) & ~1;
        }
    }
}

void func_ov010_0214d18c(u8 *arg0) {
    u8 *r9;
    u32 r8;
    s32 r7;
    u32 r6;
    u8 *r5;
    u8 *q;
    u8 *pb;
    u32 ix;
    u8 *r3;
    s32 m;
    u8 *r2p;
    u32 r2;
    u32 r0;
    s32 w;
    s32 c3;
    u8 *r1p;

    switch (arg0[0x80]) {
        case 0:
            return;
        case 1:
            w = (*(u32 *) (arg0 + 4) & 0x400000) ? 1 : 0;
            if (w == 0) {
                return;
            }
            func_020d59bc(0x263);

            stepA(arg0, 0x9c);
            stepB(*(u8 **) (arg0 + 0x90), arg0[0x9c], arg0[0x9f]);
            stepA(arg0, 0x9d);
            stepB(*(u8 **) (arg0 + 0x90), arg0[0x9d], arg0[0x9f]);
            stepA(arg0, 0x9e);
            stepB(*(u8 **) (arg0 + 0x90), arg0[0x9e], arg0[0x9f]);

            arg0[0x9f] = arg0[0x9f] + 1;
            if (arg0[0x9f] < 5) {
                *(u32 *) (arg0 + 4) = *(u32 *) (arg0 + 4) & ~0x400000;
                return;
            }
            if (arg0[0x80] != 0) {
                arg0[0x80] = 0;
                arg0[0x82] = arg0[0x82] | 1;
                arg0[0x81] = 0;
            }
            func_020165bc(arg0, 0);
            *(u32 *) (arg0 + 4)                      = *(u32 *) (arg0 + 4) & 0xffbfffef;
            *(s32 *) (*(u8 **) (arg0 + 0x90) + 0x1c) = 9;
            func_02051b80(data_ov010_02152b14);
            func_02051a50(3, 0, -1);
            func_02051a2c(0xc);
            func_0203c844(0, 0, 0, 0x20, 2);
            func_02051338(0xa, 0x80, 2, func_02052258(0x6cf), 1);
            return;
        case 2:
            w = (*(u32 *) (arg0 + 4) & 0x400000) ? 1 : 0;
            if (w == 0) {
                return;
            }
            func_020d59bc(0x122);

            r9 = *(u8 **) (arg0 + 0x90);
            r6 = arg0[0x9f];
            r2 = r9[0x1e4];
            r8 = arg0[0x9c];
            if (r2 < r9[0x1e5]) {
                r7        = r8 * 0x28;
                q         = r9 + 0x154 + r7;
                pb        = q + r6;
                q[r6]     = (*(u8 **) (r9 + 0x1c4))[r2];
                r9[0x1e4] = r9[0x1e4] + 1;
            } else {
                r7    = r8 * 0x28;
                q     = r9 + 0x154 + r7;
                q[r6] = 0xff;
                pb    = q + r6;
            }
            r5 = r9 + 0x13c + r7;
            func_ov010_0214b3a4(r9, ((u8 **) r5)[r6], *pb);
            if ((data_ov010_02152ee0 != 0 && r8 != func_020c48e4()) || (r9[r7 + 0x15b] & 1)) {
                q                = ((u8 **) r5)[r6];
                *(u32 *) (q + 4) = *(u32 *) (q + 4) & ~1;
                q                = *(u8 **) (((u8 **) r5)[r6] + 0x74);
                *(u32 *) (q + 4) = *(u32 *) (q + 4) & ~1;
            }

            r3  = *(u8 **) (arg0 + 0x90);
            r2  = arg0[0x9c] * 0x28;
            r1p = r3 + r2;
            c3  = 0;
            do {
                if (r1p[0x154] != 0xff) {
                    break;
                }
                c3  = c3 + 1;
                r1p = r1p + 1;
            } while (c3 < 5);
            if (c3 >= 5) {
                q     = r3 + 0x15b;
                q[r2] = q[r2] | 4;
            }
            if (arg0[0x80] != 0) {
                arg0[0x80] = 0;
                arg0[0x82] = arg0[0x82] | 1;
                arg0[0x81] = 0;
            }
            func_020165bc(arg0, 0);
            *(u32 *) (arg0 + 4) = *(u32 *) (arg0 + 4) & 0xffbfffef;
            if (arg0[0xa0] != 1) {
                *(s32 *) (*(u8 **) (arg0 + 0x90) + 0xc) = 8;
                return;
            }
            *(s32 *) (*(u8 **) (arg0 + 0x90) + 0xc) = 3;
            arg0[0xa0]                              = 0;
            return;
    }
}
