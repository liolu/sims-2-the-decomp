/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern "C" u8 data_02130afc;
extern "C" s32 data_02139408;
extern "C" void *func_02028680(u8 *arg0, u8 *arg1) {
    volatile s32 sp[2];
    u8 *r4;
    s32 *p;
    s32 s;
    func_02018734(arg0, arg1, arg0 + 0x18);
    *(void **) arg0 = &data_02130afc;
    r4              = arg0 + 0x18;
    func_02018ad0(r4);
    *(s32 *) (r4 + 0x18) = 0;
    *(s32 *) (r4 + 0x1C) = 0;
    *(s32 *) (r4 + 0x20) = 0;
    func_02018aa0(r4, 0x2D);
    *(u16 *) (r4 + 0x10)   = 0x2A;
    *(u16 *) (r4 + 0x12)   = 0x2A0;
    p                      = &data_02139408;
    *(s32 *) (r4 + 0x18)   = p[0];
    sp[0]                  = p[1];
    *(s32 *) (r4 + 0x1C)   = p[1];
    sp[1]                  = p[2];
    *(s32 *) (r4 + 0x20)   = p[2];
    s                      = 0;
    *(s32 *) (r4 + 0x24)   = s;
    *(u8 *) (r4 + 0x14)    = 0;
    *(u16 *) (arg0 + 0x10) = 0x2D;
    ((VA *) arg0)->f3(*(s32 *) (arg1 + 4));
    return arg0;
}
