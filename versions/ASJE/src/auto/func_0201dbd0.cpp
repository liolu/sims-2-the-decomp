/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 b);
};
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018aa0(void *, s32);
extern "C" void func_02018ad0(void *);
extern "C" u8 data_021303d4;

extern "C" void *func_0201dbd0(void *arg0, void *arg1) {
    volatile s32 fr[4];
    u8 *p = (u8 *) arg0;
    u8 *t;
    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    t            = (u8 *) arg0 + 0x18;
    *(void **) p = (void *) &data_021303d4;
    func_02018ad0(t);
    func_02018aa0(t, 0x46);
    *(s32 *) (t + 0x10) = 0;
    fr[0]               = 0x1000;
    fr[2]               = 0x1000;
    *(s32 *) (t + 0x14) = 0x1000;
    fr[1]               = 0;
    fr[3]               = 0;
    *(s32 *) (t + 0x18) = 0;
    *(s32 *) (t + 0x1C) = 0x20;
    *(s8 *) (t + 0x20)  = 0;
    *(s8 *) (t + 0x21)  = 1;
    *(s8 *) (t + 0x22)  = 0;
    *(s8 *) (t + 0x23)  = 0;
    *(s16 *) (p + 0x10) = 0x46;
    ((VC *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
