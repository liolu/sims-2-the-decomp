/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0206e328(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0xD0) =
        (u16) ((M2C_FIELD(arg0, u16 *, 0xD0) & ~0x1C) |
               (((u16) ((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u16 *, 0xC0) << 0x1B) >> 0x1D) & 7) * 4));
    M2C_FIELD(arg0, u16 *, 0xD0) =
        (u16) ((M2C_FIELD(arg0, u16 *, 0xD0) & ~0x1F00) |
               (((u16) ((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u16 *, 0xC0) << 0x13) >> 0x1B) & 0x1F) << 8));
    M2C_FIELD(arg0, u16 *, 0xD0) = (u16) ((M2C_FIELD(arg0, u16 *, 0xD0) & ~3) | 2);
    M2C_FIELD(arg0, u16 *, 0xD0) = (u16) (M2C_FIELD(arg0, u16 *, 0xD0) & ~0x40);
    M2C_FIELD(arg0, u16 *, 0xD0) = (u16) (M2C_FIELD(arg0, u16 *, 0xD0) & ~0x80);
    M2C_FIELD(arg0, u16 *, 0xD0) = (u16) (M2C_FIELD(arg0, u16 *, 0xD0) & ~0x2000);
    M2C_FIELD(arg0, u16 *, 0xD0) = (u16) (M2C_FIELD(arg0, u16 *, 0xD0) & ~0x20);
    M2C_FIELD(arg0, u16 *, 0xD0) = (u16) (M2C_FIELD(arg0, u16 *, 0xD0) & ~0xC000);
}
