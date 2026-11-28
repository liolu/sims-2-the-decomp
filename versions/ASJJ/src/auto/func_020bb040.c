/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139a94;
extern void func_020d50f0(s32 a);

void func_020bb040(u8 *arg0) {
    volatile s32 fr[20];
    u8 *g;
    u8 *o;
    s32 chg;
    s32 r3;
    s32 ip;
    s32 v, w, x;
    s32 p, q, r;
    s32 *t;

    o = arg0;
    if ((u32) * (s32 *) (o + 0x264) >= 10) {
        *(s32 *) (o + 0x264) = 0;
    }
    switch (*(s32 *) (o + 0x264)) {
        case 1:
            v     = *(s32 *) (&data_02139a94 + 0x0);
            fr[2] = v;
            if (*(volatile s32 *) (o + 0x24c) != v ||
                (v = *(s32 *) (&data_02139a94 + 0x4), fr[3] = v, *(volatile s32 *) (o + 0x250) != v) ||
                (v = *(s32 *) (&data_02139a94 + 0x8), fr[4] = v, *(volatile s32 *) (o + 0x254) != v)) {
                chg = 1;
            } else {
                chg = 0;
            }
            if (chg != 0) {
                v                  = *(volatile s32 *) (o + 0x24c);
                g                  = &data_02139a94;
                fr[5]              = v;
                *(s32 *) (g + 0x0) = v;
                v                  = *(volatile s32 *) (o + 0x250);
                fr[6]              = v;
                *(s32 *) (g + 0x4) = v;
                v                  = *(volatile s32 *) (o + 0x254);
                fr[7]              = v;
                *(s32 *) (g + 0x8) = v;
                *(u8 *) (g + 0x64) = 1;
            }
            r3    = 0;
            v     = *(s32 *) (&data_02139a94 + 0xc);
            ip    = r3;
            fr[8] = v;
            if (*(volatile s32 *) (o + 0x258) == v) {
                v     = *(s32 *) (&data_02139a94 + 0x10);
                fr[9] = v;
                if (*(volatile s32 *) (o + 0x25c) == v) {
                    ip = 1;
                }
            }
            if (ip != 0) {
                v      = *(s32 *) (&data_02139a94 + 0x14);
                fr[10] = v;
                if (*(volatile s32 *) (o + 0x260) == v) {
                    r3 = 1;
                }
            }
            if (r3 == 0) {
                v                   = *(volatile s32 *) (o + 0x258);
                g                   = &data_02139a94;
                fr[11]              = v;
                *(s32 *) (g + 0xc)  = v;
                v                   = *(volatile s32 *) (o + 0x25c);
                fr[12]              = v;
                *(s32 *) (g + 0x10) = v;
                v                   = *(volatile s32 *) (o + 0x260);
                fr[13]              = v;
                *(s32 *) (g + 0x14) = v;
                *(u8 *) (g + 0x64)  = 1;
            }
            break;
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            break;
    }
    t = *(s32 **) (o + 0x23c);
    if (t != 0) {
        p                    = *(s32 *) (o + 0x248);
        fr[14]               = p;
        q                    = *(s32 *) (o + 0x244);
        fr[15]               = q;
        r                    = *(s32 *) (o + 0x240);
        fr[16]               = r;
        v                    = t[0] + r;
        fr[17]               = v;
        w                    = t[1] + q;
        fr[18]               = w;
        x                    = t[2] + p;
        fr[19]               = x;
        *(s32 *) (o + 0x288) = v;
        v                    = fr[18];
        fr[0]                = v;
        *(s32 *) (o + 0x28c) = v;
        v                    = fr[19];
        fr[1]                = v;
        *(s32 *) (o + 0x290) = v;
    }
    *(u8 *) (o + 0x2ba)  = 0;
    *(u16 *) (o + 0x2a8) = 0;
    func_020d50f0(*(s32 *) (o + 0x2c0));
    *(s32 *) (o + 0x2c0) = -1;
}
