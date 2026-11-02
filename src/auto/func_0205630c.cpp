/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
};

extern "C" void func_0203c540(void *arg0);
extern "C" void func_020105d0(void *arg0);
extern "C" s32 data_027e0000;
extern "C" u8 data_027e0014[];

extern "C" void func_0205630c(u8 *arg0) {
    VA *obj;
    s32 i;

    func_0203c540(arg0);
    obj = *(VA **) (arg0 + 0x28);
    obj->f3();
    for (i = 0; i < 4; i++) {
        obj = ((VA **) (arg0 + 0x2C))[i];
        if (obj != 0) {
            obj->f1();
        }
        obj = ((VA **) (arg0 + 0x3C))[i];
        if (obj != 0) {
            obj->f1();
        }
    }
    func_020105d0((u8 *) data_027e0014 + data_027e0000 * 0x34);
}
