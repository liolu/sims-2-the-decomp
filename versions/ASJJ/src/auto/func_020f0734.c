#include "m2c.h"

extern s32 *data_02145a34;

void func_020f0734(s32 *arg0) {
    if (data_02145a34 == NULL) {
        *arg0         = 0;
        data_02145a34 = arg0;
    }
}
