/* compiler: 1.2/sp2p3  */
/* func_02112330 from sims-2-the/src/auto/func_02112330.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
extern u8 data_02138c64;
extern u8 data_02138c74;
extern u8 data_02138c84;
extern s32 func_0211222c();
extern s32 func_02109fe8();
extern void func_02111e1c(s32 arg0, u8 *arg1, u8 *arg2);
static inline s32 K(u8 *o, u8 *d) {
    u8 *dd = d;
    u8 *o4;
    u8 *d4;
    s32 r;
    if (o != 0) {
        o4 = *(u8 **) (o + 4);
        d4 = *(u8 **) (dd + 4);
        if (o4 != 0) {
            r = func_02109fe8(*(s32 *) (o4 + 4), *(s32 *) (d4 + 4)) == 0;
            return r;
        }
    }
    return 0;
}
void func_02111e1c(s32 arg0, u8 *arg1, u8 *arg2) {
    s32 s0;
    s32 s1;
    s32 s2;
    u8 *o;
    s32 i;
    s32 cnt;
    s32 b0;
    s32 b1;
    s32 t;
    s32 w;
    s32 q;
    u8 *p;

    if (*(s32 *) arg2 == arg0 && func_0211222c(*(s32 *) (arg2 + 4)) != 0) {
        if (arg2[0x21] != 0) {
            arg2[0x12] = 1;
        }
        t = *(s32 *) (arg2 + 0x1c);
        if (t == 0) {
            return;
        }
        if (*(s32 *) (arg2 + 0x14) == 0) {
            *(s32 *) (arg2 + 0x14) = t;
        } else if (*(s32 *) (arg2 + 0x14) != t) {
            arg2[0x19] = 1;
        }
        if (arg2[0x20] != 0) {
            arg2[0x18] = 1;
        }
        return;
    }
    s0 = *(s32 *) (arg2 + 0x1c);
    s1 = arg2[0x20];
    s2 = arg2[0x21];
    if (func_0211222c(*(s32 *) (arg2 + 8), arg1) != 0) {
        if (*(s32 *) (arg2 + 0xc) == 0) {
            *(s32 *) (arg2 + 0xc) = arg0;
        } else if (*(s32 *) (arg2 + 0xc) != arg0) {
            arg2[0x11] = 1;
        }
        if (arg2[0x21] != 0) {
            arg2[0x10] = 1;
        }
        *(s32 *) (arg2 + 0x1c) = arg0;
        arg2[0x20]             = 1;
    }
    o = *(u8 **) arg1 - 8;
    if (!K(o, &data_02138c64)) {
        goto chain;
    }
loop:
    cnt = *(s32 *) (arg1 + 0xc);
    b0  = arg2[0x20];
    b1  = arg2[0x21];
    i   = 0;
    if (cnt > 0) {
        p = arg1 + 0x10;
        do {
            if (!(*(s32 *) (p + 4) & 2)) {
                arg2[0x20] = 0;
                arg2[0x21] = 0;
            }
            w = *(s32 *) (p + 4);
            if (w & 1) {
                q = arg0 + *(s32 *) (*(s32 *) arg0 + (w >> 8));
            } else {
                q = arg0 + (w >> 8);
            }
            func_02111e1c(q, *(u8 **) p, arg2);
            arg2[0x20] = b0;
            i++;
            arg2[0x21] = b1;
            p += 8;
        } while (i < cnt);
    }
    goto end;
chain:
    if (!K(o, &data_02138c74)) {
        goto k3;
    }
call:
    func_02111e1c(arg0, *(u8 **) (arg1 + 8), arg2);
    goto end;
k3:
    if (K(o, &data_02138c84)) {
        goto end;
    }
    if (K(o, &data_02138c64)) {
        goto loop;
    }
    if (K(o, &data_02138c74)) {
        goto call;
    }
end:
    *(s32 *) (arg2 + 0x1c) = s0;
    arg2[0x20]             = s1;
    arg2[0x21]             = s2;
}
