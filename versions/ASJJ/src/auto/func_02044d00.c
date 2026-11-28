/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02044d00(u8 *arg0, s32 **arg1) {
    volatile s32 fr[4];
    s32 *p;
    u16 *h;
    s32 v;
    u32 u;

    p                      = *arg1;
    v                      = *p++;
    *arg1                  = p;
    v                      = v >> 1;
    fr[0]                  = v;
    fr[2]                  = v;
    *(s32 *) (arg0 + 0x1c) = v;

    p                      = *arg1;
    v                      = *p++;
    *arg1                  = p;
    fr[1]                  = v;
    fr[3]                  = v;
    *(s32 *) (arg0 + 0x18) = v;

    h                     = (u16 *) *arg1;
    u                     = *h++;
    *arg1                 = (s32 *) h;
    *(u8 *) (arg0 + 0x10) = u;

    h                     = (u16 *) *arg1;
    u                     = *h++;
    *arg1                 = (s32 *) h;
    *(u8 *) (arg0 + 0x11) = u;

    p                     = *arg1;
    v                     = *p++;
    *arg1                 = p;
    *(u8 *) (arg0 + 0x12) = v;

    p                      = *arg1;
    v                      = *p++;
    *arg1                  = p;
    *(s32 *) (arg0 + 0x14) = v >> 12;
    return 1;
}
