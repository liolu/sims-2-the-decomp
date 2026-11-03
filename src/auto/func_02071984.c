/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213e434;
extern u8 data_0211f9cc;
M2C_UNK func_02072530(u8 *);

void func_02071984(u8 *arg0) {
    volatile s32 t[14];
    s32 b;
    s32 a;
    u8 *g;

    g         = *(u8 **) &data_0213e434;
    arg0[0xA] = ((s8 *) &data_0211f9cc)[*(s32 *) (g + 0x2000 + 0x16C)];
    a         = *(s32 *) (arg0 + 0xC);
    t[11]     = a;
    t[2]      = a;
    b         = *(s32 *) (arg0 + 0x10);
    if (b < a) {
        t[0]                   = 0x2000;
        t[3]                   = 0x2000;
        *(s32 *) (arg0 + 0x10) = *(s32 *) (arg0 + 0x10) + 0x2000;
        a                      = *(s32 *) (arg0 + 0xC);
        t[10]                  = a;
        t[4]                   = a;
        if (*(s32 *) (arg0 + 0x10) > a) {
            t[5]                   = a;
            *(s32 *) (arg0 + 0x10) = a;
        }
        arg0[8] |= 1;
    } else {
        t[6] = a;
        if (b > a) {
            t[1]                   = 0x2000;
            t[7]                   = 0x2000;
            *(s32 *) (arg0 + 0x10) = *(s32 *) (arg0 + 0x10) - 0x2000;
            a                      = *(s32 *) (arg0 + 0xC);
            t[12]                  = a;
            t[8]                   = a;
            if (*(s32 *) (arg0 + 0x10) < a) {
                t[9]                   = a;
                *(s32 *) (arg0 + 0x10) = a;
            }
            arg0[8] |= 1;
        }
    }
    if (arg0[8] & 1) {
        func_02072530(arg0);
        arg0[8] &= ~1;
    }
}
