/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e2f4;

void func_0206eb24(u8 *);
void func_0203c24c(s32, s32);

void func_0206f244(u8 *arg0) {
    volatile s32 w[13];
    u8 temp;
    u8 *d;
    s32 max;

    d = data_0213e2f4;
    if (*(u8 *) (arg0 + 0x634) != 0 || (temp = d[0x2EE4], d[0x2EE4] = 0, temp != 0)) {
        func_0206eb24(arg0);
    }
    max   = *(s32 *) (arg0 + 0x530);
    w[11] = max;
    w[2]  = max;
    if (*(s32 *) (arg0 + 0x52C) < max) {
        w[0]                    = 0x4000;
        w[3]                    = 0x4000;
        *(s32 *) (arg0 + 0x52C) = *(s32 *) (arg0 + 0x52C) + 0x4000;
        max                     = *(s32 *) (arg0 + 0x530);
        w[10]                   = max;
        w[4]                    = max;
        if (*(s32 *) (arg0 + 0x52C) > max) {
            w[5]                    = max;
            *(s32 *) (arg0 + 0x52C) = max;
        }
    } else {
        w[6] = max;
        if (*(s32 *) (arg0 + 0x52C) > max) {
            w[1]                    = 0x4000;
            w[7]                    = 0x4000;
            *(s32 *) (arg0 + 0x52C) = *(s32 *) (arg0 + 0x52C) - 0x4000;
            max                     = *(s32 *) (arg0 + 0x530);
            w[12]                   = max;
            w[8]                    = max;
            if (*(s32 *) (arg0 + 0x52C) < max) {
                w[9]                    = max;
                *(s32 *) (arg0 + 0x52C) = max;
            }
        }
    }
    func_0203c24c(3, (0 - ((*(s32 *) (arg0 + 0x52C) >> 0xC) + 0x35)) << 0x10);
    func_0203c24c(1, (0 - ((*(s32 *) (arg0 + 0x52C) >> 0xC) + 0x32)) << 0x10);
    arg0[0x634] = 0;
}
