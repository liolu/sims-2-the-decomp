/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual M2C_UNK f1();
};

extern "C" M2C_UNK func_02016fb4(void *);                      /* extern */
extern "C" M2C_UNK func_02046844(void *);                      /* extern */
extern "C" M2C_UNK data_0212ff10;

extern "C" void *func_020176a0(void *arg0) {
    void *temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212ff10;
    temp_r0                        = M2C_FIELD(arg0, void **, 0x74);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 4) = (s32) (M2C_FIELD(temp_r0, s32 *, 4) - 1);
        if ((M2C_FIELD(temp_r0, s32 *, 4) == 0) && (temp_r0 != NULL)) {
            ((VC0 *) (temp_r0))->f1();
        }
    }
    func_02016fb4(arg0);
    func_02046844(arg0);
    return arg0;
}
