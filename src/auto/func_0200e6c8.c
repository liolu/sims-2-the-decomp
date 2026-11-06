/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u16 a, b, c, d;
} H4;
M2C_UNK func_0200dc20(void *, M2C_UNK, u16);
extern u16 data_0212fbbc[];
void func_0200e6c8(void *arg0, u16 arg1, s32 arg2) {
    H4 sp;
    volatile s32 *p;
    if ((arg2 == 0) && (*(u16 *) ((u8 *) arg0 + 0x22A) == arg1)) {
        return;
    }
    *(u16 *) ((u8 *) arg0 + 0x22A) = arg1;
    if (arg1 == 0xFFFF) {
        return;
    }
    sp                           = *(H4 *) data_0212fbbc;
    *(volatile u16 *) 0x04000280 = 0;
    *(volatile s32 *) 0x04000290 = (s32) arg1;
    p                            = (volatile s32 *) 0x04000298;
    p[0]                         = 8;
    p[1]                         = 0;
    while (*(volatile u16 *) 0x04000280 & 0x8000) {
    }
    func_0200dc20(arg0, 5, ((u16 *) &sp)[*(volatile s32 *) 0x040002A0]);
}
