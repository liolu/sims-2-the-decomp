/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* getRotDataEx_ from https://github.com/7ucina/acww-decomp src/autoload_2/unk_021065dc.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;
typedef struct V3 {
    s32 x, y, z;
} V3;
typedef union M33 {
    s32 m[9];
    V3 r[3];
} M33;
extern BOOL func_020f12bc(M33 *, void *, void *, u32);
extern void func_020f5ed4(s32 *, s32 *);
static inline void Cross(V3 *a, V3 *b, V3 *c) {
    s32 x, y, z;
    x    = (a->y * b->z - a->z * b->y) >> 12;
    y    = (a->z * b->x - a->x * b->z) >> 12;
    z    = (a->x * b->y - a->y * b->x) >> 12;
    c->x = x;
    c->y = y;
    c->z = z;
}
void func_020f145c(M33 *out, s32 frame, u32 *ent, u8 *hdr) {
    M33 a, b;
    u8 *tblA;
    u32 info;
    u8 *tblB;
    s32 f;
    s32 fb;
    s32 t;
    u16 n;
    s32 mul;
    u8 *d;
    BOOL r;
    n    = *(u16 *) (hdr + 4);
    tblA = hdr + *(u32 *) (hdr + 12);
    tblB = hdr + *(u32 *) (hdr + 16);
    d    = hdr + ent[1];
    info = ent[0];
    f    = frame >> 12;
    if (f == n - 1) {
        if (info & 0xc0000000) {
            if (info & 0x40000000) {
                f = (f & 1) + ((u32) f >> 1);
            } else {
                f = (f & 3) + ((u32) f >> 2);
            }
        }
        if (*(u32 *) (hdr + 8) & 2) {
            fb = 0;
            goto one;
        }
        if (func_020f12bc(out, tblA, tblB, ((u16 *) d)[f]) == 0) {
            return;
        }
        Cross(&out->r[0], &out->r[1], &out->r[2]);
        return;
    }
    if (info & 0xc0000000) {
        u32 lim = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if ((u32) f >= lim) {
                f  = lim >> 1;
                fb = f + 1;
                goto one;
            }
            f   = (u32) f >> 1;
            fb  = f + 1;
            t   = frame & 0x1fff;
            mul = 2;
        } else {
            if ((u32) f >= lim) {
                f  = (f & 3) + ((u32) f >> 2);
                fb = f + 1;
                goto one;
            }
            f   = (u32) f >> 2;
            fb  = f + 1;
            t   = frame & 0x3fff;
            mul = 4;
        }
        goto fin;
    }
    fb = f + 1;
one:
    t   = frame & 0xfff;
    mul = 1;
fin: {
    r = 0;
    r |= func_020f12bc(&a, tblA, tblB, ((u16 *) d)[f]);
    r |= func_020f12bc(&b, tblA, tblB, ((u16 *) d)[fb]);
    out->m[0] = a.m[0] * mul + ((t * (b.m[0] - a.m[0])) >> 12);
    out->m[1] = a.m[1] * mul + ((t * (b.m[1] - a.m[1])) >> 12);
    out->m[2] = a.m[2] * mul + ((t * (b.m[2] - a.m[2])) >> 12);
    out->m[3] = a.m[3] * mul + ((t * (b.m[3] - a.m[3])) >> 12);
    out->m[4] = a.m[4] * mul + ((t * (b.m[4] - a.m[4])) >> 12);
    out->m[5] = a.m[5] * mul + ((t * (b.m[5] - a.m[5])) >> 12);
    func_020f5ed4(&out->m[0], &out->m[0]);
    func_020f5ed4(&out->m[3], &out->m[3]);
    if (r == 0) {
        out->m[6] = a.m[6] * mul + ((t * (b.m[6] - a.m[6])) >> 12);
        out->m[7] = a.m[7] * mul + ((t * (b.m[7] - a.m[7])) >> 12);
        out->m[8] = a.m[8] * mul + ((t * (b.m[8] - a.m[8])) >> 12);
        func_020f5ed4(&out->m[6], &out->m[6]);
    } else {
        Cross(&out->r[0], &out->r[1], &out->r[2]);
    }
}
}
