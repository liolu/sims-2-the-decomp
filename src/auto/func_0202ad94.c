/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018aa0(void *, s32);
M2C_UNK func_02018ad0(void *);

void *func_0202ad94(u8 *arg0) {
    volatile s32 tmp[8];
    s32 v;
    s32 w;

    func_02018ad0(arg0);
    *(s32 *) (arg0 + 0x14) = 0;
    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = 0;
    func_02018aa0(arg0, 0x45);
    *(s32 *) (arg0 + 0x10) = 0;
    tmp[4]                 = 0;
    tmp[5]                 = 0;
    tmp[6]                 = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    v                      = tmp[5];
    tmp[2]                 = v;
    *(s32 *) (arg0 + 0x18) = v;
    w                      = tmp[6];
    tmp[3]                 = w;
    *(s32 *) (arg0 + 0x1C) = w;
    tmp[0]                 = 0x6000;
    tmp[1]                 = 0x6000;
    *(s32 *) (arg0 + 0x20) = 0x6000;
    return arg0;
}
