/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual M2C_UNK f2();
};
struct VC1 {
    virtual void f0();
    virtual void f1();
    virtual M2C_UNK f2();
};

extern "C" void *func_0204561c(...);                              /* extern */

extern "C" void func_020532d0(void *arg0) {
    void *temp_r0;
    void *var_r4;

    var_r4 = func_0204561c();
    if (var_r4 != NULL) {
        do {
            temp_r0 = M2C_FIELD(var_r4, void **, 0);
            if (M2C_FIELD(temp_r0, u8 *, 4) != 0) {
                if (M2C_FIELD(arg0, u8 *, 0x34) != 0) {
                    ((VC0 *) (temp_r0))->f2();
                }
            } else {
                ((VC1 *) (temp_r0))->f2();
            }
            var_r4 = M2C_FIELD(var_r4, void **, 4);
        } while (var_r4 != NULL);
    }
    M2C_FIELD(arg0, u8 *, 0x34) = 0U;
}
