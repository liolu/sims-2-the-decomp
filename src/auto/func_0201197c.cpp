/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual M2C_UNK f7();
};
struct VC1 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual M2C_UNK f7();
};
struct VC2 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual M2C_UNK f7();
};

extern "C" M2C_UNK func_0200ad3c(...);                      /* extern */
extern "C" M2C_UNK func_02011e04(...);             /* extern */
extern "C" M2C_UNK func_02015284(...);                      /* extern */
extern "C" M2C_UNK func_02018a3c(...);                      /* extern */
extern "C" M2C_UNK func_02046844(...);                      /* extern */
extern "C" M2C_UNK func_020b9a54(...);                      /* extern */
extern "C" M2C_UNK func_020d5604(...);                         /* extern */
extern "C" M2C_UNK data_0212fcb0;

extern "C" void *func_0201197c(void *arg0) {
    u16 temp_r0_2;
    void **temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212fcb0;
    func_020d5604(M2C_FIELD(arg0, s32 *, 0x144));
    temp_r0 = M2C_FIELD(arg0, void ***, 0x130);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VC0 *) temp_r0)->f1();
        }
        M2C_FIELD(arg0, void ***, 0x130) = 0;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x134);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x134) = 0;
        temp_r1_2                        = M2C_FIELD(arg0, void **, 0x134);
        temp_r0_2                        = M2C_FIELD(temp_r1_2, u16 *, 0xC);
        switch (temp_r0_2) {                        /* irregular */
            case 1:
            case 2:
                ((VC0 *) ((u8 *) temp_r1_2 + 0xE0))->f7();
                func_0200ad3c(M2C_FIELD(arg0, void **, 0x134));
                break;
            case 11:
                ((VC1 *) ((u8 *) temp_r1_2 + 0xE0))->f7();
                func_02011e04(M2C_FIELD(arg0, void **, 0x134), 1);
                break;
        }
        M2C_FIELD(arg0, void **, 0x134) = 0;
    }
    ((VC2 *) ((u8 *) arg0 + 0xE0))->f7();
    func_020b9a54((u8 *) arg0 + 0x14C);
    func_02018a3c((u8 *) arg0 + 0xE0);
    func_02015284(arg0);
    func_02046844(arg0);
    return arg0;
}
