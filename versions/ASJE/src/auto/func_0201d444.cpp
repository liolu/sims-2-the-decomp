/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018aa0(void *, s32);
extern "C" void func_02018ad0(void *);
extern "C" u8 data_02130338;

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 b);
};

extern "C" void *func_0201d444(void *arg0, void *arg1) {
    s32 i;
    s32 z;
    u8 *q;
    u8 *p = (u8 *) arg0;

    func_02018734(arg0, arg1, p + 0x18);
    q               = p + 0x18;
    *(void **) arg0 = (void *) &data_02130338;
    func_02018ad0(q);
    func_02018aa0(q, 0x22);
    i = 0;
    z = i;
    do {
        ((u16 *) (q + 0x10))[i] = 0x14B;
        ((s32 *) (q + 0x14))[i] = z;
        i += 1;
    } while (i < 2);
    *(s16 *) (q + 0x1C) = 0x135;
    *(s8 *) (q + 0x1E)  = z;
    *(s32 *) (q + 0x20) = z;
    *(s16 *) (p + 0x10) = 0x22;
    ((VA *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    if (*(s32 *) (p + 0x38) == 0) {
        *(s32 *) (p + 0x38) = *(s32 *) (p + 4);
    }
    return arg0;
}
