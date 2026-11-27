/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 a, b, c, d;
} E4;
typedef struct {
    E4 e[21];
    s32 cnt;
} Q;
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" {
extern u8 data_0212776c;
extern u8 data_02127754;
extern u8 data_027e0000;
extern u8 data_027e0014;
extern u8 data_0213e580;
extern u8 data_0213e434;
void func_020444f8(u16 v);
void func_0203c540(void);
void func_020105d0(u8 *p);
void func_01ffabc8(u8 *p, s32 a, s32 b);
s32 func_02064644(u8 *p, s32 a);
void func_0206466c(u8 *p, s32 a, s32 b);
void func_020c25f4(u8 *arg0);
}

extern "C" void func_020c25f4(u8 *arg0) {
    volatile s32 pad;
    s32 i;
    u8 *base;
    u8 *p;
    s32 n;
    s32 j;
    Q *q;

    func_020444f8(*(u16 *) ((u8 *) &data_0212776c + 2 + (*(s32 *) (arg0 + 0x24) << 2)));
    func_020444f8(*(u16 *) ((u8 *) &data_02127754 + (*(s32 *) (arg0 + 0x24) << 1)));

    for (i = 0; i < 6; i++) {
        VA *o = ((VA **) (arg0 + 0xcc))[i];
        if (o != 0) {
            o->f1();
        }
    }
    for (i = 0; i < 14; i++) {
        VA *o = ((VA **) (arg0 + 0xe4))[i];
        if (o != 0) {
            o->f1();
        }
    }
    for (i = 0; i < 6; i++) {
        VA *o = ((VA **) (arg0 + 0x124))[i];
        if (o != 0) {
            o->f1();
        }
    }
    if (((VA **) (arg0 + 0x120))[0] != 0) {
        ((VA **) (arg0 + 0x120))[0]->f1();
    }
    if (((VA **) (arg0 + 0x13c))[0] != 0) {
        ((VA **) (arg0 + 0x13c))[0]->f1();
    }

    func_0203c540();
    n = *(s32 *) &data_027e0000;
    func_020105d0((u8 *) &data_027e0014 + 0x34 * n);
    func_01ffabc8(*(u8 **) (*(u8 **) &data_0213e580 + 0xf8) + 0xe0, 8, 0);

    if (*(s32 *) (*(u8 **) &data_0213e580 + 0xf4) == 0x11) {
        if (func_02064644(*(u8 **) &data_0213e434, 0x23) == 0) {
            base = *(u8 **) &data_0213e434;
            p    = base + 0x41f8;
            n    = *(s32 *) (p + 0x2e0);
            p    = p + n * 0x58;
            i    = 0;
            j    = ((Q *) p)->cnt;
            if (j > 0) {
                do {
                    if (((Q *) p)->e[i].a == 0x24) {
                        func_0206466c(base, 0x23, 1);
                        break;
                    }
                    i++;
                } while (i < j);
            }
        }
    }
    *(u8 *) (*(u8 **) &data_0213e434 + 0x2000 + 0x1d8) = 1;
}
