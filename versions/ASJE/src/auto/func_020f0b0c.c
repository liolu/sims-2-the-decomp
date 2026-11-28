#include "m2c.h"

extern s32 *data_02145dd4;

void func_020f0b0c(s32 *arg0) {
    if (data_02145dd4 == NULL) {
        *arg0         = 0;
        data_02145dd4 = arg0;
    }
}
