/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fcea8();                            /* extern */
M2C_UNK func_020fcec0();                            /* extern */
s32 func_02104020();                                /* extern */
M2C_UNK func_021047ac(M2C_UNK *);                   /* extern */
extern s32 data_021396ac;
extern s32 data_027e0004;
extern M2C_UNK func_0203e2f8;

void func_0203e584(void) {
    func_021047ac(&func_0203e2f8);
    data_027e0004 |= 0x40000000;
    func_020fcec0();
    data_021396ac = func_02104020();
    func_020fcea8();
}
