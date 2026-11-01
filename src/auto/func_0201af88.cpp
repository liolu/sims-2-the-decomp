/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_0201b038(void *);
extern "C" u8 data_02130344;

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 b);
};

extern "C" void *func_0201af88(void *arg0, void *arg1) {
    u8 *temp_r2;
    u8 *temp_r2_2;
    volatile s32 tmp[3];
    s32 v;

    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    *(void **) arg0 = (void *) &data_02130344;
    func_0201b038((u8 *) arg0 + 0x18);
    *(s32 *) ((u8 *) arg0 + 0x40) = 0;
    *(s32 *) ((u8 *) arg0 + 0x44) = 0;
    *(s32 *) ((u8 *) arg0 + 0x48) = 0;
    *(s32 *) ((u8 *) arg0 + 0x54) = 0;
    *(s32 *) ((u8 *) arg0 + 0x58) = 0;
    *(s32 *) ((u8 *) arg0 + 0x5C) = 0;
    *(s16 *) ((u8 *) arg0 + 0x10) = 0xA;
    ((VA *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    *(s32 *) ((u8 *) arg0 + 0x4C) = 1;
    *(s8 *) ((u8 *) arg0 + 0x50)  = 0;
    temp_r2                       = *(u8 **) ((u8 *) arg0 + 4);
    temp_r2_2                     = temp_r2 + 0x78;
    v                             = *(s32 *) (temp_r2 + 0x78);
    tmp[0]                        = v;
    *(s32 *) ((u8 *) arg0 + 0x54) = v;
    v                             = *(s32 *) (temp_r2_2 + 4);
    tmp[1]                        = v;
    *(s32 *) ((u8 *) arg0 + 0x58) = v;
    v                             = *(s32 *) (temp_r2_2 + 8);
    tmp[2]                        = v;
    *(s32 *) ((u8 *) arg0 + 0x5C) = v;
    return arg0;
}
