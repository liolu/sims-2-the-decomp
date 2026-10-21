/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020be0a8(void *);                          /* extern */
s32 func_020be1dc(void *);                          /* extern */
M2C_UNK func_020f5808(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020f8178();                            /* extern */
M2C_UNK func_020fcbb0(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_027e1e0c;
extern M2C_UNK data_027e1e14;
extern M2C_UNK data_027e1e58;

u32 func_020bc93c(void *arg0) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(arg0, u16 *, 0x786) << 0x1D) >> 0x1F;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020f8178();
    func_020fcbb0(func_020be0a8(arg0), &data_027e1e14);
    M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) & ~0x50);
    func_020f5808(func_020be1dc(arg0), &data_027e1e58);
    M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) & ~0xE8);
    M2C_FIELD(arg0, s16 *, 0x78C)          = 0;
    M2C_FIELD(arg0, u16 *, 0x786)          = (u16) (M2C_FIELD(arg0, u16 *, 0x786) | 4);
    return (u32) (arg0 + 0x700);
}
