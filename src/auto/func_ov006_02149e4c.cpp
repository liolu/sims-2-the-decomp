/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" void func_02001944(s32);
extern "C" void func_02001914(void);
extern "C" s32 func_020187ec(void *);
extern "C" void func_01ffabc8(void *, s32, s32);
extern "C" void func_0200fb30(void *, s32, s32);
extern "C" void *data_0213e580;

extern "C" void func_ov006_02149e4c(void *arg0) {
    void *temp_r0;
    s32 var_r6;
    s32 var_r5;

    func_02001944(0);
    temp_r0 = (u8 *) *(void **) ((u8 *) arg0 + 0x24) + 0xE0;
    if (func_020187ec(temp_r0) == 8) {
        func_01ffabc8((u8 *) *(void **) ((u8 *) arg0 + 0x24) + 0xE0, 8, 0);
    }
    func_0200fb30(*(void **) ((u8 *) data_0213e580 + 0xF8), 0, 0);
    temp_r0 = (u8 *) *(void **) ((u8 *) data_0213e580 + 0xF8) + 0xE0;
    if (func_020187ec(temp_r0) == 8) {
        func_01ffabc8((u8 *) *(void **) ((u8 *) data_0213e580 + 0xF8) + 0xE0, 8, 0);
    }
    func_02001914();
    temp_r0 = *(void **) ((u8 *) arg0 + 0x28);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VA *) temp_r0)->f1();
        }
        *(void **) ((u8 *) arg0 + 0x28) = NULL;
    }
    temp_r0 = *(void **) ((u8 *) arg0 + 0x2C);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VA *) temp_r0)->f1();
        }
        *(void **) ((u8 *) arg0 + 0x2C) = NULL;
    }
    temp_r0 = *(void **) ((u8 *) arg0 + 0x30);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VA *) temp_r0)->f1();
        }
        *(void **) ((u8 *) arg0 + 0x30) = NULL;
    }
    var_r6 = 0;
    var_r5 = 0;
    do {
        temp_r0 = ((void **) ((u8 *) arg0 + 0x34))[var_r6];
        if (temp_r0 != NULL) {
            if (temp_r0 != NULL) {
                ((VA *) temp_r0)->f1();
            }
            ((void **) ((u8 *) arg0 + 0x34))[var_r6] = (void *) var_r5;
        }
        var_r6 += 1;
    } while (var_r6 < 6);
}
