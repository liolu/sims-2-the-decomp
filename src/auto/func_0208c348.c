#include "m2c.h"
extern M2C_UNK data_0213e434;
s32 func_0208c348(u8 *arg0) {
    if (arg0[0xD] != 0) {
        return *(s32 *) ((u8 *) *(u8 **) &data_0213e434 + 0x4000 + 0x4D8) != -1 ? 1 : 0;
    }
    return arg0[0xC];
}
