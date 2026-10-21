#include "m2c.h"

extern void *data_021424d4;
extern M2C_UNK data_021424e0;

void func_020d3c5c(s32 arg0, s8 arg1, s8 arg2, s8 arg3) {
    void *temp_ip;

    temp_ip = *((M2C_UNK *) ((s8 *) &data_021424e0 + (arg0 * 4)));
    if (temp_ip == NULL) {
        return;
    }
    data_021424d4 = temp_ip;
    if (arg3 != 0) {
        if (arg1 != 0xFF) {
            M2C_FIELD(temp_ip, s8 *, 0x38) = arg1;
        }
        M2C_FIELD(data_021424d4, s8 *, 0x39) = arg2;
        M2C_FIELD(data_021424d4, s8 *, 0x3A) = arg3;
    } else {
        M2C_FIELD(temp_ip, s8 *, 0x38) = arg2;
    }
    data_021424d4 = NULL;
}
