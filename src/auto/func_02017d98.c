/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02017d98(void *arg0, volatile s32 arg1) {
    volatile s32 tmp[19];
    s32 lr;
    s32 r2;
    s32 r3;
    s32 v;
    s64 p;

    M2C_FIELD(arg0, s32 *, 0x90) = arg1;
    tmp[1]                       = 0x800;
    tmp[7]                       = 0x800;
    lr                           = M2C_FIELD(arg0, s32 *, 0x94);
    tmp[16]                      = lr;
    tmp[12]                      = lr;
    tmp[10]                      = lr;
    r3                           = M2C_FIELD(arg0, s32 *, 0x98) - lr;
    tmp[6]                       = r3;
    tmp[11]                      = r3;
    r2                           = M2C_FIELD(arg0, s32 *, 0x90);
    p                            = (s64) r2 * r3 + 0x800;
    v                            = (s32) (p >> 12) + lr + 0x800;
    tmp[0]                       = v;
    tmp[4]                       = v;
    M2C_FIELD(arg0, s32 *, 0x50) = v;
    tmp[3]                       = 0x800;
    tmp[9]                       = 0x800;
    lr                           = M2C_FIELD(arg0, s32 *, 0x9C);
    tmp[17]                      = lr;
    tmp[15]                      = lr;
    tmp[13]                      = lr;
    r3                           = M2C_FIELD(arg0, s32 *, 0xA0) - lr;
    tmp[8]                       = r3;
    tmp[14]                      = r3;
    r2                           = M2C_FIELD(arg0, s32 *, 0x90);
    p                            = (s64) r2 * r3 + 0x800;
    v                            = (s32) (p >> 12) + lr + 0x800;
    tmp[2]                       = v;
    tmp[5]                       = v;
    M2C_FIELD(arg0, s32 *, 0x54) = v;
}
