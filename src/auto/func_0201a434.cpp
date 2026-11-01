/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_02018734(void *, void *, void *);
M2C_UNK func_0201a49c(void *);
extern M2C_UNK data_021302f8;
}
struct VB {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void *func_0201a434(void *arg0, void *arg1) {
    u8 *obj;
    obj = (u8 *) arg0;
    func_02018734(arg0, arg1, obj + 0x18);
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_021302f8;
    func_0201a49c(obj + 0x18);
    *(s32 *) ((u8 *) arg0 + 0x44) = 0;
    *(s32 *) ((u8 *) arg0 + 0x48) = 0;
    *(s32 *) ((u8 *) arg0 + 0x4C) = 0;
    *(s16 *) ((u8 *) arg0 + 0x10) = 6;
    ((VB *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
