/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};
typedef struct {
    u16 v;
} S16;

extern "C" M2C_UNK func_0204450c(s32);
extern "C" M2C_UNK func_0203c3d8(s32, s32, s32);
extern "C" M2C_UNK func_0203d0ac(s32);
extern "C" M2C_UNK func_0203d100(s32, s32);
extern "C" u16 func_0203d164(s32);
extern "C" M2C_UNK func_02051dbc(S16);

extern "C" void func_0206f3cc(void *arg0) {
    void *temp_r0;
    S16 tmp;

    func_0204450c(0xE4D);
    temp_r0 = *(void **) ((u8 *) arg0 + 0x4E8);
    if (temp_r0 != NULL) {
        ((VA *) temp_r0)->f1();
    }
    temp_r0 = *(void **) ((u8 *) arg0 + 0x4F4);
    if (temp_r0 != NULL) {
        ((VA *) temp_r0)->f1();
    }
    temp_r0 = *(void **) ((u8 *) arg0 + 0x4F8);
    if (temp_r0 != NULL) {
        ((VA *) temp_r0)->f1();
    }
    temp_r0 = *(void **) ((u8 *) arg0 + 0x4FC);
    if (temp_r0 != NULL) {
        ((VA *) temp_r0)->f1();
    }
    temp_r0 = *(void **) ((u8 *) arg0 + 0x500);
    if (temp_r0 != NULL) {
        ((VA *) temp_r0)->f1();
    }
    temp_r0 = *(void **) ((u8 *) arg0 + 0x4EC);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VA *) temp_r0)->f1();
        }
    }
    temp_r0 = *(void **) ((u8 *) arg0 + 0x4F0);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VA *) temp_r0)->f1();
        }
    }
    func_0203c3d8(3, 0, 0);
    func_0203d0ac(3);
    func_0203c3d8(1, 0, 0);
    func_0203d100(1, *(s32 *) ((u8 *) arg0 + 0x528) & 0xFF);
    tmp.v = func_0203d164(1);
    func_02051dbc(tmp);
    *(volatile u32 *) 0x04001000 = *(volatile u32 *) 0x04001000 & ~0x2000;
}
