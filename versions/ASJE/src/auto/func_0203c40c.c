/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Ch {
    u8 pad[0x14];
    s32 x14;
    s32 x18;
    s32 x1c;
    s32 x20;
    s32 x24;
    s32 x28;
    s32 x2c;
    u8 pad30[8];
    u16 x38;
    u8 pad3a[0x74 - 0x3a];
} Ch;
extern s32 data_027e0000;
extern u8 data_021392f8;
void func_0203c40c(s32 idx) {
    volatile s32 t[6];
    Ch *c = (Ch *) ((u8 *) &data_021392f8 + data_027e0000 * 0x1D8 + 8) + idx;
    s32 v;
    t[0]                                                   = 0;
    t[1]                                                   = 0;
    c->x14                                                 = 0;
    c->x38                                                 = 0;
    c->x28                                                 = t[0];
    v                                                      = t[1];
    t[5]                                                   = v;
    t[2]                                                   = v;
    c->x2c                                                 = v;
    c->x20                                                 = t[0];
    v                                                      = t[5];
    t[3]                                                   = v;
    c->x24                                                 = v;
    c->x18                                                 = t[0];
    v                                                      = t[5];
    t[4]                                                   = v;
    c->x1c                                                 = v;
    ((u16 *) (0x4000010 + (data_027e0000 << 12)))[idx * 2] = 0;
    ((u16 *) (0x4000012 + (data_027e0000 << 12)))[idx * 2] = 0;
}
