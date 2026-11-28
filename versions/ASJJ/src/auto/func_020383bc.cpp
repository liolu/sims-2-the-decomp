/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(void *a);
};

extern "C" void func_0201872c(void *, void *, void *);
extern "C" void func_02018ac8(void *);
extern "C" void func_02018a98(void *, s32);
extern "C" void *func_020468a0(s32, s32, s32);
extern "C" void *func_02014c28(void *, s32);
extern "C" s32 func_02083200(s32, M2C_UNK);
extern "C" u8 data_02131108;
extern "C" u8 data_02139a94;
extern "C" s32 data_0213e094;

extern "C" void *func_020383bc(void *arg0, void *arg1) {
    void *temp_r0;
    u8 *temp_r3;
    u8 *temp_r5;
    void *temp_r6;
    s32 temp_r1;

    temp_r6 = arg1;
    func_0201872c(arg0, temp_r6, (u8 *) arg0 + 0x18);
    temp_r5       = (u8 *) arg0 + 0x18;
    *(u8 **) arg0 = &data_02131108;
    func_02018ac8(temp_r5);
    func_02018a98(temp_r5, 0x11);
    *(u16 *) ((u8 *) arg0 + 0x10) = 0x11;
    ((VA *) arg0)->f3(*(void **) ((u8 *) temp_r6 + 4));
    *(u8 *) ((u8 *) arg0 + 0x30)  = 0;
    *(u8 *) ((u8 *) arg0 + 0x31)  = 1;
    *(s32 *) ((u8 *) arg0 + 0x28) = 0;
    *(u8 *) ((u8 *) arg0 + 0x31)  = 1;
    *(s32 *) ((u8 *) arg0 + 0x34) = 0;
    *(s32 *) ((u8 *) arg0 + 0x2C) = *(s32 *) (&data_02139a94 + 0x264);
    temp_r0                       = func_020468a0(0x214, 3, 4);
    if (temp_r0 != NULL) {
        temp_r0 = func_02014c28(temp_r0, 0xFA);
    }
    *(void **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C) = temp_r0;
    temp_r3                                        = *(u8 **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C);
    *(s32 *) (temp_r3 + 4)                         = *(s32 *) (temp_r3 + 4) & ~4;
    temp_r1                                        = func_02083200(data_0213e094, 3);
    temp_r3                                        = *(u8 **) ((u32) data_0213e094 + temp_r1 * 4);
    *(s8 *) (temp_r3 + 0x1D4)                      = 0;
    *(void **) (temp_r3 + 0x1D0)                   = *(void **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C);
    return arg0;
}
