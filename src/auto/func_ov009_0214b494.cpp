/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct U16S {
    u16 v;
};
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" M2C_UNK func_02016688(void *, s32, s32);
extern "C" M2C_UNK func_0203d208(s32, U16S);
extern "C" u8 data_ov009_0214c05c[];

extern "C" void func_ov009_0214b494(void *arg0, s32 arg1) {
    void *temp_r0;
    s32 var_r4;

    switch (arg1) {
        case 1:
            *(u16 *) ((u8 *) arg0 + 0x10) = 0x14;
            return;
        case 2:
            *(u16 *) ((u8 *) arg0 + 0x10) = 0xB;
            func_02016688(*(void **) ((u8 *) arg0 + 0x34), 0x3FA, 0);
            *(s32 *) ((u8 *) *(void **) ((u8 *) arg0 + 0x34) + 4) =
                *(s32 *) ((u8 *) *(void **) ((u8 *) arg0 + 0x34) + 4) | 0x10;
            return;
        case 4:
            *(u16 *) ((u8 *) arg0 + 0x10) = 0xB;
            func_02016688(*(void **) ((u8 *) arg0 + 0x34), 0x3F9, 0);
            func_0203d208(1, *(U16S *) data_ov009_0214c05c);
            return;
        case 0:
            *(u16 *) ((u8 *) arg0 + 0x10) = 1;
            return;
        case 5:
            *(u16 *) ((u8 *) arg0 + 0x10) = 0x40;
            return;
        case 3:
            *(volatile u32 *) 0x04001000 = *(volatile u32 *) 0x04001000 | 0x2000;
            *(volatile u16 *) 0x0400104A = *(volatile u16 *) 0x0400104A & ~0x10;
            var_r4                       = 0;
            do {
                temp_r0 = ((void **) ((u8 *) arg0 + 0x4C))[var_r4];
                if (temp_r0 != NULL) {
                    if (temp_r0 != NULL) {
                        ((VA *) temp_r0)->f1();
                    }
                    ((void **) ((u8 *) arg0 + 0x4C))[var_r4] = NULL;
                }
                var_r4 += 1;
            } while (var_r4 < 4);
            return;
        default:
            return;
    }
}
