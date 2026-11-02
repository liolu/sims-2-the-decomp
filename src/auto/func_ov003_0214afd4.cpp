/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" M2C_UNK func_ov003_02149fa8(void *);
extern "C" M2C_UNK func_020bb50c(void);
extern "C" M2C_UNK func_020105d0(s32);
extern "C" s32 func_020480dc(void *, s32);
extern "C" M2C_UNK func_020bc9f8(void *, s32, s32);
extern "C" M2C_UNK func_020d508c(void);
extern "C" s32 data_027e0000;
extern "C" u8 data_027e0014[];
extern "C" u8 data_02139fb4[];
extern "C" void *data_02139fa4;
extern "C" void *data_0213f98c;

extern "C" void func_ov003_0214afd4(void *arg0) {
    void *temp_r0;
    s32 var_r6;
    s32 var_r5;
    s32 temp_r0_2;

    func_ov003_02149fa8(arg0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    *(s32 *) ((u8 *) data_02139fb4 + 0x268) = *(s32 *) ((u8 *) data_02139fb4 + 0x264);
    *(s32 *) ((u8 *) data_02139fb4 + 0x264) = 3;
    func_020bb50c();
    temp_r0 = *(void **) ((u8 *) arg0 + 0x44);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VA *) temp_r0)->f1();
        }
        *(void **) ((u8 *) arg0 + 0x44) = NULL;
    }
    var_r6 = 0;
    var_r5 = 0;
    do {
        temp_r0 = ((void **) ((u8 *) arg0 + 0x48))[var_r6];
        if (temp_r0 != NULL) {
            if (temp_r0 != NULL) {
                ((VA *) temp_r0)->f1();
            }
            ((void **) ((u8 *) arg0 + 0x48))[var_r6] = (void *) var_r5;
        }
        var_r6 += 1;
    } while (var_r6 < 2);
    func_020105d0((data_027e0000 * 0x34) + (s32) (&data_027e0014[0]));
    temp_r0_2 = func_020480dc(data_02139fa4, data_027e0000);
    if (temp_r0_2 == 0x18) {
        func_020bc9f8(data_0213f98c, 4, 0);
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_020d508c();
}
