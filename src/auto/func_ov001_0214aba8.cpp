/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" M2C_UNK func_02018af8(void *, s32, s32, s32);

extern "C" void func_ov001_0214aba8(void *arg0) {
    s32 var_r6;
    void *temp_r0;

    var_r6 = 0;
    do {
        temp_r0 = ((void **) arg0)[9 + var_r6];
        if (temp_r0 != NULL) {
            if (temp_r0 != NULL) {
                ((VA *) temp_r0)->f1();
            }
            ((void **) arg0)[9 + var_r6] = NULL;
        }
        var_r6 += 1;
    } while (var_r6 < 5);
    temp_r0 = (void **) ((void **) arg0)[0x38 / 4];
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VA *) temp_r0)->f1();
        }
        ((void **) arg0)[0x38 / 4] = NULL;
    }
    temp_r0 = (void **) ((void **) arg0)[0xD0 / 4];
    if (temp_r0 != NULL) {
        func_02018af8((u8 *) temp_r0 + 0x128, 2, 0, 2);
    }
    temp_r0 = ((void **) arg0)[0xD4 / 4];
    if (temp_r0 != NULL) {
        func_02018af8((u8 *) temp_r0 + 0x128, 2, 0, 2);
    }
}
