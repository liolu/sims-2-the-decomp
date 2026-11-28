/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020646f8(s32 *, s32);
s32 func_020828f4(s32 *, u16, s32, s32);
s32 func_02082d58(s32 *, u16);
extern u8 *data_0213df5c;
extern u8 *data_0213e0a8;

void func_02095a98(u8 *arg0, u8 *arg1) {
    u8 *p = arg0;
    u8 *e;
    u8 *t;
    s32 v;
    s32 i;
    s32 r0;
    s32 c;
    u32 h;

    if (*(u32 *) data_0213df5c & 0x20) {
        return;
    }
    h = *(u16 *) (arg1 + 0xa);
    e = data_0213df5c + 0x21e4 + h * 0x2c;
    if (e[0x1a] == 6) {
        return;
    }
    if (h == 0x17) {
        r0 = *(s32 *) (data_0213e0a8 + 0xf4);
        if (r0 >= 0x16 && r0 <= 0x17) {
            return;
        }
    }
    if (*(s32 *) (e + 0x10) == 1) {
        i = *(s32 *) (p + 8);
        c = *(s32 *) (p + 0xc);
        if (i > (c = *(s32 *) (p + 0xc))) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
            } while (i > (c = *(s32 *) (p + 0xc)));
        }
        p[c + 0x10]        = 0x2d;
        *(s32 *) (p + 0xc) = *(s32 *) (p + 0xc) + 1;
        *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
    }
    if (func_020828f4((s32 *) (data_0213df5c + 0x2fac), *(u16 *) (arg1 + 0xa), 0, 0) == 1) {
        i = *(s32 *) (p + 8);
        c = *(s32 *) (p + 0xc);
        if (i > (c = *(s32 *) (p + 0xc))) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
            } while (i > (c = *(s32 *) (p + 0xc)));
        }
        p[c + 0x10]        = 7;
        *(s32 *) (p + 0xc) = *(s32 *) (p + 0xc) + 1;
        *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
    } else if (func_02082d58((s32 *) (data_0213df5c + 0x2fac), *(u16 *) (arg1 + 0xa)) != 0xd8) {
        i = *(s32 *) (p + 8);
        c = *(s32 *) (p + 0xc);
        if (i > (c = *(s32 *) (p + 0xc))) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
            } while (i > (c = *(s32 *) (p + 0xc)));
        }
        p[c + 0x10]        = 6;
        *(s32 *) (p + 0xc) = *(s32 *) (p + 0xc) + 1;
        *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
    }
    if (func_020646f8((s32 *) data_0213df5c, 0x33) != 0 && func_020646f8((s32 *) data_0213df5c, 0x34) == 0) {
        if (*(u16 *) (*(u8 **) (p + 4) + 0xa) == 0x15) {
            return;
        }
    }
    i = *(s32 *) (p + 8);
    c = *(s32 *) (p + 0xc);
    if (i > (c = *(s32 *) (p + 0xc))) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > (c = *(s32 *) (p + 0xc)));
    }
    p[c + 0x10]        = 3;
    *(s32 *) (p + 0xc) = *(s32 *) (p + 0xc) + 1;
    *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
    i                  = *(s32 *) (p + 8);
    c                  = *(s32 *) (p + 0xc);
    if (i > (c = *(s32 *) (p + 0xc))) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > (c = *(s32 *) (p + 0xc)));
    }
    p[c + 0x10]        = 5;
    *(s32 *) (p + 0xc) = *(s32 *) (p + 0xc) + 1;
    *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
    e                  = data_0213df5c + 0x21e4;
    e                  = e + *(u16 *) (arg1 + 0xa) * 0x2c;
    r0                 = *(s32 *) (e + 0x10);
    if (r0 == 2) {
        i = *(s32 *) (p + 8);
        c = *(s32 *) (p + 0xc);
        if (i > (c = *(s32 *) (p + 0xc))) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
            } while (i > (c = *(s32 *) (p + 0xc)));
        }
        p[c + 0x10]        = 0x2e;
        *(s32 *) (p + 0xc) = *(s32 *) (p + 0xc) + 1;
        *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
        return;
    }
    if (r0 != 5) {
        return;
    }
    i = *(s32 *) (p + 8);
    c = *(s32 *) (p + 0xc);
    if (i > (c = *(s32 *) (p + 0xc))) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > (c = *(s32 *) (p + 0xc)));
    }
    p[c + 0x10]        = 0x48;
    *(s32 *) (p + 0xc) = *(s32 *) (p + 0xc) + 1;
    *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
}
