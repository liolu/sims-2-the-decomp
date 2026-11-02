/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02085cf8(u8 *arg0, u8 *arg1) {
    volatile s32 tmp[3];
    s32 v;
    *(u16 *) arg0         = *(u16 *) arg1;
    v                     = *(s32 *) (arg1 + 0x4);
    tmp[0]                = v;
    *(s32 *) (arg0 + 0x4) = v;
    v                     = *(s32 *) (arg1 + 0x8);
    tmp[1]                = v;
    *(s32 *) (arg0 + 0x8) = v;
    v                     = *(s32 *) (arg1 + 0xC);
    tmp[2]                = v;
    *(s32 *) (arg0 + 0xC) = v;
}
