/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020f7eec(void *arg0);

void func_020bc598(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p;
    s32 val;

    p   = arg0;
    val = arg2;
    switch (arg1) {
        case 0:
            if (((u32) (*(u16 *) (p + 0x784) << 31)) >> 31 == val) {
                return;
            }
            if (val != 0) {
                *(volatile u16 *) 0x04000060 = (*(volatile u16 *) 0x04000060 & ~0x3000) | 0x20;
            } else {
                *(volatile u16 *) 0x04000060 = *(volatile u16 *) 0x04000060 & 0xcfdf;
            }
            if (val != 0) {
                func_020f7eec(p + 0x1b0);
            }
            *(u16 *) (p + 0x784) = (*(u16 *) (p + 0x784) & ~1) | (val & 1);
            break;
        case 1:
            if (val == 1) {
                *(volatile u16 *) 0x04000060 = *(volatile u16 *) 0x04000060 & 0xffffcffd;
            } else {
                *(volatile u16 *) 0x04000060 = (*(volatile u16 *) 0x04000060 & 0xffffcffd) | 2;
            }
            break;
        case 2:
            if ((((u32) (*(u16 *) (p + 0x784)) << 29) >> 31) == val) {
                return;
            }
            if (val != 0) {
                *(volatile u16 *) 0x04000060 = (*(volatile u16 *) 0x04000060 & ~0x3000) | 0x10;
            } else {
                *(volatile u16 *) 0x04000060 = *(volatile u16 *) 0x04000060 & 0xcfef;
            }
            *(u16 *) (p + 0x784) = (*(u16 *) (p + 0x784) & ~4) | ((val & 1) << 2);
            break;
        case 3:
            if ((((u32) (*(u16 *) (p + 0x784)) << 28) >> 31) == val) {
                return;
            }
            if (val != 0) {
                *(volatile u16 *) 0x04000060 = (*(volatile u16 *) 0x04000060 & ~0x3000) | 0x8;
            } else {
                *(volatile u16 *) 0x04000060 = *(volatile u16 *) 0x04000060 & 0xcff7;
            }
            *(u16 *) (p + 0x784) = (*(u16 *) (p + 0x784) & ~8) | ((val & 1) << 3);
            break;
        case 4:
            if ((((u32) (*(u16 *) (p + 0x784)) << 27) >> 31) == val) {
                return;
            }
            if (val != 0) {
                *(volatile u16 *) 0x04000060 = (*(volatile u16 *) 0x04000060 & ~0x3000) | 0x4;
                *(volatile u16 *) 0x04000340 = 1;
            } else {
                *(volatile u16 *) 0x04000060 = *(volatile u16 *) 0x04000060 & 0xcffb;
            }
            *(u16 *) (p + 0x784) = (*(u16 *) (p + 0x784) & ~0x10) | ((val & 1) << 4);
            break;
        case 5:
            p[0x1ce] = val;
            break;
        case 6:
            p[0x1de] = val;
            break;
        case 7:
            p[0x1ee] = val;
            break;
        case 8:
            p[0x1fe] = val;
            break;
    }
    return;
}
