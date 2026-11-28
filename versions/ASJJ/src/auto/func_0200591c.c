/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213d43c;

typedef enum {
    K6C = 0x6C000
} E6C;
typedef enum {
    K50 = 0x5000
} E50;
typedef enum {
    K28 = 0x28000
} E28;
typedef enum {
    K30 = 0x30000
} E30;
typedef enum {
    KD0 = 0xD0000
} ED0;
extern s32 func_02008ca0(u8 *, u8 *, u8 *, s32, s32);
extern void func_02008a58(u8 *);

void func_0200591c(u8 *arg0, u8 *arg1) {
    volatile s32 fr[25];
    u8 *dp;
    s8 sel;
    u8 i;
    s32 h;
    s32 w;
    u16 wy;
    E6C a6;
    E50 a5;
    E28 a2;
    E30 a3;
    ED0 ad;
    s32 b;
    s32 *ent;

    dp = data_0213d43c;
    if (((u32) (dp[0] << 27) >> 31) == 0) {
        return;
    }
    if (arg0[0x306] != 0) {
        return;
    }
    h   = *(u16 *) (dp + 0x2A);
    wy  = *(u16 *) (dp + 0x2C);
    sel = -1;
    for (i = 0; i < 10; i++) {
        if (*(s32 *) (arg1 + i * 20) == 0) {
            sel = i;
            break;
        }
    }
    h      = h << 12;
    a6     = K6C;
    fr[0]  = a6;
    fr[12] = a6;
    if (h >= a6) {
        w      = wy << 12;
        a5     = K50;
        fr[1]  = a5;
        fr[13] = a5;
        if (w >= a5) {
            a2     = K28;
            b      = a2 + 0x6C000;
            fr[3]  = a2;
            fr[20] = a2;
            fr[2]  = b;
            fr[14] = b;
            if (h <= b) {
                a3     = K30;
                b      = a3 + 0x5000;
                fr[5]  = a3;
                fr[21] = a3;
                fr[4]  = b;
                fr[15] = b;
                if (w <= b) {
                    if (func_02008ca0(arg0, arg0 + 0x24, arg1, 1, 1) != 0) {
                        arg0[0x2F0]             = 8;
                        arg0[0x304]             = 0;
                        *(s32 *) (arg0 + 0x2E8) = 10;
                        *(s32 *) (arg0 + 0x2E0) = sel;
                        ent                     = *(s32 **) (arg1 + *(s32 *) (arg0 + 0x2E0) * 20 + 4);
                        ent[1]                  = ent[1] & ~1;
                    }
                }
            }
        }
    }
    ad     = KD0;
    fr[6]  = ad;
    fr[16] = ad;
    if (h < ad) {
        return;
    }
    w      = wy << 12;
    a5     = K50;
    fr[7]  = a5;
    fr[17] = a5;
    if (w < a5) {
        return;
    }
    a2     = K28;
    b      = a2 + 0xD0000;
    fr[9]  = a2;
    fr[22] = a2;
    fr[8]  = b;
    fr[18] = b;
    if (h > b) {
        return;
    }
    a3     = K30;
    b      = a3 + 0x5000;
    fr[11] = a3;
    fr[23] = a3;
    fr[10] = b;
    fr[19] = b;
    if (w > b) {
        return;
    }
    if (func_02008ca0(arg0, arg0 + 0x58, arg1, 1, 0) == 0) {
        return;
    }
    func_02008a58(arg0);
    arg0[0x304]             = 1;
    arg0[0x2F0]             = 8;
    *(s32 *) (arg0 + 0x2E8) = 10;
    *(s32 *) (arg0 + 0x2E0) = sel;
    ent                     = *(s32 **) (arg1 + *(s32 *) (arg0 + 0x2E0) * 20 + 4);
    ent[1]                  = ent[1] & ~1;
}
