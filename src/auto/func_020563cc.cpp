/* compiler: 1.2/sp2p3 */
#include "m2c.h"

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
void func_020d59bc(s32);
void func_0203d208(s32, S16);
void func_02048108(void *, s32, s32, s32, s32, s32);
extern HW *data_02139e8c;
extern GS *data_02139fa4;

typedef struct {
    u8 p0[0x28];
    VA *cur;
    VA *o[4];
    F *fl[4];
    F *fe;
    u16 w50;
} T;

void func_020563cc(T *t) {
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
                func_020d59bc(0x16a);
                t->cur->f3();
            }
            n->f2();
            t->w50 = (t->w50 & ~0x1f00) | (((u16) n->f4v & 0x1f) << 8);
            func_0203d208(2, *(S16 *) &t->w50);
            t->cur = n;
            break;
        }
        i += 1;
    } while (i < 4);
    if (t->cur != 0) {
        t->cur->f4();
    }
    if ((data_02139e8c->w6 & 2) == 0) {
        f       = t->fe;
        old     = f->flag;
        f->flag = 0;
        if (old == 0) {
            return;
        }
    }
    if (data_02139fa4->mode != 0x32) {
        return;
    }
    func_020d59bc(0x159);
    func_02048108(data_02139fa4, 0x18, 0, 0, 0, 0);
    func_02048108(data_02139fa4, 0, 1, 0, 0, 0);
}
}
