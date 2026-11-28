/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020f6894();                                /* extern */
extern s32 data_02145e08;
extern s32 data_02145e0c;

void func_020f852c(void) {
    s32 temp_r0;

    temp_r0       = func_020f6894();
    data_02145e0c = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_02145e08 = 0x06894000;
            return;
        case 0x20:
            data_02145e08 = 0x06890000;
            return;
    }
}
