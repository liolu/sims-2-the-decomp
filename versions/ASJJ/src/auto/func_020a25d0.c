/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e20c;
extern u8 data_021249ec;
extern u8 data_02124a40;
extern u8 data_02124a60;

void func_020a1ddc(u8 a, s32 b, u8 *c, s32 d);
void func_020a1e78(u8 a, u8 b, u8 *c, s32 d);

void func_020a25d0(void) {
    volatile s32 w[21];
    s32 v;
    s32 d;
    typedef enum {
        ZZ = 0
    } ZE;
    typedef enum {
        KK = 0x80000
    } KE;
    ZE z;
    KE k;
    u8 *p;
    ZE z2;
    u8 *p2;
    s32 v2;
    s32 f2;
    s32 d2;
    ZE z3;
    u8 *p3;
    s32 v3;
    s32 f3;
    s32 d3;

    z     = ZZ;
    p     = data_0213e20c;
    w[0]  = z;
    w[6]  = z;
    v     = *(s32 *) (p + 0x20);
    d     = 0xA000 - v;
    w[18] = v;
    w[12] = v;
    if (d > z) {
        k     = KK;
        w[1]  = k;
        w[7]  = k;
        w[13] = v;
        if (d < k) {
            if (*(u8 *) (p + 0x28) < 2) {
                func_020a1ddc((u8) (0xA - (*(volatile s32 *) (p + 0x20) >> 12)), 0x64, &data_02124a40, 1);
            } else {
                func_020a1ddc((u8) (0xA - (*(volatile s32 *) (p + 0x20) >> 12)), 0x64, &data_02124a60, 1);
            }
        }
    }
    z2    = ZZ;
    p2    = data_0213e20c;
    w[2]  = z2;
    w[8]  = z2;
    v2    = *(s32 *) (p2 + 0x20);
    w[19] = v2;
    w[14] = v2;
    f2    = *(s32 *) (p2 + 0x2C);
    d2    = (f2 << 12) - v2;
    if (d2 > z2) {
        k     = KK;
        w[3]  = k;
        w[9]  = k;
        w[15] = v2;
        if (d2 < k) {
            func_020a1e78((u8) (f2 - (*(s32 *) (p2 + 0x20) >> 12)), (u8) * (s32 *) (p2 + 0x30), &data_021249ec, 1);
            goto L2;
        }
    }
    *(s32 *) (p2 + 0x2C) += 0x40;
    *(s32 *) (data_0213e20c + 0x34) += 0x40;
L2:
    z3    = ZZ;
    p3    = data_0213e20c;
    w[4]  = z3;
    w[10] = z3;
    v3    = *(s32 *) (p3 + 0x20);
    w[20] = v3;
    w[16] = v3;
    f3    = *(s32 *) (p3 + 0x38);
    d3    = (f3 << 12) - v3;
    if (d3 > z3) {
        k     = KK;
        w[5]  = k;
        w[11] = k;
        w[17] = v3;
        if (d3 < k) {
            func_020a1e78((u8) (f3 - (*(s32 *) (p3 + 0x20) >> 12)), (u8) * (s32 *) (p3 + 0x3C), &data_021249ec, 1);
            return;
        }
    }
    *(s32 *) (p3 + 0x38) += 0x40;
    *(s32 *) (data_0213e20c + 0x40) += 0x40;
}
