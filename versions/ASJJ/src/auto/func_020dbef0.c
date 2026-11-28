/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

void func_020ddf00(void *);                         /* extern */
void func_020ddf34(void *);                         /* extern */
s32 func_020da994(void);                            /* extern */
void func_020dc318(void *, s32);                    /* extern */
void func_020dc0a8(void *, s32);                    /* extern */
u32 func_020daa7c(s32, s32, s32);                   /* extern */
s32 func_020daa60(u32, s32, s32);                   /* extern */

s32 func_020dbef0(void *arg0) {
    u8 *p;
    s32 r5;
    s32 r4;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r0_3;
    u32 temp_r1;
    u32 var_r1;

    p = (u8 *) arg0;
    if (arg0 == NULL) {
        return 0;
    }
    if ((*(s32 *) (p + 0x258) == 0 && *(s32 *) (p + 0xDC) == 0) || *(s32 *) (p + 0x1C) != 0) {
        return 0;
    }
    r4 = *(s32 *) (p + 0x268);
    if (r4 == 0) {
        func_020ddf00(arg0);
        r4 = *(s32 *) (p + 0x268);
    }
    if (*(s32 *) (p + 0x2E8) != 0) {
        func_020ddf34(arg0);
    }
    r5 = func_020da994();
    func_020dc318(arg0, r5);
    func_020dc0a8(arg0, r5);
    if ((*(s32 *) (p + 0xDC) == 0) && ((*(s32 *) (p + 0x2E8) == 0) || (*(s32 *) (p + 0x288) != 0))) {
        if (*(s32 *) (p + 0x14) == 0) {
            return 0;
        }
        temp_r0_2 = func_020daa60(
            func_020daa7c((*(s32 *) (p + 0x258) - *(s32 *) (p + 0x26C)) * 1000, *(s32 *) (p + 0x18), *(s32 *) (p + 0x14)),
            *(s32 *) ((u8 *) *(void **) (p + 0x2F0) + 0x6C), 0x10);
        temp_r2 = r5 - (r4 + *(s32 *) (p + 0x328));
        if (temp_r2 >= temp_r0_2) {
            temp_r2_2 = temp_r2 - temp_r0_2;
            if (temp_r2_2 > *(s32 *) (p + 0x270)) {
                if (*(s32 *) (p + 0x2E8) == 0) {
                    *(s32 *) (p + 0x268) = r5;
                    *(s32 *) (p + 0x26C) = *(s32 *) (p + 0x258) - 1;
                    *(s32 *) (p + 0x330) = 0;
                } else {
                    *(s32 *) (p + 0x328) = temp_r2_2;
                    *(u32 *) (p + 0x32C) = func_020daa7c(*(s32 *) (p + 0x328), *(s32 *) (p + 0x18), *(s32 *) (p + 0x14));
                }
            }
            temp_r1   = *(u32 *) (p + 0x32C);
            temp_r0_3 = *(s32 *) (p + 0x328);
            if ((u32) temp_r0_3 < temp_r1) {
                *(s32 *) (p + 0x328) = 0;
            } else {
                *(s32 *) (p + 0x328) = temp_r0_3 - temp_r1;
            }
            return 0;
        }
    }
    if (*(s32 *) (p + 0xE8) == 0) {
        if ((*(u32 *) (p + 0x20) & 0x08000000) != 0 ||
            (var_r1 = *(u32 *) (p + 0xD4), var_r1 = (var_r1 < *(u32 *) (p + 0x138)) ? var_r1 : *(volatile u32 *) (p + 0x138),
             *(u32 *) (p + 0x13C) < (var_r1 >> 1))) {
            (*(void (**)(void *))(p + 0x100))(p + 0xF0);
        }
    }
    return 1;
}
