/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"
extern void *data_0213e434;
void func_02075d2c(void *arg0) {
    s32 var_ip;
    var_ip                      = 0;
    M2C_FIELD(arg0, s32 *, 0)   = (s32) M2C_FIELD(data_0213e434, s32 *, 0x480C);
    M2C_FIELD(arg0, s32 *, 4)   = 0x80000000;
    M2C_FIELD(arg0, s16 *, 8)   = 0;
    M2C_FIELD(arg0, s16 *, 0xA) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
    do {
        M2C_FIELD((u8 *) arg0 + var_ip, s8 *, 0x10) = 0x4B;
        var_ip += 1;
    } while (var_ip < 4);
}
