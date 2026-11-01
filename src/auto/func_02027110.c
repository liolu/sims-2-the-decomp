/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018aa0(void *, s32);
M2C_UNK func_02018ad0(void *);

void *func_02027110(u8 *arg0) {
    volatile s32 tmp[5];
    s32 v;
    s32 w;

    func_02018ad0(arg0);
    *(s32 *) (arg0 + 0x14) = 0;
    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = 0;
    func_02018aa0(arg0, 0x29);
    tmp[2]                 = 0;
    tmp[3]                 = 0;
    tmp[4]                 = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    v                      = tmp[3];
    tmp[0]                 = v;
    *(s32 *) (arg0 + 0x18) = v;
    w                      = tmp[4];
    tmp[1]                 = w;
    *(s32 *) (arg0 + 0x1C) = w;
    *(s32 *) (arg0 + 0x10) = 0x14B;
    *(s8 *) (arg0 + 0x24)  = 0;
    return arg0;
}
