/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" M2C_UNK func_02018af8(void *, s32, s32, s32);
extern "C" M2C_UNK func_0204681c(void *);
extern "C" void *data_0213e580;
extern "C" s32 data_027e0000;

extern "C" void func_ov005_02149b8c(void *arg0) {
    void *temp_r1;
    s32 var_r5;
    void **temp_r0;

    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02018af8((u8 *) *(void **) ((u8 *) data_0213e580 + 0xF8) + 0x128, 2, 0, 2);
    temp_r1 = *(void **) ((u8 *) arg0 + 8);
    if (temp_r1 != NULL) {
        *(s32 *) ((u8 *) temp_r1 + 0x134) = 0;
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    var_r5 = 0;
    do {
        temp_r0 = ((void ***) *(void **) ((u8 *) arg0 + 0x24))[var_r5];
        if (temp_r0 != NULL) {
            ((VA *) temp_r0)->f1();
        }
        var_r5 += 1;
    } while (var_r5 < 8);
    func_0204681c(*(void **) ((u8 *) arg0 + 0x24));
    *(void **) ((u8 *) arg0 + 0x24) = NULL;
}
