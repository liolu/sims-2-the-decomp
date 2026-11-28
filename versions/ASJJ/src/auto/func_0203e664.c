/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fcad0();                            /* extern */
M2C_UNK func_020fcae8();                            /* extern */
s32 func_02103c48();                                /* extern */
M2C_UNK func_021043d4(M2C_UNK *);                   /* extern */
extern s32 data_021392cc;
extern s32 data_027e0004;
extern M2C_UNK func_0203e3a4;

void func_0203e664(void) {
    func_021043d4(&func_0203e3a4);
    data_027e0004 |= 0x40000000;
    func_020fcae8();
    data_021392cc = func_02103c48();
    func_020fcad0();
}
