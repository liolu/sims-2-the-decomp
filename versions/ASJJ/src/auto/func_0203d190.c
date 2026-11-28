/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    volatile u16 v;
} S16;
extern u8 data_02138f18;
extern s32 data_027e0000;

void func_0203d190(s32 arg0, S16 s) {
    s32 temp_lr;
    u8 *temp_r4;
    u8 *temp_r1;

    temp_lr                      = arg0 * 0x74;
    temp_r4                      = (u8 *) ((data_027e0000 * 0x1D8) + (s32) &data_02138f18 + 8);
    temp_r1                      = temp_r4 + temp_lr;
    *(u16 *) (temp_r4 + temp_lr) = s.v;
    *(s32 *) (temp_r1 + 0xC)     = (s32) ((data_027e0000 << 0x15) + 0x06000000 + (((u32) (s.v << 0x13) >> 0x1B) << 0xB));
    *(s32 *) (temp_r1 + 8)       = *(s32 *) (temp_r1 + 0xC);
    *(s32 *) (temp_r1 + 0x10)    = (s32) ((data_027e0000 << 0x15) + 0x06000000 + (((u32) (s.v << 0x1B) >> 0x1D) << 0xE));
    *(u16 *) ((data_027e0000 << 0xC) + 0x04000008 + (arg0 * 2)) = s.v;
}
