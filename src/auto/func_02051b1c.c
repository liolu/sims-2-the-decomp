/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0213dc60;
extern s32 data_027e0000;
void func_02051b1c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    temp_r4                                           = data_027e0000 * 0x44;
    *(s32 *) ((u8 *) &data_0213dc60 + temp_r4)        = arg0;
    *(s32 *) ((u8 *) &data_0213dc60 + 4 + temp_r4)    = arg0;
    *(s32 *) ((u8 *) &data_0213dc60 + 8 + temp_r4)    = arg1;
    *(s32 *) ((u8 *) &data_0213dc60 + 0xC + temp_r4)  = (arg2 + 1) << 5;
    *(s32 *) ((u8 *) &data_0213dc60 + 0x10 + temp_r4) = arg2;
}
