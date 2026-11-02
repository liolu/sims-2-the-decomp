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
extern "C" void *func_0204561c(void);
extern "C" void func_02010650(s32, s32);
extern "C" s32 data_027e0000;
extern "C" u8 data_027e0014;
extern "C" void func_020105d0(void **arg0) {
    void *var_r0;
    void *temp_r4;
    void **temp_r0;
    var_r0 = func_0204561c();
    if (var_r0 != NULL) {
        do {
            temp_r4 = ((void **) var_r0)[1];
            temp_r0 = *(void ***) var_r0;
            if (temp_r0 != NULL) {
                (*(void (**)(void *))((*(u8 **) temp_r0) + 4))(temp_r0);
            }
            var_r0 = temp_r4;
        } while (temp_r4 != NULL);
    }
    ((VA *) arg0)->f7();
    func_02010650(data_027e0000 * 0x34 + (s32) &data_027e0014, 1);
}
