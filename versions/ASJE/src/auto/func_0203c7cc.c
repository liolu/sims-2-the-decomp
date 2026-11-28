/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_027e0000[];
extern u8 data_021392f8[];

void func_0203c7cc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *st;
    u8 *base;
    s32 j;
    s32 i;
    u8 *t;
    u16 *row;

    st   = data_021392f8 + *(s32 *) data_027e0000 * 0x1d8 + arg0 * 0x74;
    base = *(u8 **) (st + 0x14);
    for (i = 0; i < arg4; i++) {
        t   = base + (arg2 + i) * 0x40;
        row = (u16 *) (t + arg1 * 2);
        for (j = 0; j < arg3; j++) {
            *row++ = 0;
        }
    }
}
