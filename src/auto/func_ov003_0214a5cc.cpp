/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" void **func_0204688c(s32, s32, s32);
extern "C" void **func_ov003_0214be8c(void **, void *);
extern "C" void **func_ov003_0214c32c(void **, void *);
extern "C" void **func_ov003_0214d114(void **, void *);
extern "C" void **func_ov003_0214d9d8(void **, void *);
extern "C" void **func_ov003_0214df4c(void **, void *);
extern "C" void **func_ov003_0214f4ec(void **, void *);

extern "C" void func_ov003_0214a5cc(void *arg0) {
    void **temp_r0;
    void **var_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r1;

    temp_r0 = *(void ***) ((u8 *) arg0 + 0x58);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VA *) temp_r0)->f1();
        }
        *(void ***) ((u8 *) arg0 + 0x58) = (void **) 0;
    }
    temp_r0_2 = *(u16 *) ((u8 *) arg0 + 0x74);
    switch (temp_r0_2) {
        default:
            break;
        case 0:
            var_r0 = func_0204688c(0xDC, 3, 4);
            if (var_r0 != NULL) {
                var_r0 = func_ov003_0214d9d8(var_r0, arg0);
            }
            *(void ***) ((u8 *) arg0 + 0x58) = var_r0;
            break;
        case 1:
        case 6:
            var_r0 = func_0204688c(0x4C, 3, 4);
            if (var_r0 != NULL) {
                var_r0 = func_ov003_0214d114(var_r0, arg0);
            }
            *(void ***) ((u8 *) arg0 + 0x58) = var_r0;
            break;
        case 2:
            var_r0 = func_0204688c(0x14, 3, 4);
            if (var_r0 != NULL) {
                var_r0 = func_ov003_0214c32c(var_r0, arg0);
            }
            *(void ***) ((u8 *) arg0 + 0x58) = var_r0;
            break;
        case 3:
        case 7:
            var_r0 = func_0204688c(0x24, 3, 4);
            if (var_r0 != NULL) {
                var_r0 = func_ov003_0214f4ec(var_r0, arg0);
            }
            *(void ***) ((u8 *) arg0 + 0x58) = var_r0;
            break;
        case 4:
            var_r0 = func_0204688c(0x18, 3, 4);
            if (var_r0 != NULL) {
                var_r0 = func_ov003_0214be8c(var_r0, arg0);
            }
            *(void ***) ((u8 *) arg0 + 0x58) = var_r0;
            break;
        case 5:
            var_r0 = func_0204688c(0x18, 3, 4);
            if (var_r0 != NULL) {
                var_r0 = func_ov003_0214df4c(var_r0, arg0);
            }
            *(void ***) ((u8 *) arg0 + 0x58) = var_r0;
            break;
    }
    if ((*(u8 *) ((u8 *) arg0 + 0x82) != 0) &&
        ((temp_r1 = *(u16 *) ((u8 *) arg0 + 0x74), (temp_r1 == 0)) || ((u32) (u16) (temp_r1 + 0xFFFD) <= 1U))) {
        *(s16 *) ((u8 *) arg0 + 0x78) = 2;
    }
    if ((*(u8 *) ((u8 *) arg0 + 0x82) == 0) &&
        ((temp_r0_3 = *(u16 *) ((u8 *) arg0 + 0x74), (temp_r0_3 == 1)) || (temp_r0_3 == 2) || (temp_r0_3 == 6))) {
        *(s16 *) ((u8 *) arg0 + 0x78) = 1;
    }
    *(s8 *) ((u8 *) arg0 + 0x81) = 0;
}
