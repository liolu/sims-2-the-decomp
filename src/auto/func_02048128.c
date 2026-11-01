/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;

void func_02048128(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r0;

    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    temp_r0                           = (void *) ((u8 *) arg0 + (data_027e0000 << 5));
    *(s32 *) ((u8 *) temp_r0 + 0xDF0) = arg1;
    *(s32 *) ((u8 *) temp_r0 + 0xDF4) = arg2;
    *(s32 *) ((u8 *) temp_r0 + 0xDF8) = arg3;
    *(s32 *) ((u8 *) temp_r0 + 0xDFC) = arg4;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
        return;
    }
    data_027e0000 = 0;
}
