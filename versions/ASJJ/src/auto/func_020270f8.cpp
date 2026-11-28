/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_0201872c(void *, void *, void *);
M2C_UNK func_02027150(void *);
extern M2C_UNK data_021303a4;
}
struct VE {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void *func_020270f8(void *arg0, void *arg1) {
    func_0201872c(arg0, arg1, (u8 *) arg0 + 0x18);
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_021303a4;
    func_02027150((u8 *) arg0 + 0x18);
    *(s16 *) ((u8 *) arg0 + 0x10) = 0x29;
    ((VE *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
