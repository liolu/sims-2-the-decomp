/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021392f8;
extern s32 data_027e0000;

void func_0203d190(s32 arg0, volatile u16 arg1, ...) {
    volatile u16 sp0;
    u8 *base;
    u8 *g;
    s32 off;
    s32 off2;
    s32 bit;
    s32 *r;

    sp0                          = arg1;
    off                          = arg0 * 0x74;
    base                         = (u8 *) &data_021392f8 + data_027e0000 * 0x1D8 + 8;
    g                            = (u8 *) 0x04000008;
    *(u16 *) (base + off)        = sp0;
    off2                         = arg0 * 2;
    *(s32 *) (base + off + 0xC)  = (data_027e0000 << 0x15) + 0x06000000 + (((u32) (sp0 << 0x13) >> 0x1B) << 0xB);
    bit                          = 0x100;
    *(s32 *) (base + off + 0x8)  = *(s32 *) (base + off + 0xC);
    *(s32 *) (base + off + 0x10) = (data_027e0000 << 0x15) + 0x06000000 + (((u32) (sp0 << 0x1B) >> 0x1D) << 0xE);
    ((u16 *) (0x04000008 + (data_027e0000 << 0xC)))[arg0] = sp0;
    r                                                     = (s32 *) (0x04000000 + (data_027e0000 << 0xC));
    *r                                                    = *r | (bit << arg0);
}
