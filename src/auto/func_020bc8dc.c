/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eeb70(M2C_UNK *);                   /* extern */
M2C_UNK func_020eeb98(M2C_UNK *);                   /* extern */
M2C_UNK func_020eebc0();                            /* extern */
M2C_UNK func_020f0b9c();                            /* extern */
M2C_UNK func_020f507c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_027e1148;
extern M2C_UNK data_027e1154;
extern M2C_UNK data_027e1e0c;
extern M2C_UNK data_027e1ec8;

void func_020bc8dc(void *arg0) {
    func_020f507c(&data_027e1ec8);
    M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) & ~0xA4);
    func_020eeb98(&data_027e1148);
    func_020eeb70(&data_027e1154);
    func_020eebc0();
    func_020f0b9c();
    M2C_FIELD(arg0, u16 *, 0x786) = (u16) (M2C_FIELD(arg0, u16 *, 0x786) & ~4);
}
