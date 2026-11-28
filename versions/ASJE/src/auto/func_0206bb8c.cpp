/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void *f7();
};

extern "C" void func_020d5880(s32);
extern "C" void func_02067620(void *, u16, u16);
extern "C" void func_0206a210(void *);
extern "C" void func_0206a3d0(void *);
extern "C" M2C_UNK func_02011080(void *, void *, s32);
extern "C" void *data_02139e64;
extern "C" void *data_0213e440;

extern "C" void func_0206bb8c(void *arg0) {
    volatile s32 tmp[9];
    void *temp_r4;
    void *temp_r5;
    void *temp_r0;
    void *temp_r1;
    s32 var_r1;
    enum {
        A = 0x27000,
        B = 0x8B000,
        C = 0x97000,
        D = 0xB9000
    } ea, eb, ec, ed;

    ea     = A;
    tmp[0] = ea;
    tmp[4] = ea;
    if (*(s32 *) ((u8 *) arg0 + 0x78) < ea) {
        return;
    }
    eb     = B;
    tmp[1] = eb;
    tmp[5] = eb;
    if (*(s32 *) ((u8 *) arg0 + 0x78) > eb) {
        return;
    }
    ec     = C;
    tmp[2] = ec;
    tmp[6] = ec;
    if (*(s32 *) ((u8 *) arg0 + 0x7C) < ec) {
        return;
    }
    ed     = D;
    tmp[3] = ed;
    tmp[7] = ed;
    if (*(s32 *) ((u8 *) arg0 + 0x7C) > ed) {
        return;
    }
    temp_r5 = *(void **) ((u8 *) arg0 + 0x94);
    if (*(s32 *) ((u8 *) temp_r5 + 4) != 1) {
        return;
    }
    temp_r4 = *(void **) ((u8 *) arg0 + 0x90);
    if (*(void **) ((u8 *) (*(void **) ((u8 *) temp_r4 + 0xC)) + 0x6C) != NULL) {
        return;
    }
    if (*(void **) ((u8 *) temp_r4 + 0x300) == temp_r5) {
        return;
    }
    func_020d5880(0x16A);
    *(void **) ((u8 *) temp_r4 + 0x300) = temp_r5;
    if (*(s32 *) ((u8 *) data_02139e64 + 8) == 0) {
        temp_r1 = *(void **) ((u8 *) temp_r4 + 0x300);
        if ((temp_r1 == NULL) || (*(void **) ((u8 *) (*(void **) temp_r1) + 0x130) == NULL) ||
            (*(s32 *) ((u8 *) temp_r1 + 4) == 2)) {
            func_02067620(*(void **) ((u8 *) temp_r4 + 0xC), 0xFFFF, 0xFFFF);
        } else {
            temp_r0 = ((VA *) *(void **) ((u8 *) (*(void **) temp_r1) + 0x130))->f7();
            func_02067620(*(void **) ((u8 *) temp_r4 + 0xC), *(u16 *) ((u8 *) temp_r0 + 0xA), *(u16 *) ((u8 *) temp_r0 + 0xC));
        }
        func_0206a210(temp_r4);
        func_0206a3d0(temp_r4);
    } else {
        *(u8 *) ((u8 *) temp_r4 + 0x31D) = 1;
    }
    if (*(void **) ((u8 *) (*(void **) ((u8 *) temp_r4 + 0xC)) + 0x6C) != NULL) {
        return;
    }
    func_02011080(*(void **) ((u8 *) data_0213e440 + 0xF8), *(void **) *(void **) ((u8 *) temp_r4 + 0x300), 0);
}
