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
    virtual void f7();
};

extern "C" M2C_UNK func_02008e9c(...);
extern "C" M2C_UNK func_020105d0(s32);
extern "C" M2C_UNK func_0203c574(void);
extern "C" M2C_UNK func_0204eefc(void);
extern "C" M2C_UNK func_020d4b78(void);
extern "C" M2C_UNK func_020d505c(void);
extern "C" s32 data_027e0000;
extern "C" u8 data_027e0014[];

extern "C" void func_020019c0(void *arg0) {
    s32 t = *(u8 *) ((u8 *) arg0 + 0x2F3);
    if (t != 1) {
        return;
    }
    func_02008e9c(arg0, t);
    ((VA *) ((u8 *) arg0 + 0x58))->f7();
    ((VA *) ((u8 *) arg0 + 0x24))->f7();
    func_0203c574();
    func_020105d0((s32) (data_027e0014 + data_027e0000 * 0x34));
    func_0204eefc();
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_020105d0((s32) (data_027e0014 + data_027e0000 * 0x34));
    func_0204eefc();
    func_0203c574();
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_020d505c();
    func_020d4b78();
}
