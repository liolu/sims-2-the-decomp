/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" u8 data_021317f4;
extern "C" u8 data_0213180c;

extern "C" void func_020448f8(u8 *arg0) {
    volatile s32 tmp[12];
    s32 z;
    s32 z2;
    *(void **) arg0        = (void *) &data_021317f4;
    *(s32 *) (arg0 + 4)    = 0;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(u8 *) (arg0 + 0x10)  = 1;
    *(u8 *) (arg0 + 0x11)  = 0;
    *(u8 *) (arg0 + 0x12)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    tmp[5]                 = 0;
    tmp[4]                 = 0;
    tmp[3]                 = 0;
    tmp[9]                 = 0;
    *(s32 *) (arg0 + 4)    = 0;
    z                      = tmp[4];
    tmp[10]                = z;
    *(s32 *) (arg0 + 8)    = z;
    z2                     = tmp[5];
    tmp[11]                = z2;
    *(s32 *) (arg0 + 0xC)  = z2;
    *(void **) arg0        = (void *) &data_0213180c;
    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = 0;
    *(s32 *) (arg0 + 0x20) = 0;
    tmp[0]                 = 0;
    tmp[6]                 = 0;
    *(s32 *) (arg0 + 0x24) = 0;
    tmp[1]                 = 0;
    tmp[7]                 = 0;
    *(s32 *) (arg0 + 0x28) = 0;
    tmp[2]                 = 0;
    tmp[8]                 = 0;
    *(s32 *) (arg0 + 0x2C) = 0;
}
