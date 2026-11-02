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

extern "C" void func_0203d078(s32 a);
extern "C" void func_0203c3a4(s32 a, s32 b, s32 c);
extern "C" void func_0203cee8(s32 a);
extern "C" void func_020105d0(void *arg0);
extern "C" void func_0203c540(void);
extern "C" s32 data_027e0000;
extern "C" u8 data_027e0014[];

extern "C" void func_02067bbc(u8 *arg0) {
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
    func_0203d078(3);
    func_0203d078(0);
    func_0203c3a4(3, 0, 0);
    func_0203c3a4(0, 0, 0);
    func_0203cee8(0xE000);
    func_020105d0((u8 *) data_027e0014 + data_027e0000 * 0x34);
    func_0203c540();
}
