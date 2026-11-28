/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020117e8();
u8 *func_02014eac();
void func_02018acc(void *);
void func_02019cdc(void *);
void func_0201c990(void *);
void func_0201d0ac(void *);
void func_0202693c(void *);
void func_02026b70(void *);
void func_02027650(void *);
void func_020286c4(void *);
s32 func_0204c8b0(s32);
void func_02083ce8(void *, s32);
u8 *func_0208af58();
extern u8 *data_02139e64;
extern u8 *data_0213e2f4;

s32 func_0202d9fc(u8 *arg0, s32 arg1, u8 *arg2) {
    volatile s32 fr[8];
    u8 o20[0x30];
    u8 o50[0x34];
    u8 o84[0x1c];
    u8 oA0[0x3c];
    struct {
        u8 a[0x24];
        u8 *p;
    } soDC;
    u8 o104[0x1c];
    u8 o120[0x4c];
    s32 nz, acc, idx, cnt;
    s32 t;
    s32 c;
    u8 *g;
    s16 hp;
    u8 *e;
    u8 *q;
    u8 *r;

    switch (arg1) {
        case 0xa:
            func_02019cdc(o20);
            func_0202693c(o120);
            func_0201c990(o50);
            func_02026b70(o84);
            func_0201d0ac(oA0);
            func_020286c4(soDC.a);
            func_02027650(o104);
            func_020117e8(arg2, 0x26, o84, 0);
            *(s16 *) (oA0 + 0x30) = 0;
            oA0[0x33]             = 1;
            *(u8 **) (oA0 + 0x20) = *(u8 **) (arg0 + 4);
            oA0[0x38]             = 1;
            func_020117e8(arg2, 3, oA0, 0);
            *(s16 *) ((u8 *) &soDC.p + 0x18) = 0x3c;
            *(u8 **) (o104 + 0x10)           = *(u8 **) (arg0 + 4);
            func_020117e8(arg2, 0x21, o104, 0);
            *(s16 *) (soDC.a + 0x12) = 0x172;
            func_020117e8(arg2, 0x2d, soDC.a, 0);
            *(s16 *) (soDC.a + 0x12) = 0x2a0;
            soDC.p                   = arg0 + 0x28;
            func_020117e8(arg2, 0x2d, soDC.a, 0);
            *(u8 **) (o120 + 0x10)           = *(u8 **) (arg0 + 4);
            *(s16 *) ((u8 *) &soDC.p + 0x3c) = 0x1e;
            func_020117e8(arg2, 8, o120, 0);
            *(s16 *) (soDC.a + 0x12) = 0x10f;
            func_020117e8(arg2, 0x2d, soDC.a, 0);
            *(s16 *) (oA0 + 0x30) = 0x29;
            oA0[0x38]             = 0;
            func_020117e8(arg2, 3, oA0, 0);
            *(s16 *) (oA0 + 0x30) = 0xc8;
            func_020117e8(arg2, 3, oA0, 0);
            *(s16 *) (oA0 + 0x30) = 0x18;
            *(u8 **) (oA0 + 0x20) = arg2;
            oA0[0x33]             = 0;
            func_020117e8(arg2, 3, oA0, 0);
            e                     = *(u8 **) (arg0 + 4);
            r                     = e + 0x78;
            t                     = *(s32 *) (e + 0x78);
            fr[2]                 = t;
            *(s32 *) (o20 + 0x10) = t;
            t                     = *(s32 *) (r + 4);
            fr[3]                 = t;
            *(s32 *) (o20 + 0x14) = t;
            t                     = *(s32 *) (r + 8);
            fr[4]                 = t;
            *(s32 *) (o20 + 0x18) = t;
            func_020117e8(arg2, 0x10, o20, 0);
            fr[0]                 = 0x1000;
            fr[1]                 = 0x1000;
            *(s32 *) (o50 + 0x24) = 0x1000;
            q                     = func_02014eac(*(u8 **) (arg0 + 4), arg2 + 0x78);
            t                     = *(s32 *) (q + 4);
            fr[5]                 = t;
            *(s32 *) (o50 + 0x10) = t;
            r                     = q + 4;
            t                     = *(s32 *) (r + 4);
            fr[6]                 = t;
            *(s32 *) (o50 + 0x14) = t;
            t                     = *(s32 *) (r + 8);
            fr[7]                 = t;
            *(s32 *) (o50 + 0x18) = t;
            func_020117e8(arg2, 0x1b, o50, 0);
            func_02018acc(o104);
            func_02018acc(soDC.a);
            func_02018acc(oA0);
            func_02018acc(o84);
            func_02018acc(o50);
            func_02018acc(o120);
            func_02018acc(o20);
            return 2;
        case 0x3c:
            if (arg0[0x2c] != 0) {
                acc = 0;
                do {
                    nz  = 0;
                    idx = 0;
                    cnt = *(s32 *) (data_0213e2f4 + 0x215c);
                    if (cnt > 0) {
                        do {
                            c = ((u16 *) (data_0213e2f4 + 0x28))[idx];
                            if ((c >= 0x12d && c <= 0x12f) || c == 0x13e) {
                                hp = *(s16 *) (func_0208af58() + 0xe);
                                nz = 1;
                                acc += hp + (hp >> 1);
                                func_02083ce8(data_0213e2f4 + 0x18, idx);
                                break;
                            }
                            idx += 1;
                        } while (idx < cnt);
                    }
                } while (nz != 0);
                g                             = data_0213e2f4;
                e                             = g + 0x2f60;
                *(s32 *) (g + 0x2000 + 0xf60) = *(s32 *) (g + 0x2000 + 0xf60) + acc;
                t                             = *(s32 *) (g + 0x2000 + 0xf60);
                if (t > 0xf423f) {
                    *(s32 *) e = 0xf423f;
                } else if (t < 0) {
                    *(s32 *) e = 0;
                }
                if (acc > 0) {
                    e[0xc]           = 1;
                    *(s32 *) (e + 4) = *(s32 *) (e + 4) + acc;
                    t                = *(s32 *) (e + 4);
                    if (t > 0xf423f || t < 0) {
                        *(s32 *) (e + 4) = 0xf423f;
                    }
                } else {
                    *(s32 *) (e + 8) = *(s32 *) (e + 8) - acc;
                    t                = *(s32 *) (e + 8);
                    if (t > 0xf423f || t < 0) {
                        *(s32 *) (e + 8) = 0xf423f;
                    }
                }
            } else {
                g                             = data_0213e2f4;
                e                             = g + 0x2f60;
                *(s32 *) (g + 0x2000 + 0xf60) = *(s32 *) (g + 0x2000 + 0xf60) + 10;
                t                             = *(s32 *) (g + 0x2000 + 0xf60);
                if (t > 0xf423f) {
                    *(s32 *) e = 0xf423f;
                } else if (t < 0) {
                    *(s32 *) e = 0;
                }
                e[0xc]           = 1;
                *(s32 *) (e + 4) = *(s32 *) (e + 4) + 10;
                t                = *(s32 *) (e + 4);
                if (t > 0xf423f || t < 0) {
                    *(s32 *) (e + 4) = 0xf423f;
                }
                if (func_0204c8b0(5) != 0) {
                    g                    = data_02139e64;
                    *(s32 *) (g + 0xe38) = 0x985;
                    *(s32 *) (g + 0xe3c) = -1;
                    g[0xe40]             = 0;
                    arg0[0x2d]           = 1;
                }
            }
            return 2;
        case 0xb:
            if (arg2 != 0) {
                t = 1;
            } else {
                t = 0;
            }
            arg0[0x2c] = t;
            return 2;
        default:
            return 0;
    }
}
