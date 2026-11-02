/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef s32 (*VFn)(void *, void *, s32);
struct VB {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual s32 f8(void *a, s32 b);
};
extern "C" M2C_UNK func_01ffac40(void *);
extern "C" void func_01ffabc8(u8 *arg0, u16 arg1, s32 arg2) {
    void **it;
    s32 r;
    void *self = arg0;
    it         = *(void ***) (arg0 + 4);
    if (it == 0) {
        return;
    }
    do {
        u8 *obj = *(u8 **) it;
        if (arg1 == *(u16 *) (obj + 0x10)) {
            obj[0x12] = obj[0x12] | 1;
            if (arg2 != 0) {
                func_01ffac40(self);
            }
        }
        r  = ((VB *) self)->f8(it, 0);
        it = (void **) r;
    } while (r != 0);
}
