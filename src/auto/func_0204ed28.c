#include "m2c.h"

extern M2C_UNK data_0213d920;
extern s32 data_027e0000;

s32 func_0204ed28(void) {
    if (*((M2C_UNK *) ((s8 *) &data_0213d920 + (data_027e0000 << 5))) != 0) {
        return 1;
    }
    return 0;
}
