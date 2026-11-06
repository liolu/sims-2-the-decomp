/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} H;

u8 *func_ov010_0214ef60(u8 *, s32 *);
s32 func_0204cbb4(s32, s32);
void func_ov010_0214b244(u8 *, s32);
void func_02051b80(H);
void func_02051a50(s32, s32, s32);
void func_02051a2c(s32);
void func_0203c844(s32, s32, s32, s32, s32);
u8 *func_02052258(s32);
void func_02051338(s32, s32, s32, u8 *, s32);
s32 func_ov010_0214ee58(u8 *, s32 *, s32 *);
s32 func_ov010_0214eb8c(u8 *, s32 *, s32 *);
void func_ov010_0214e994(u8 *, s32 *, s32 *);
void func_ov010_0214b108(u8 *, s32);
void func_ov010_0214b3a4(u8 *, u8 *, s32);
u16 func_020c48e4(void);
extern H data_ov010_02152b14;
extern u8 data_ov010_02152ee0;

void func_ov010_0214f084(u8 *arg0) {
    u8 f[8];
    s32 a;
    s32 b;
    s32 c;
    u8 *x;
    s32 t;
    s32 i;
    s32 busy;
    s32 j;
    u8 *p;
    u8 *q;
    u8 *r;
    s32 hi;
    s32 m;
    s32 *w;
    s32 *z;
    s32 v;
    u8 *pp;

    t = arg0[0x1e6];
    x = 0;
    a = 0;
    switch (*(s32 *) (arg0 + 0xc)) {
        case 0:
            pp = f;
            i  = 0;
            p  = arg0;
            for (; i < 6; i++) {
                busy = 0;
                if ((p[0x58] & 1) == 0) {
                    for (j = 0; j < 4; j++) {
                        if (((u8 **) (p + 0x38))[j][0x80] == 0) {
                            busy = 1;
                            break;
                        }
                    }
                }
                if (busy != 0) {
                    *pp = 1;
                } else {
                    *pp = 0;
                    a   = a + 1;
                }
                p += 0x2c;
                pp++;
            }
            if (a < 6) {
                if (*(s32 *) (arg0 + 0x1c) != 6) {
                    x = func_ov010_0214ef60(arg0, &a);
                }
                if (x == 0) {
                    q = f;
                    r = arg0 + t;
                    for (i = 0; i < 6; i++) {
                        if (*q != 0) {
                            a = r[0x53];
                            if (a > 0) {
                                a = i;
                                break;
                            }
                        }
                        q++;
                        r += 0x2c;
                    }
                    if (i >= 6) {
                        do {
                            a = func_0204cbb4(0, 5);
                            if (f[a] != 0) {
                                x = (u8 *) 1;
                            }
                        } while (x == 0);
                    }
                }
                func_ov010_0214b244(arg0, a);
                q                      = arg0 + 0x159;
                v                      = q[t * 0x28];
                q[t * 0x28]            = (v & ~0xf) | ((u8) a & 0xf);
                *(s32 *) (arg0 + 0x18) = 0x1e;
            } else {
                *(s32 *) (arg0 + 0x18) = 0;
            }
            if (*(s32 *) (arg0 + 0x1c) == 6) {
                *(s32 *) (arg0 + 0xc) = 2;
            } else {
                *(s32 *) (arg0 + 0xc) = 4;
            }
            return;
        case 2:
            v                      = *(s32 *) (arg0 + 0x18);
            *(s32 *) (arg0 + 0x18) = v - 1;
            if (v == 0) {
                arg0[0x1ea] |= 4;
                *(s32 *) (arg0 + 0xc) = (s32) x;
            }
            return;
        case 4:
            v                      = *(s32 *) (arg0 + 0x18);
            *(s32 *) (arg0 + 0x18) = v - 1;
            if (v != 0) {
                return;
            }
            func_02051b80(data_ov010_02152b14);
            func_02051a50(3, 0, -1);
            func_02051a2c(0xc);
            func_0203c844(0, 0, 0, 0x20, 2);
            func_02051338(0xa, 0x80, 2, func_02052258(0x6d0), 1);
            if (func_ov010_0214ee58(arg0, &b, &c) == 0) {
                if (func_ov010_0214eb8c(arg0, &b, &c) == 0) {
                    func_ov010_0214e994(arg0, &b, &c);
                }
            }
            q           = arg0 + 0x159;
            v           = q[t * 0x28];
            q[t * 0x28] = (v & ~0xf0) | (((u8) c & 0xf) << 4);
            func_ov010_0214b108(arg0, b);
            *(s32 *) (arg0 + 0xc) = 9;
            return;
        case 7:
            m  = t * 0x28;
            hi = (u32) (arg0[m + 0x159] << 24) >> 28;
            if (arg0[0x1e4] < arg0[0x1e5]) {
                v           = (*(u8 **) (arg0 + 0x1c4))[arg0[0x1e4]];
                q           = arg0 + 0x154 + m;
                r           = q + hi;
                q[hi]       = v;
                arg0[0x1e4] = arg0[0x1e4] + 1;
            } else {
                q     = arg0 + 0x154 + m;
                q[hi] = 0xff;
                r     = q + hi;
            }
            w = (s32 *) (arg0 + 0x13c + m);
            func_ov010_0214b3a4(arg0, (u8 *) ((s32 **) w)[hi], *r);
            if ((data_ov010_02152ee0 != 0 && t != func_020c48e4()) || (arg0[m + 0x15b] & 1)) {
                z = ((s32 **) w)[hi];
                z[1] &= ~1;
                z = ((s32 **) w)[hi];
                z = (s32 *) z[0x74 / 4];
                z[1] &= ~1;
            }
            q = arg0 + m;
            j = 0;
            do {
                if (q[0x154] != 0xff) {
                    break;
                }
                j++;
                q++;
            } while (j < 5);
            if (j >= 5) {
                q = arg0 + 0x15b;
                q[m] |= 4;
            }
            *(s32 *) (arg0 + 0xc)  = 8;
            *(s32 *) (arg0 + 0x18) = 0x1e;
            return;
        case 8:
            v                      = *(s32 *) (arg0 + 0x18);
            *(s32 *) (arg0 + 0x18) = v - 1;
            if (v != 0) {
                return;
            }
            m = t * 0x28;
            p = arg0 + m;
            q = arg0 + 0x15b;
            q[m] &= ~2;
            do {
                if ((arg0[0x1ea] & 1) && (p[0x15b] & 1) == 0) {
                    r = p + (s32) x * 4;
                    z = *(s32 **) (r + 0x13c);
                    z[1] &= ~1;
                    z = *(s32 **) (r + 0x13c);
                    z = (s32 *) z[0x74 / 4];
                    z[1] &= ~1;
                }
                x = x + 1;
            } while ((s32) x < 5);
            v = t + 1;
            if (v > 2) {
                v = 0;
            }
            arg0[0x1ea] |= 2;
            arg0[0x1e6]           = v;
            *(s32 *) (arg0 + 0xc) = 0;
            func_02051b80(data_ov010_02152b14);
            func_02051a50(3, 0, -1);
            func_02051a2c(0xc);
            func_0203c844(0, 0, 0, 0x20, 2);
            func_02051338(0xa, 0x80, 2, func_02052258(0x6cf), 1);
            return;
        case 9:
        default:
            return;
    }
}
