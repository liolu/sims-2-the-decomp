/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual M2C_UNK f1();
};
struct VC1 {
    virtual void f0();
    virtual M2C_UNK f1();
};

extern "C" M2C_UNK func_020d5880(...);                         /* extern */

extern "C" void func_02005e64(void *arg0) {
    s16 temp_r0_2;
    s32 var_r1;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r2;

    temp_r0 = M2C_FIELD(arg0, void **, 0x384);
    if (M2C_FIELD(temp_r0, s32 *, 4) & 0x400000) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        return;
    }
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VC0 *) (temp_r0))->f1();
        }
        M2C_FIELD(arg0, void **, 0x384) = 0;
    }
    temp_r2                      = M2C_FIELD(arg0, void **, 0x34C);
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) | 0x10);
    temp_r0_2                    = M2C_FIELD(arg0, s16 *, 0x2EC);
    switch (temp_r0_2) {
        case 0:
            func_020d5880(0x119);
            break;
        case 1:
            func_020d5880(0x11E);
            break;
        case 2:
            func_020d5880(0x11B);
            break;
        case 3:
            func_020d5880(0x11C);
            break;
        case 4:
            func_020d5880(0x11A);
            break;
        case 5:
            func_020d5880(0x11F);
            break;
        case 6:
            func_020d5880(0x22B);
            break;
        case 7:
            func_020d5880(0x11D);
            break;
        default:
            func_020d5880(0x123);
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x2E8) = 8;
    M2C_FIELD(arg0, s8 *, 0x2EE)  = 2;
    temp_r0_3                     = M2C_FIELD(arg0, void **, 0x384);
    if (temp_r0_3 != NULL) {
        ((VC1 *) (temp_r0_3))->f1();
    }
    M2C_FIELD(arg0, void **, 0x384) = 0;
}
