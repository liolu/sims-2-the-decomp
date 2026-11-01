#include "m2c.h"
extern M2C_UNK data_0213dc48;
extern s32 data_027e0000;
u8 func_0205186c(u8 *arg0) {
    u8 r = 0;
    if (*arg0 != 0) {
        r = M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_0213dc48 + (data_027e0000 * 0x44))), u8 *, 8);
    }
    return r;
}
