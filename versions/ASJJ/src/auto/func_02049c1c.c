/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203f1ac(s32, s32, s32);

extern u8 data_0213d048;
extern u8 data_0213d04c;
extern u8 data_0213d054;
extern s32 data_027e0000;

void func_02049c1c(s32 arg0, u16 *arg1) {
    s32 a;
    s32 b;
    b                                          = arg0 * 0xC;
    a                                          = data_027e0000 * 0xC4;
    *(u16 *) (b + ((s32) &data_0213d04c + a))  = arg0;
    *(u16 **) (b + ((s32) &data_0213d054 + a)) = arg1;
    func_0203f1ac(arg1[*(s32 *) ((s32) &data_0213d048 + a)], arg0 * 0x10, 0x10);
}
