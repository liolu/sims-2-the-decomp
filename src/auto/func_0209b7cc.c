/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0209b2fc();

void *func_0209b7cc(void *arg0) {
    volatile s32 tmp[6];
    s32 v;
    s32 w;
    func_0209b2fc();
    *(u8 *) ((u8 *) arg0 + 0x1C)  = 2;
    *(u8 *) ((u8 *) arg0 + 0x1D)  = 0;
    *(u8 *) ((u8 *) arg0 + 0x1E)  = 0;
    *(u8 *) ((u8 *) arg0 + 0x1F)  = 0;
    tmp[2]                        = 0x1000;
    tmp[3]                        = 0x1000;
    tmp[4]                        = 0x1000;
    *(s32 *) ((u8 *) arg0 + 0xC)  = 0x1000;
    v                             = tmp[3];
    tmp[0]                        = v;
    *(s32 *) ((u8 *) arg0 + 0x10) = v;
    w                             = tmp[4];
    tmp[1]                        = w;
    *(s32 *) ((u8 *) arg0 + 0x14) = w;
    *(u8 *) ((u8 *) arg0 + 0x18)  = 0x13;
    return arg0;
}
