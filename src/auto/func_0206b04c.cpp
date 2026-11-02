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
    virtual void *f7();
};

extern "C" void func_02001944(s32);
extern "C" void func_02001914(void);
extern "C" M2C_UNK func_02067698(s32, u16, u16);
extern "C" M2C_UNK func_0206a288(void *);
extern "C" M2C_UNK func_0206a448(void *);
extern "C" void *data_02139fa4;

extern "C" void func_0206b04c(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r1;
    void *temp_r0_2;
    void *temp_r0_3;

    temp_r0 = *(void **) ((u8 *) arg0 + 0x300);
    if (temp_r0 == NULL) {
        return;
    }
    if ((s32) * (void **) temp_r0 != arg1) {
        return;
    }
    func_02001944(1);
    if (*(s32 *) ((u8 *) data_02139fa4 + 8) == 0) {
        temp_r1 = *(void **) ((u8 *) arg0 + 0x300);
        if ((temp_r1 == NULL) || ((temp_r0_2 = *(void **) ((u8 *) (*(void **) temp_r1) + 0x130)) == NULL) ||
            (*(s32 *) ((u8 *) temp_r1 + 4) == 2)) {
            func_02067698(*(s32 *) ((u8 *) arg0 + 0xC), 0xFFFF, 0xFFFF);
        } else {
            temp_r0_3 = ((VA *) temp_r0_2)->f7();
            func_02067698(*(s32 *) ((u8 *) arg0 + 0xC), *(u16 *) ((u8 *) temp_r0_3 + 0xA), *(u16 *) ((u8 *) temp_r0_3 + 0xC));
        }
        func_0206a288(arg0);
        func_0206a448(arg0);
    } else {
        *(s8 *) ((u8 *) arg0 + 0x31D) = 1;
    }
    func_02001914();
}
