/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry0203e98c {
    u8 unk0[8];
    u8 unk8;
    u8 unk9[0xF];
} Entry0203e98c;

extern u8 data_021398b0[];
extern s32 data_027e0000;
s32 func_0203e834(s32, s32, s32, s32, s32, u16, s32);

s32 func_0203e914(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5, s32 arg6, s32 arg7) {
    s32 index = func_0203e834(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    ((Entry0203e98c *) (data_021398b0 + data_027e0000 * 0x120))[index].unk8 = arg7;
    return index;
}
