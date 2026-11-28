/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020b8ad8(u8 *arg0, u32 arg1, s32 arg2) {
    u8 *p;
    u8 *base;
    u32 bit;
    u32 idx;

    if ((((u32) (*(u16 *) (arg0 + 0xAC) << 26)) >> 31) != 1) {
        return;
    }
    p    = *(u8 **) (arg0 + 0x1C);
    base = *(u8 **) (p + 0x8);
    if (base == 0) {
        return;
    }
    idx = arg1 >> 5;
    bit = 1u << (arg1 & 0x1F);
    if (arg2 == 0) {
        *(u32 *) (base + 0xC + idx * 4) &= ~bit;
        return;
    }
    *(u32 *) (base + 0xC + idx * 4) |= bit;
}
