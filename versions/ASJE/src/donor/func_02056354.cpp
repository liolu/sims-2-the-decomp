/* compiler: 1.2/sp2p3  */
/* func_020563cc from sims-2-the/src/auto/func_020563cc.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    s32 f4v;
};
typedef struct {
    u8 p[0x8c];
    u8 flag;
} F;
typedef struct {
    u16 v;
} S16;
struct HW {
    u8 p[6];
    u16 w6;
};
struct GS {
    u8 p[0xdf0];
    s32 mode;
};
extern "C" {
extern void func_020d5880(s32);
extern void func_0203d190(s32, S16);
extern void func_02048090(void *, s32, s32, s32, s32, s32);
extern HW *data_02139d4c;
extern GS *data_02139e64;
typedef struct {
    u8 p0[0x28];
    VA *cur;
    VA *o[4];
    F *fl[4];
    F *fe;
    u16 w50;
} T;
void func_02056354(T *t) {
    s32 i;
    u8 zero;
    VA *n;
    F *f;
    u8 old;
    i    = 0;
    zero = 0;
    do {
        f       = t->fl[i];
        old     = f->flag;
        f->flag = zero;
        if (old != 0) {
            n = t->o[i];
            if (t->cur != 0) {
                func_020d5880(0x16a);
                t->cur->f3();
            }
            n->f2();
            t->w50 = (t->w50 & ~0x1f00) | (((u16) n->f4v & 0x1f) << 8);
            func_0203d190(2, *(S16 *) &t->w50);
            t->cur = n;
            break;
        }
        i += 1;
    } while (i < 4);
    if (t->cur != 0) {
        t->cur->f4();
    }
    if ((data_02139d4c->w6 & 2) == 0) {
        f       = t->fe;
        old     = f->flag;
        f->flag = 0;
        if (old == 0) {
            return;
        }
    }
    if (data_02139e64->mode != 0x32) {
        return;
    }
    func_020d5880(0x159);
    func_02048090(data_02139e64, 0x18, 0, 0, 0, 0);
    func_02048090(data_02139e64, 0, 1, 0, 0, 0);
}
}
