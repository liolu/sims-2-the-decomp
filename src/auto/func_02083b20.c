#include "m2c.h"

extern void *data_0213e434;

s32 func_02083b20(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2148) < (s32) M2C_FIELD(data_0213e434, s32 *, 0x480C)) {
        return 1;
    }
    return 0;
}
