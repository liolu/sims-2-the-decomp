/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual M2C_UNK f4();
};
struct VC1 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual M2C_UNK f4();
};

extern "C" M2C_UNK func_02015f04(void *, M2C_UNK);             /* extern */

extern "C" s32 func_020168bc(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_02015f04(arg0, 1);
    ((VC0 *) (arg0))->f4();
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x49) & 0x10;
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) | 0x10000000);
    ((VC1 *) (arg0))->f4();
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x10) & ~0x10000000;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r0;
    return temp_r0;
}
