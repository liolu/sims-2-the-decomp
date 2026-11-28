/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213341c;
extern M2C_UNK data_021338b0;
extern M2C_UNK data_0213e2f4;

void func_0208ef8c(u8 *arg0, s32 arg1) {
    u8 *q;
    s32 v;
    s32 n;
    u8 *t;

    *(M2C_UNK **) (arg0 + 0) = &data_0213341c;
    *(s32 *) (arg0 + 4)      = arg1;
    *(s32 *) (arg0 + 8)      = 0;
    *(s32 *) (arg0 + 0xC)    = 0;
    *(s32 *) (arg0 + 0x14)   = 0;
    *(s8 *) (arg0 + 0x1C)    = 1;
    *(M2C_UNK **) (arg0 + 0) = &data_021338b0;
    q                        = *(u8 **) &data_0213e2f4 + 0x4000;
    if (q[0x4bd] < 12) {
        n = *(s32 *) (arg0 + 8);
        if (n > *(s32 *) (arg0 + 0xC)) {
            do {
                t = arg0 + (n - 1);
                v = t[0x10];
                t = arg0 + n;
                n -= 1;
                t[0x10] = v;
            } while (n > *(s32 *) (arg0 + 0xC));
        }
        *(s8 *) (arg0 + *(s32 *) (arg0 + 0xC) + 0x10) = 0x3D;
        *(s32 *) (arg0 + 0xC)                         = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)                           = *(s32 *) (arg0 + 8) + 1;
    } else {
        n = *(s32 *) (arg0 + 8);
        if (n > *(s32 *) (arg0 + 0xC)) {
            do {
                t = arg0 + (n - 1);
                v = t[0x10];
                t = arg0 + n;
                n -= 1;
                t[0x10] = v;
            } while (n > *(s32 *) (arg0 + 0xC));
        }
        *(s8 *) (arg0 + *(s32 *) (arg0 + 0xC) + 0x10) = 0x3E;
        *(s32 *) (arg0 + 0xC)                         = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)                           = *(s32 *) (arg0 + 8) + 1;
    }
}
