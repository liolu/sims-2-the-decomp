/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_02008ca0(void *a, void *b, void *c, s32 d, s32 e);
void func_02008a58(void *a);
extern u8 *data_0213d95c;
extern u8 *data_0213e434;

void func_02005620(u8 *arg0) {
    u8 fr[0x60];
    u8 *var6;
    u8 *p;
    u8 *g;
    u16 r5;
    s32 r4;
    s32 y;
    s32 x2;
    s32 y2;

    var6 = arg0 + 0xC0;
    if (arg0[0x2F4] == 2) {
        var6 = arg0 + 0x188;
    }
    p = data_0213d95c;
    if (((u32) (p[0] << 0x1B) >> 0x1F) == 0) {
        return;
    }
    if (arg0[0x306] != 0) {
        return;
    }
    r5 = *(u16 *) (p + 0x2C);
    {
        enum {
            X1 = 0x6C000
        } x                  = X1;
        *(s32 *) (fr + 0x00) = x;
        *(s32 *) (fr + 0x30) = x;
        r4                   = (s32) * (u16 *) (p + 0x2A) << 0xC;
        if (r4 >= x) {
            enum {
                Y1 = 0x5000
            } yy                 = Y1;
            y                    = (s32) r5 << 0xC;
            *(s32 *) (fr + 0x04) = yy;
            *(s32 *) (fr + 0x34) = yy;
            if (y >= yy) {
                enum {
                    W1 = 0x28000
                } w                  = W1;
                x2                   = w + 0x6C000;
                *(s32 *) (fr + 0x0C) = w;
                *(s32 *) (fr + 0x50) = w;
                *(s32 *) (fr + 0x08) = x2;
                *(s32 *) (fr + 0x38) = x2;
                if (r4 <= x2) {
                    enum {
                        H1 = 0x30000
                    } h                  = H1;
                    y2                   = h + 0x5000;
                    *(s32 *) (fr + 0x14) = h;
                    *(s32 *) (fr + 0x54) = h;
                    *(s32 *) (fr + 0x10) = y2;
                    *(s32 *) (fr + 0x3C) = y2;
                    if (y <= y2) {
                        if (func_02008ca0(arg0, arg0 + 0x24, var6, 1, 1) != 0) {
                            arg0[0x2F0] = 1;
                            g           = *(u8 **) (data_0213e434 + 0x479C);
                            g[0x426]    = 1;
                            g           = *(u8 **) (data_0213e434 + 0x479C);
                            g[0x42C]    = 0;
                        }
                    }
                }
            }
        }
    }
    {
        enum {
            X2 = 0xD0000
        } x                  = X2;
        *(s32 *) (fr + 0x18) = x;
        *(s32 *) (fr + 0x40) = x;
        if (r4 < x) {
            return;
        }
        {
            enum {
                Y2 = 0x5000
            } yy                 = Y2;
            y                    = (s32) r5 << 0xC;
            *(s32 *) (fr + 0x1C) = yy;
            *(s32 *) (fr + 0x44) = yy;
            if (y < yy) {
                return;
            }
            {
                enum {
                    W2 = 0x28000
                } w                  = W2;
                x2                   = w + 0xD0000;
                *(s32 *) (fr + 0x24) = w;
                *(s32 *) (fr + 0x58) = w;
                *(s32 *) (fr + 0x20) = x2;
                *(s32 *) (fr + 0x48) = x2;
                if (r4 > x2) {
                    return;
                }
                {
                    enum {
                        H2 = 0x30000
                    } h                  = H2;
                    y2                   = h + 0x5000;
                    *(s32 *) (fr + 0x2C) = h;
                    *(s32 *) (fr + 0x5C) = h;
                    *(s32 *) (fr + 0x28) = y2;
                    *(s32 *) (fr + 0x4C) = y2;
                    if (y > y2) {
                        return;
                    }
                }
            }
        }
    }
    if (func_02008ca0(arg0, arg0 + 0x58, var6, 1, 0) == 0) {
        return;
    }
    func_02008a58(arg0);
    g        = *(u8 **) (data_0213e434 + 0x479C);
    g[0x426] = 1;
    g        = *(u8 **) (data_0213e434 + 0x479C);
    g[0x42C] = 1;
}
