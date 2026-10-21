/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0213e434;

void func_02073364(void *arg0) {
    s32 temp_ip;

    temp_ip = M2C_FIELD(data_0213e434, s32 *, 0x480C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2CC) <= temp_ip) {
        M2C_FIELD(arg0, s32 *, 0x2CC) = (s32) (temp_ip + ((M2C_FIELD(data_0213e434, u8 *, 0x5F) * 0x1C20) + 0x3F480));
    }
    M2C_FIELD(data_0213e434, s32 *, 0) = (s32) (M2C_FIELD(data_0213e434, s32 *, 0) | 0x10);
}
