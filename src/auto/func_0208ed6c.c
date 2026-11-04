/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213355c;
extern M2C_UNK data_021339a0;

void func_0208ed6c(u8 *arg0, s32 arg1) {
    s32 v;
    s32 n;
    u8 *t;

    *(M2C_UNK **) (arg0 + 0) = &data_0213355c;
    *(s32 *) (arg0 + 4)      = arg1;
    *(s32 *) (arg0 + 8)      = 0;
    *(s32 *) (arg0 + 0xC)    = 0;
    *(s32 *) (arg0 + 0x14)   = 0;
    *(s8 *) (arg0 + 0x1C)    = 1;
    *(M2C_UNK **) (arg0 + 0) = &data_021339a0;
    n                        = *(s32 *) (arg0 + 8);
    if (n > *(s32 *) (arg0 + 0xC)) {
        do {
            t = arg0 + (n - 1);
            v = t[0x10];
            t = arg0 + n;
            n -= 1;
            t[0x10] = v;
        } while (n > *(s32 *) (arg0 + 0xC));
    }
    *(s8 *) (arg0 + *(s32 *) (arg0 + 0xC) + 0x10) = 1;
    *(s32 *) (arg0 + 0xC)                         = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 8)                           = *(s32 *) (arg0 + 8) + 1;
}
