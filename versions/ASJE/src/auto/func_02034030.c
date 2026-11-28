/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_0200aac4(void *, M2C_UNK);
M2C_UNK func_02011090(void *, u16, M2C_UNK, M2C_UNK, s32);
s32 func_0204c9f8(M2C_UNK);

typedef enum {
    KK = 0x32000
} KE;

s32 func_02034030(u8 *arg0) {
    volatile s32 fr[11];
    u8 *o;
    u8 *p;
    s32 var;
    s32 flag;
    s32 x, y, z, t;
    KE k;

    if (*(arg0 + 0x30) != 0) {
        *(arg0 + 0x30) = 0;
        func_02011090(*(void **) (arg0 + 4), *(u16 *) (arg0 + 0x7C), 1, 1, 0);
    } else {
        var = 1;
        if (*(u16 *) (*(u8 **) (arg0 + 4) + 0x1FE) != 0) {
            *(arg0 + 0x33) = *(arg0 + 0x33) - 1;
            if (*(arg0 + 0x33) == 0) {
                *(arg0 + 0x33) = func_0204c9f8(6) + 6;
                var            = 2;
            }
        }
        func_02011090(*(void **) (arg0 + 4), func_0200aac4(*(void **) (arg0 + 4), var), 1, 1, 0);
        o = *(u8 **) (arg0 + 0x80);
        if (o != NULL) {
            k                = KK;
            *(s32 *) (o + 4) = *(s32 *) (o + 4) & ~1;
            fr[0]            = k;
            p                = *(u8 **) (arg0 + 0x80);
            fr[1]            = k;
            x                = *(s32 *) (p + 0x78);
            fr[8]            = x;
            fr[9]            = k;
            z                = *(s32 *) (p + 0x80);
            fr[10]           = z;
            t                = *(volatile s32 *) (p + 0x78);
            fr[2]            = t;
            if (x != t || (y = *(volatile s32 *) (p + 0x7C), fr[3] = y, k != y) ||
                (y = *(volatile s32 *) (p + 0x80), fr[4] = y, z != y)) {
                flag = 1;
            } else {
                flag = 0;
            }
            if (flag != 0) {
                t                   = fr[8];
                fr[5]               = t;
                *(s32 *) (p + 0x78) = t;
                t                   = fr[9];
                fr[6]               = t;
                *(s32 *) (p + 0x7C) = t;
                t                   = fr[10];
                fr[7]               = t;
                *(s32 *) (p + 0x80) = t;
                *(u8 *) (p + 0xDC)  = 1;
            }
            *(void **) (arg0 + 0x80) = NULL;
        }
    }
    return 0;
}
