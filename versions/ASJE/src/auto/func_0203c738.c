/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_021392f8[];
extern s32 data_027e0000;

void func_0203c738(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5) {
    u8 *plane;
    s16 *dst;
    s32 x;
    s32 y;
    s32 idx = data_027e0000;

    plane = *(u8 **) (data_021392f8 + idx * 0x1D8 + arg0 * 0x74 + 0x14);
    for (y = 0; y < arg4; y++) {
        dst = (s16 *) (plane + ((arg2 + y) << 6) + arg1 * 2);
        for (x = 0; x < arg3; x++) {
            *dst++ = arg5;
        }
    }
}
