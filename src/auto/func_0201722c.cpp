/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual M2C_UNK f1();
};

extern "C" void func_0201722c(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, void **, 0x74);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 4) = (s32) (M2C_FIELD(temp_r0, s32 *, 4) - 1);
        if ((M2C_FIELD(temp_r0, s32 *, 4) == 0) && (temp_r0 != NULL)) {
            ((VC0 *) (temp_r0))->f1();
        }
    }
    M2C_FIELD(arg0, void **, 0x74) = (void *) M2C_FIELD(arg1, void **, 0x74);
    temp_r1                        = M2C_FIELD(arg0, void **, 0x74);
    M2C_FIELD(temp_r1, s32 *, 4)   = (s32) (M2C_FIELD(temp_r1, s32 *, 4) + 1);
}
