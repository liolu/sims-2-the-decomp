#include "m2c.h"

extern u16 data_02148a88;

s32 func_02104e5c(void) {
    if (data_02148a88 != 0) {
        return 0;
    }
    return 3;
}
