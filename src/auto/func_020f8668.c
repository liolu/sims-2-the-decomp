/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020f69d0();                                /* extern */
extern s32 data_02145f48;
extern s32 data_02145f4c;

void func_020f8668(void) {
    s32 temp_r0;

    temp_r0       = func_020f69d0();
    data_02145f4c = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_02145f48 = 0x06894000;
            return;
        case 0x20:
            data_02145f48 = 0x06890000;
            return;
    }
}
