/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0213e434;

s32 func_020733bc(void *arg0) {
    if ((s32) M2C_FIELD(data_0213e434, s32 *, 0x480C) < (s32) (M2C_FIELD(arg0, s32 *, 0x2DC) + 0x15180)) {
        return 1;
    }
    return 0;
}
