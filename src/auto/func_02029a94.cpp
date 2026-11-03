/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_02018734(void *a, void *b, void *c);
void func_02018ad0(void *a);
void func_02018aa0(void *a, s32 b);
void func_02015394(void *a);
void func_02015360(void *a);
void func_02015354(void *a, s32 b);
void func_02015338(void *a, void *b, void *c, void *d);
void func_02015334(void *a);
s32 func_020d5680(s32 a, void *b);
extern u8 data_02130c70;
}

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(void *a);
};

extern "C" void *func_02029a94(void *arg0, void *arg1) {
    u8 *self = (u8 *) arg0;
    u8 *p;
    s32 c0;
    s32 c1;
    s32 c2;
    s32 t;

    func_02018734(arg0, arg1, self + 0x18);
    p               = self + 0x18;
    *(void **) self = (void *) &data_02130c70;
    func_02018ad0(p);
    func_02018aa0(p, 0x31);
    p[0x10] = 0x0A;
    func_02015394(self + 0x30);
    func_02015360(self + 0x3c);
    func_02015354(&c2, 1);
    func_02015354(&c1, 1);
    func_02015354(&c0, 1);
    func_02015338(self + 0x48, &c0, &c1, &c2);
    func_02015334(self + 0x54);
    self[0x94]             = 1;
    *(u16 *) (self + 0x10) = 0x31;
    ((VA *) arg0)->f3(*(void **) ((u8 *) arg1 + 4));
    self[0x2C] = 0;
    t          = self[0x28];
    if (t == 2) {
        *(s32 *) (self + 0x9C) = func_020d5680(0x29, *(u8 **) (self + 4) + 0x78);
    } else if (t == 4) {
        *(s32 *) (self + 0x9C) = func_020d5680(0x22, *(u8 **) (self + 4) + 0x78);
    } else if (t != 5) {
        *(s32 *) (self + 0x9C) = -1;
    } else {
        *(s32 *) (self + 0x9C) = func_020d5680(0x2E, *(u8 **) (self + 4) + 0x78);
    }
    return arg0;
}
