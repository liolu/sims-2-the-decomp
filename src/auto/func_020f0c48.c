#include "m2c.h"

extern s32 *data_02145f14;

void func_020f0c48(s32 *arg0) {
    if (data_02145f14 == NULL) {
        *arg0         = 0;
        data_02145f14 = arg0;
    }
}
