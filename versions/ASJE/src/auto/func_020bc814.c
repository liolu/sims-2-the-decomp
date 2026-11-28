/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020eea34(M2C_UNK *);                   /* extern */
M2C_UNK func_020eea5c(M2C_UNK *);                   /* extern */
M2C_UNK func_020eea84();                            /* extern */
M2C_UNK func_020f0a60();                            /* extern */
M2C_UNK func_020f4f40(M2C_UNK *);                   /* extern */
extern M2C_UNK data_027e1148;
extern M2C_UNK data_027e1154;
extern M2C_UNK data_027e1e0c;
extern M2C_UNK data_027e1ec8;

void func_020bc814(void *arg0) {
    func_020f4f40(&data_027e1ec8);
    M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) & ~0xA4);
    func_020eea5c(&data_027e1148);
    func_020eea34(&data_027e1154);
    func_020eea84();
    func_020f0a60();
    M2C_FIELD(arg0, u16 *, 0x786) = (u16) (M2C_FIELD(arg0, u16 *, 0x786) & ~4);
}
