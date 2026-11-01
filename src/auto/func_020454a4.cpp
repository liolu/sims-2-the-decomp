/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12(u8 b);
};

extern "C" s32 func_02046880(s32, u16, s32);
extern "C" s32 func_02112110(s32, u8, s32, s32, void *, s32);
extern "C" void func_02045530(void);

extern "C" void func_020454a4(void *arg0) {
    u16 temp_r6;
    u8 temp_r5;
    temp_r5                                    = *((u8 *) arg0 + 0x32);
    temp_r6                                    = (u16) ((s32) * (u16 *) ((u8 *) arg0 + 0x2A) / (s32) temp_r5);
    *(s32 *) ((u8 *) arg0 + temp_r6 * 4 + 0xC) = func_02112110(func_02046880(temp_r5 * 0xC, *(u16 *) ((u8 *) arg0 + 0x30), 4),
                                                               temp_r5, 0xC, 0, (void *) func_02045530, 0);
    *((u8 *) arg0 + 0x33)                      = (u8) (*((u8 *) arg0 + 0x33) + 1);
    ((VC *) arg0)->f12((u8) temp_r6);
}
