/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e2f4;
extern void func_020a88e4(u8 *a, u8 *b);
extern void func_020d8934(void);
extern void func_020a62d4(u8 *a);
extern void func_020d4b70(void);
extern void func_020d8b78(void);

void func_020a4554(u8 *arg0) {
    u8 *o;
    u8 *base;
    s32 r2;
    u8 *p;
    s32 r0;
    s32 ip;
    s32 v;

    o = arg0;
    if ((o[0xa52] & 0x20) == 0) {
        o[0xa52] |= 1;
    }
    func_020a88e4(o, o + 0x8d2);
    if ((o[0xa52] & 0x20) == 0) {
        if (o[0xa6c] & 1) {
            o[0xa52] &= ~8;
            o[0xa52] = o[0xa52] | 0x20;
            if ((o[0xa52] & 8) == 0) {
                do {
                    func_020d8934();
                } while ((o[0xa52] & 8) == 0);
            }
            o[0xa52] = o[0xa52] & ~0x20;
            o[0xa6c] = o[0xa6c] & ~1;
        }
        o[0xa52] = o[0xa52] & ~1;
    }

    base = *(u8 **) &data_0213e2f4;
    r2   = *(s32 *) (base + 0x4804);
    if (r2 != o[0xa5f]) {
        r0                               = base[0x5b] + 5;
        *(s32 *) (base + 0x2000 + 0xf60) = *(s32 *) (base + 0x2000 + 0xf60) + r0;
        p                                = base + 0x2f60;
        ip                               = *(s32 *) (base + 0x2000 + 0xf60);
        if (ip > 0xf423f) {
            *(s32 *) p = 0xf423f;
        } else if (ip < 0) {
            *(s32 *) p = 0;
        }
        if (r0 > 0) {
            p[0xc]             = 1;
            *(s32 *) (p + 0x4) = *(s32 *) (p + 0x4) + r0;
            if (*(s32 *) (p + 0x4) > 0xf423f || *(s32 *) (p + 0x4) < 0) {
                *(s32 *) (p + 0x4) = 0xf423f;
            }
        } else {
            *(s32 *) (p + 0x8) = *(s32 *) (p + 0x8) - r0;
            if (*(s32 *) (p + 0x8) > 0xf423f || *(s32 *) (p + 0x8) < 0) {
                *(s32 *) (p + 0x8) = 0xf423f;
            }
        }
        o[0xa5f] = (u8) r2;
    }
    func_020a62d4(o);
    if ((o[0xa52] & 0x20) == 0) {
        o[0xa52] |= 1;
    }
    func_020d4b70();
    func_020d8b78();
    if ((o[0xa52] & 0x20) != 0) {
        return;
    }
    if (o[0xa6c] & 1) {
        o[0xa52] &= ~8;
        o[0xa52] = o[0xa52] | 0x20;
        if ((o[0xa52] & 8) == 0) {
            do {
                func_020d8934();
            } while ((o[0xa52] & 8) == 0);
        }
        o[0xa52] = o[0xa52] & ~0x20;
        o[0xa6c] = o[0xa6c] & ~1;
    }
    o[0xa52] = o[0xa52] & ~1;
}
