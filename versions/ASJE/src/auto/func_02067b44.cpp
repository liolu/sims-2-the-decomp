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
};

extern "C" void func_0203d000(s32 a);
extern "C" void func_0203c32c(s32 a, s32 b, s32 c);
extern "C" void func_0203ce70(s32 a);
extern "C" void func_020105d0(void *arg0);
extern "C" void func_0203c4c8(void);
extern "C" s32 data_027e0000;
extern "C" u8 data_027e0014[];

extern "C" void func_02067b44(u8 *arg0) {
    s32 i;

    if (*(s32 *) (arg0 + 0x68) != 2) {
        ((VA **) (arg0 + 0x34))[*(s32 *) (arg0 + 0x64)]->f6();
    }
    i = 0;
    do {
        ((VA **) (arg0 + 0x34))[i]->f3();
        if (((VA **) (arg0 + 0x34))[i] != 0) {
            ((VA **) (arg0 + 0x34))[i]->f1();
        }
        if (((VA **) (arg0 + 0x48))[i] != 0) {
            ((VA **) (arg0 + 0x48))[i]->f1();
        }
        i++;
    } while (i < 5);
    func_0203d000(3);
    func_0203d000(0);
    func_0203c32c(3, 0, 0);
    func_0203c32c(0, 0, 0);
    func_0203ce70(0xE000);
    func_020105d0((u8 *) data_027e0014 + data_027e0000 * 0x34);
    func_0203c4c8();
}
