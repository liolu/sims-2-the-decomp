/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02050af0(u8 *, s32);
void func_0200367c(void *, s32);
s32 func_0204ca70(s32);
void func_020081f0(void *, void *, s32, s32, s32);

static inline void tail_common(u8 *arg0) {
    *(s32 *) (arg0 + 0x2dc) = -1;
    *(s32 *) (arg0 + 0x2e0) = -1;
    *(u8 *) (arg0 + 0x2f0)  = 6;
    if (*(u8 *) (arg0 + 0x2f4) != 0) {
        return;
    }
    if (*(u8 *) (arg0 + 0x2f1) == 1) {
        func_02050af0(arg0 + 0x308, 0);
    } else {
        func_02050af0(arg0 + 0x320, 0);
    }
    func_0200367c(arg0, 0x69f);
}

void func_0200498c(u8 *arg0) {
    // DECL-BEGIN
    u16 r0;
    s32 r3;
    u16 h;
    u8 *e;
    s32 found;
    u16 ip;
    u16 zi;
    u8 r2;
    u16 r1;
    s32 r6;
    u8 *q;
    u8 *p;
    u32 hx;
    // DECL-END
    u16 cnt[20];

    found = 0;
    r2    = 0;
    do {
        if (*(s32 *) (arg0 + r2 * 0x14 + 0x188) != 0) {
            found = 1;
            break;
        }
        r2 = r2 + 1;
    } while (r2 < 10);

    if (found == 0) {
        tail_common(arg0);
        return;
    }

    r6 = r3 = -1;
    for (zi = 0; zi < 19; zi++) {
        cnt[zi] = 0;
    }
    for (r0 = 0; r0 < 10; r0++) {
        p = *(u8 **) (arg0 + r0 * 0x14 + 0x188);
        if (p != 0) {
            h                          = *(u16 *) p;
            hx                         = h * 2;
            *(u16 *) ((u8 *) cnt + hx) = *(u16 *) ((u8 *) cnt + hx) + 1;
            if (*(u16 *) ((u8 *) cnt + hx) == 1) {
                r6 = r0;
            }
        }
    }
    if (r6 != -1) {
        p = *(u8 **) (arg0 + r6 * 0x14 + 0x188);
        if (cnt[*(u16 *) p] == 1) {
            r3 = r6;
        } else {
            r6 = -1;
            r3 = 0;
        }
    }
    for (r1 = 0; r1 < 10; r1++) {
        e = arg0 + r1 * 0x14;
        if (*(u8 **) (e + 0x188) != 0) {
            for (ip = 0; ip < 10; ip++) {
                q = *(u8 **) (arg0 + ip * 0x14 + 0xc0);
                if (q != 0) {
                    if (*(u16 *) q == **(u16 *volatile *) (e + 0x188)) { // volatile: target reloads the slot pointer (ldr
                                                                         // r5,[r2,#0x188]) after the first compare
                        r6 = r1;
                        r3 = r1;
                        break;
                    }
                }
            }
        }
    }
    do {
        if (r6 == -1) {
            r3 = func_0204ca70(9);
        }
    } while (*(s32 *) (arg0 + r3 * 0x14 + 0x188) == 0);
    func_020081f0(arg0, arg0 + 0x188, r3 & 0xff, 0, 1);
    tail_common(arg0);
}
