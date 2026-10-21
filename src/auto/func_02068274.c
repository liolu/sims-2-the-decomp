#include "m2c.h"

s32 func_02068274(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 4) & 1) == 1) {
        return 1;
    }
    return 0;
}
