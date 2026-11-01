/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual M2C_UNK f1();
};

extern "C" void *data_02139250;

extern "C" void func_02004454(void) {
    s32 var_r0;
    void *temp_r0;
    void *temp_r4;

    temp_r4 = data_02139250;
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x34C), s32 *, 4) & 0x400000) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(temp_r4, void **, 0x34C);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VC0 *) (temp_r0))->f1();
        }
        M2C_FIELD(temp_r4, s32 *, 0x34C) = 0;
    }
    M2C_FIELD(temp_r4, s8 *, 0x2F0) = 1;
}
