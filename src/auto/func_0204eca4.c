/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0213d920;
extern s32 data_027e0000;

s32 func_0204eca4(void) {
    s32 var_r0;
    s32 var_r0_2;

    if (*((M2C_UNK *) ((s8 *) &data_0213d920 + (data_027e0000 << 5))) != 0) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        return var_r0_2;
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    if (*((M2C_UNK *) ((s8 *) &data_0213d920 + (data_027e0000 << 5))) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
        return var_r0;
    }
    data_027e0000 = 0;
    return var_r0;
}
