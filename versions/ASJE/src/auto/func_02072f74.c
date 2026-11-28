/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_0213e2f4;

void func_02072f74(void *arg0, s32 dummy, volatile s32 arg2) {
    s32 lim;
    s32 *p2;
    s32 *p1;

    p2  = (s32 *) ((u8 *) arg0 + 0x2C8);
    p1  = (s32 *) ((u8 *) arg0 + 0x2CC);
    lim = arg2;
    while (M2C_FIELD(arg0, s32 *, 0x2C8) != 0 && M2C_FIELD(arg0, s32 *, 0x2CC) < lim) {
        *p2 = *p2 - 1;
        *p1 = *p1 + ((M2C_FIELD(data_0213e2f4, u8 *, 0x5F) * 0x1C20) + 0x3F480);
    }
    while (M2C_FIELD(arg0, s32 *, 0x2D0) > 0 && M2C_FIELD(arg0, s32 *, 0x2D4) < lim) {
        M2C_FIELD(arg0, s32 *, 0x2D4) = M2C_FIELD(arg0, s32 *, 0x2D4) + 0x93A80;
        M2C_FIELD(arg0, s32 *, 0x2D0) = M2C_FIELD(arg0, s32 *, 0x2D0) - 5;
    }
}
