/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e580;
extern u8 *data_0213e434;
extern u8 *data_02139fa4;
extern u16 *data_02139e8c;

void func_020197ec(void *a);
void func_020117d8(s32 a, s32 b, void *c, u8 *d);
void func_02018acc(void *a);
void func_02011090(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020b9278(u8 *a);
s32 func_0204ca70(s32 a);
void func_020d5680(s32 a, u8 *b);
s32 func_01ffaf28(u8 *a, s32 b, u8 *c);
void func_01ffabc8(u8 *a, s32 b, s32 c);
void func_02074bc0(u8 *a, s32 b);
void func_020679c0(...);
void func_02018af8(u8 *a, s32 b, void *c, s32 d);

typedef struct {
    u8 b4;
    u8 b5;
    u8 unk_2[2];
    s32 v8;
    s32 vc;
    s32 v10;
    s32 obj[5];
} Fr;

void func_02026470(u8 *arg0) {
    Fr f;
    u8 *p;
    s32 r;
    s32 k;
    s32 z;
    s32 t;
    s32 q;
    u8 *w;

    p = arg0;
    if (p[0x4f] == 0) {
        p[0x4f] = 1;
        if (*(s32 *) (p + 0x28) != 0) {
            func_020197ec(f.obj);
            f.obj[4] = *(s32 *) (p + 0x28);
            func_020117d8(*(s32 *) (p + 4), 4, f.obj, p);
            func_02018acc(f.obj);
        }
        if (*(u16 *) (p + 0x48) != 0x135) {
            func_02011090(*(s32 *) (p + 4), *(u16 *) (p + 0x48), 0, 1, 0);
        }
    }

    if (func_020b9278(*(u8 **) (p + 4) + 0x14C) != 0) {
        if (*(u16 *) (p + 0x48) != *(u16 *) (*(u8 **) (p + 4) + 0x1FE) || func_0204ca70(0x64) >= p[0x4e] ||
            (*(u16 *) (p + 0x4a) == 0x135 && *(u16 *) (p + 0x4c) == 0x135)) {
            if (*(s32 *) (p + 0x54) != -1) {
                func_020d5680(*(s32 *) (p + 0x54), *(u8 **) (p + 4) + 0x78);
            }
            func_02011090(*(s32 *) (p + 4), *(u16 *) (p + 0x48), 0, 1, 0);
        } else if (*(u16 *) (p + 0x4c) == 0x135 || func_0204ca70(1) == 0) {
            if (*(s32 *) (p + 0x58) != -1) {
                func_020d5680(*(s32 *) (p + 0x58), *(u8 **) (p + 4) + 0x78);
            }
            func_02011090(*(s32 *) (p + 4), *(u16 *) (p + 0x4a), 0, 1, 0);
        } else {
            if (*(s32 *) (p + 0x5c) != -1) {
                func_020d5680(*(s32 *) (p + 0x5c), *(u8 **) (p + 4) + 0x78);
            }
            func_02011090(*(s32 *) (p + 4), *(u16 *) (p + 0x4c), 0, 1, 0);
        }
    }

    if (*(s32 *) (p + 4) == *(s32 *) (data_0213e580 + 0xf8)) {
        enum {
            Z = 0
        } zz;
        if ((s8) p[0x36] != -1) {
            func_02074bc0(data_0213e434 + 0x2164, (s8) p[0x36]);
        }
        zz   = Z;
        z    = zz;
        f.v8 = z;
        f.vc = z;
        if (*(volatile s32 *) (p + 0x38) != z) {
            q                                 = *(s32 *) (p + 0x38);
            f.v10                             = q;
            *(s32 *) (data_0213e434 + 0x2170) = q;
        }
        k = *(s32 *) (p + 0x3c);
        if (k != -1) {
            t                   = *(s32 *) (p + 0x40);
            w                   = data_0213e434 + 0x2164;
            *(s32 *) (w + 0x6c) = k;
            *(s32 *) (w + 0x70) = t;
        }
    }

    r = *(u16 *) (p + 0x34);
    if (r != 0) {
        *(u16 *) (p + 0x34) = (u16) (r - 1);
        if ((u32) r <= 1) {
            if (p[0x50] != 0 && *(s32 *) (p + 4) == *(s32 *) (data_0213e580 + 0xf8)) {
                w = *(u8 **) (data_02139fa4 + 0xdac);
                if ((w != 0 ? *(s32 *) (w + 4) : 0x32) == 0xc) {
                    func_020679c0(w);
                }
            } else {
                if (func_01ffaf28(*(u8 **) (p + 4) + 0xe0, 4, p) != 0) {
                    func_01ffabc8(*(u8 **) (p + 4) + 0xe0, 4, 1);
                }
                f.b4 = 0;
                func_02018af8(*(u8 **) (p + 4) + 0x128, 5, &f.b4, 2);
                w = *(u8 **) (p + 0x2c);
                if (w != 0) {
                    *(s32 *) (w + 4) = *(s32 *) (w + 4) | 0x82;
                }
                if (*(s32 *) (p + 0x30) != 0) {
                    w = *(u8 **) (*(u8 **) (p + 4) + 0x1c);
                    if (w != 0) {
                        *(s32 *) (w + 4) = *(s32 *) (w + 4) | 0x82;
                        w                = *(u8 **) (*(u8 **) (*(u8 **) (p + 4) + 0x1c) + 0x130);
                        if (w != 0) {
                            if (w != 0) {
                                ((void (*)(u8 *))(*(u32 **) w)[1])(w);
                            }
                            *(s32 *) (*(u8 **) (*(u8 **) (p + 4) + 0x1c) + 0x130) = 0;
                        }
                    }
                    *(s32 *) (*(u8 **) (p + 4) + 0x1c) = *(s32 *) (p + 0x30);
                }
                p[0x13] = 1;
            }
        }
    }

    if (*(s32 *) (p + 0x44) == 0) {
        return;
    }
    if ((*(s32 *) (p + 0x44) & data_02139e8c[1]) == 0) {
        return;
    }
    if (func_01ffaf28(*(u8 **) (p + 4) + 0xe0, 4, p) != 0) {
        func_01ffabc8(*(u8 **) (p + 4) + 0xe0, 4, 1);
    }
    f.b5 = 0;
    func_02018af8(*(u8 **) (p + 4) + 0x128, 5, &f.b5, 2);
    p[0x13] = 1;
}
