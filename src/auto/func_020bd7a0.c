/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020bd7a0(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0x8:
            M2C_FIELD(arg0, s8 *, 0x1D) = 0;
            return;
        case 0x20:
            M2C_FIELD(arg0, s8 *, 0x1D) = 2;
            return;
        case 0x80:
            M2C_FIELD(arg0, s8 *, 0x1D) = 4;
            return;
        case 0x200:
            M2C_FIELD(arg0, s8 *, 0x1D) = 6;
            return;
        case 0x400:
            M2C_FIELD(arg0, s8 *, 0x1D) = 7;
            return;
        case 0x10:
            M2C_FIELD(arg0, s8 *, 0x1D) = 1;
            return;
        case 0x40:
            M2C_FIELD(arg0, s8 *, 0x1D) = 3;
            return;
        case 0x100:
            M2C_FIELD(arg0, s8 *, 0x1D) = 5;
            return;
    }
}
