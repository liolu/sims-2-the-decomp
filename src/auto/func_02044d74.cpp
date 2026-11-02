/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" s32 func_02044d74(u8 *arg0, void *arg1) {
    u8 **st = (u8 **) arg1;
    volatile s32 tmp[6];
    s32 v;
    u16 h;
    v                      = *(s32 *) *st;
    *st                    = *st + 4;
    v                      = v >> 1;
    tmp[0]                 = v;
    tmp[3]                 = v;
    *(s32 *) (arg0 + 0x1C) = v;
    v                      = *(s32 *) *st;
    *st                    = *st + 4;
    v                      = v >> 1;
    tmp[1]                 = v;
    tmp[4]                 = v;
    *(s32 *) (arg0 + 0x20) = v;
    v                      = *(s32 *) *st;
    *st                    = *st + 4;
    v                      = v >> 1;
    tmp[2]                 = v;
    tmp[5]                 = v;
    *(s32 *) (arg0 + 0x18) = v;
    h                      = *(u16 *) *st;
    *st                    = *st + 2;
    *(u8 *) (arg0 + 0x10)  = (u8) h;
    h                      = *(u16 *) *st;
    *st                    = *st + 2;
    *(u8 *) (arg0 + 0x11)  = (u8) h;
    v                      = *(s32 *) *st;
    *st                    = *st + 4;
    *(u8 *) (arg0 + 0x12)  = (u8) v;
    v                      = *(s32 *) *st;
    *st                    = *st + 4;
    v                      = v >> 0xC;
    *(s32 *) (arg0 + 0x14) = v;
    return 1;
}
