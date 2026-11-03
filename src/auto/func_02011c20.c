/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020153a8(void *);
void *func_02018a60(void *);
void *func_020b9b84(void *);
void func_01ffab70(void *, void *);
void func_020fca8c(s32, void *, s32);
extern u8 data_0212fcb0;

void *func_02011c20(void *arg0) {
    volatile s32 sp0;

    func_020153a8(arg0);
    *(void **) arg0 = &data_0212fcb0;
    func_02018a60((u8 *) arg0 + 0xE0);
    *(s32 *) ((u8 *) arg0 + 0x130) = 0;
    *(s32 *) ((u8 *) arg0 + 0x134) = 0;
    *(s32 *) ((u8 *) arg0 + 0x144) = -1;
    *(u8 *) ((u8 *) arg0 + 0x148)  = 0x14;
    func_020b9b84((u8 *) arg0 + 0x14C);
    *(u8 *) ((u8 *) arg0 + 0x20C) = 1;
    *(u8 *) ((u8 *) arg0 + 0x20D) = 0;
    *(u8 *) ((u8 *) arg0 + 0x20E) = 0;
    *(u8 *) ((u8 *) arg0 + 0x20F) = 0;
    *(u8 *) ((u8 *) arg0 + 0x210) = 0x1F;
    *(s32 *) ((u8 *) arg0 + 4)    = *(s32 *) ((u8 *) arg0 + 4) | 0x10000000;
    *(s16 *) ((u8 *) arg0 + 0xE)  = 3;
    func_01ffab70((u8 *) arg0 + 0xE0, arg0);
    *(s32 *) ((u8 *) arg0 + 4) = *(s32 *) ((u8 *) arg0 + 4) | 0x800000;
    sp0                        = 0;
    func_020fca8c(sp0, (u8 *) arg0 + 0x138, 0xC);
    return arg0;
}
