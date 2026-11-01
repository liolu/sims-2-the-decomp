#include "m2c.h"
extern M2C_UNK data_0213ddcc;
s32 func_02051c20(s32 arg0, s32 arg1) {
    s32 a;
    s32 b;
    a = arg1 * 28;
    b = arg0 * 56;
    if (*(s32 *) (a + ((u8 *) &data_0213ddcc + b)) != 0) {
        return 1;
    }
    return 0;
}
