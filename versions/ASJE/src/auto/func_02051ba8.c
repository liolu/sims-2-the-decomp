#include "m2c.h"
extern M2C_UNK data_0213dc8c;
s32 func_02051ba8(s32 arg0, s32 arg1) {
    s32 a;
    s32 b;
    a = arg1 * 28;
    b = arg0 * 56;
    if (*(s32 *) (a + ((u8 *) &data_0213dc8c + b)) != 0) {
        return 1;
    }
    return 0;
}
