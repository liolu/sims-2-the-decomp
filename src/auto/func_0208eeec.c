/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02124754;
extern void *data_0213e434;

void func_0208b3d4(void *p, s32 k);
void func_020bbee0(void *p, void *q);
void func_020bd908(void *p, u16 a, s32 b, s32 c, s32 d);
void func_020bdb24(void *p);
void func_020bdb84(void *p, s32 k);

s32 func_0208eeec(u8 *arg0, s32 arg1) {
    u8 sp4[0x28];
    s32 var_r2;
    u8 temp_r5;
    u8 temp_r1;
    u8 *temp_r0;

    if (*(u8 *) (arg0 + arg1 + 0x10) == 0x3D) {
        *(u8 *) ((u8 *) data_0213e434 + 0x44BD) = 12;
        temp_r5                                 = *(u8 *) ((u8 *) data_0213e434 + 0x44BD);
        func_020bdb84(sp4, 0xFFFF);
        func_020bd908(sp4, *(u16 *) ((u8 *) &data_02124754 + (temp_r5 * 2)), 0x40, 0x40, 4);
        func_020bbee0((u8 *) *(void **) (arg0 + 4) + 0x1A4, sp4);
        func_020bdb24(sp4);
        func_0208b3d4(arg0, 0x3D);
        var_r2 = *(s32 *) (arg0 + 8);
        if (var_r2 > *(s32 *) (arg0 + 0xC)) {
            do {
                temp_r0 = arg0 + (var_r2 - 1);
                temp_r1 = temp_r0[0x10];
                temp_r0 = arg0 + var_r2;
                var_r2 -= 1;
                temp_r0[0x10] = temp_r1;
            } while (var_r2 > *(s32 *) (arg0 + 0xC));
        }
        *(u8 *) (arg0 + *(s32 *) (arg0 + 0xC) + 0x10) = 0x3E;
        *(s32 *) (arg0 + 0xC)                         = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)                           = *(s32 *) (arg0 + 8) + 1;
        return 4;
    }
    return 0;
}
