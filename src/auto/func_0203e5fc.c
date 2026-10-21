/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fcfe4();                            /* extern */
M2C_UNK func_020fcffc();                            /* extern */
s32 func_0210415c();                                /* extern */
M2C_UNK func_021048e8(M2C_UNK *);                   /* extern */
extern s32 data_021397ec;
extern s32 data_027e0004;
extern M2C_UNK func_0203e370;

void func_0203e5fc(void) {
    func_021048e8(&func_0203e370);
    data_027e0004 |= 0x40000000;
    func_020fcffc();
    data_021397ec = func_0210415c();
    func_020fcfe4();
}
