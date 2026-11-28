/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02133048[];
extern u8 data_0213408c[];

void func_02096630(u8 *arg0, u32 arg1) {
    s32 m;
    s32 n;
    s32 v;
    u8 *t;

    *(u32 *) arg0          = (u32) data_02133048;
    *(u32 *) (arg0 + 4)    = arg1;
    *(u32 *) (arg0 + 8)    = 0;
    *(u32 *) (arg0 + 0xC)  = 0;
    *(u32 *) (arg0 + 0x14) = 0;
    arg0[0x1C]             = 1;
    *(u32 *) arg0          = (u32) data_0213408c;

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
    m                     = *(s32 *) (arg0 + 0xC);
    arg0[0x10 + m]        = 0x62;
    *(s32 *) (arg0 + 0xC) = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 8)   = *(s32 *) (arg0 + 8) + 1;

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
    m                     = *(s32 *) (arg0 + 0xC);
    arg0[0x10 + m]        = 0x49;
    *(s32 *) (arg0 + 0xC) = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 8)   = *(s32 *) (arg0 + 8) + 1;

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
    m                     = *(s32 *) (arg0 + 0xC);
    arg0[0x10 + m]        = 0x5D;
    *(s32 *) (arg0 + 0xC) = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 8)   = *(s32 *) (arg0 + 8) + 1;
}
