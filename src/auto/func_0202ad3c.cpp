/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_02018734(void *, void *, void *);
M2C_UNK func_0202ad94(void *);
extern M2C_UNK data_02130d0c;
}
struct VE {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void *func_0202ad3c(void *arg0, void *arg1) {
    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_02130d0c;
    func_0202ad94((u8 *) arg0 + 0x18);
    *(s16 *) ((u8 *) arg0 + 0x10) = 0x45;
    ((VE *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
