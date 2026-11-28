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
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
};

extern "C" s32 func_02011090(void *, s32, s32, s32, s32);
extern "C" s32 func_0205ecc8(void *);
extern "C" void *func_02087150(s32, s32, s32);
extern "C" u8 *data_0213df5c;
extern "C" s32 data_0213e0a8;

extern "C" s32 func_02034b84(u8 *arg0, s32 arg1) {
    void *t;
    if (arg1 == 0x29) {
        if ((*(s32 *) (arg0 + 0x28) != data_0213df5c[0x12]) || (arg0[0x31] != 0)) {
            func_0205ecc8(data_0213df5c + 0xC);
            *(s8 *) (arg0 + 0x13) = 1;
            t                     = func_02087150(data_0213e0a8, 0xB, 0x127);
            if (t != NULL) {
                func_02011090(t, 0x8F, 0, 1, 0);
            }
            return 2;
        }
    } else if (arg1 == 0x28) {
        t = func_02087150(data_0213e0a8, 0xB, 0x127);
        if ((t != NULL) && (t != NULL)) {
            ((VA *) t)->f1();
        }
        return 2;
    }
    return 0;
}
