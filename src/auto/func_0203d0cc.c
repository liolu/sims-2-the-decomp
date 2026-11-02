/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139438;
extern s32 data_027e0000;

void func_0203d0cc(s32 arg0, s32 arg1) {
    s32 temp_lr;
    u8 *temp_r4;
    u16 cur;
    s32 low;
    temp_lr                                                  = arg0 * 0x74;
    temp_r4                                                  = (u8 *) &data_02139438 + data_027e0000 * 0x1D8 + 8;
    cur                                                      = *(u16 *) (temp_r4 + temp_lr);
    low                                                      = arg1 & 3;
    *(u16 *) (temp_r4 + temp_lr)                             = (u16) ((cur & ~3) | low);
    *(u16 *) ((data_027e0000 << 12) + 0x04000008 + arg0 * 2) = *(u16 *) (temp_r4 + temp_lr);
}
