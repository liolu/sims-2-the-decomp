#include "m2c.h"
extern M2C_UNK data_027e0000;
extern M2C_UNK data_0213af10;
void func_02049180(s32 arg0) {
    u8 *p;
    u32 v;
    p                     = (u8 *) *(u32 *) ((u8 *) &data_0213af10 + *(s32 *) &data_027e0000 * 0x132C) + 0x400;
    v                     = ((u32 *) p)[arg0 * 2];
    ((u32 *) p)[arg0 * 2] = (v & ~0x300) | 0x200;
}
