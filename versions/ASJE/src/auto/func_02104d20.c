#include "m2c.h"

extern u16 data_02148948;

s32 func_02104d20(void) {
    if (data_02148948 != 0) {
        return 0;
    }
    return 3;
}
