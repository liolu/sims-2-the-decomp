/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02044fb8(u8 *arg0, void **arg1) {
    volatile s32 tmp[2];
    s32 v;
    s32 *p;
    u16 *h;
    p                    = (s32 *) *arg1;
    v                    = *p++;
    *arg1                = p;
    tmp[0]               = v;
    tmp[1]               = v;
    *(s32 *) (arg0 + 24) = v;
    h                    = (u16 *) *arg1;
    v                    = *h++;
    *arg1                = h;
    *(u8 *) (arg0 + 16)  = v;
    h                    = (u16 *) *arg1;
    v                    = *h++;
    *arg1                = h;
    *(u8 *) (arg0 + 17)  = v;
    p                    = (s32 *) *arg1;
    v                    = *p++;
    *arg1                = p;
    *(u8 *) (arg0 + 18)  = v;
    p                    = (s32 *) *arg1;
    v                    = *p++;
    *arg1                = p;
    *(s32 *) (arg0 + 20) = v >> 12;
    return 1;
}
