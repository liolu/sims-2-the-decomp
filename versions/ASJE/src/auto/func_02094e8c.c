/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0208af58(s32);
extern M2C_UNK data_0213341c;
extern M2C_UNK data_021334c0;
extern M2C_UNK data_021342b8;
extern M2C_UNK data_021342e0;
extern u8 *data_0213e2f4;

u8 *func_02094e8c(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 n;
    u8 *g;
    u8 *pt;
    s32 x;
    s32 v;
    s32 h;

    *(void **) (arg0 + 0)    = &data_0213341c;
    *(s32 *) (arg0 + 4)      = arg1;
    *(s32 *) (arg0 + 8)      = 0;
    *(s32 *) (arg0 + 0xc)    = 0;
    *(s32 *) (arg0 + 0x14)   = 0;
    arg0[0x1c]               = 1;
    *(void **) (arg0 + 0x20) = &data_021334c0;
    *(s32 *) (arg0 + 0x24)   = arg2;
    *(s32 *) (arg0 + 0x28)   = *(s16 *) ((u8 *) func_0208af58(arg2) + 0xe);
    arg0[0x2c]               = 0;
    arg0[0x2d]               = 1;
    *(void **) (arg0 + 0)    = &data_021342b8;
    *(void **) (arg0 + 0x20) = &data_021342e0;
    x                        = *(s32 *) (arg0 + 8);
    v                        = *(s32 *) (arg0 + 0xc);
    if (x > v) {
        do {
            pt = arg0 + (x - 1);
            v  = pt[0x10];
            pt = arg0 + x;
            x -= 1;
            pt[0x10] = v;
            v        = *(s32 *) (arg0 + 0xc);
        } while (x > v);
    }
    pt                    = arg0 + v;
    pt[0x10]              = 0x60;
    *(s32 *) (arg0 + 0xc) = *(s32 *) (arg0 + 0xc) + 1;
    i                     = 0;
    *(s32 *) (arg0 + 8)   = *(s32 *) (arg0 + 8) + 1;
    g                     = data_0213e2f4;
    n                     = *(s32 *) (g + 0x2000 + 0x15c);
    if (n > 0) {
        do {
            h = ((u16 *) (g + 0x28))[i];
            if ((h >= 0x12d && h <= 0x12f) || h == 0x13e) {
                x = *(s32 *) (arg0 + 8);
                v = *(s32 *) (arg0 + 0xc);
                if (x > v) {
                    do {
                        pt = arg0 + (x - 1);
                        v  = pt[0x10];
                        pt = arg0 + x;
                        x -= 1;
                        pt[0x10] = v;
                        v        = *(s32 *) (arg0 + 0xc);
                    } while (x > v);
                }
                pt                    = arg0 + v;
                pt[0x10]              = 0x61;
                *(s32 *) (arg0 + 0xc) = *(s32 *) (arg0 + 0xc) + 1;
                *(s32 *) (arg0 + 8)   = *(s32 *) (arg0 + 8) + 1;
                break;
            }
            i += 1;
        } while (i < n);
    }
    return arg0;
}
