/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_021390e4;
extern M2C_UNK data_021390e8;
extern s32 data_027e0000;

void func_02001944(s32 arg0) {
    s32 temp_r4;

    temp_r4                                                = data_021390e4;
    data_021390e4                                          = temp_r4 + 1;
    *((M2C_UNK *) ((s8 *) &data_021390e8 + (temp_r4 * 4))) = data_027e0000;
    data_027e0000                                          = arg0;
}
