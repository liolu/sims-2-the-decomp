/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e2f4;

typedef enum {
    K1000 = 0x1000
} E1;
typedef enum {
    Z0 = 0
} E0;
typedef enum {
    K16C = 0x16C
} E2;
typedef enum {
    K1E = 0x1E0000
} E3;

void func_02074780(s32 *arg0) {
    volatile s32 fr[27];
    s32 idx;
    s32 lr;
    s32 sh;
    s32 v;
    E0 z;
    E0 z2;
    s32 t;
    s32 i;
    s32 *p;
    E1 a;
    E2 b;
    E3 c;

    idx = arg0[0x6C / 4];
    if (idx != -1) {
        a     = K1000;
        fr[0] = a;
        fr[9] = a;
        if (arg0[0x54 / 4 + idx] > a) {
            t      = arg0[1];
            fr[10] = t;
            if (arg0[0] < t) {
                lr     = (*(s32 *) (data_0213e2f4 + 0x68) == 3);
                fr[1]  = 0x1000;
                fr[11] = 0x1000;
                arg0[0x54 / 4 + idx] -= 0x1000;
                sh      = arg0[0x70 / 4] << lr;
                v       = 0xCC << sh;
                fr[3]   = v;
                fr[20]  = v;
                v       = arg0[0] + (0xCC << sh);
                fr[2]   = v;
                fr[12]  = v;
                arg0[0] = v;
                z       = Z0;
                fr[13]  = z;
                fr[21]  = z;
                if (arg0[0] < z) {
                    fr[14]  = z;
                    fr[22]  = z;
                    arg0[0] = z;
                }
                t      = arg0[1];
                fr[25] = t;
                fr[23] = t;
                if (arg0[0] > t) {
                    fr[24]  = t;
                    arg0[0] = t;
                }
                z2     = Z0;
                fr[4]  = z2;
                fr[15] = z2;
                p      = arg0 + arg0[0x6C / 4];
                if (p[0x54 / 4] < z2) {
                    fr[5]       = z2;
                    fr[16]      = z2;
                    p[0x54 / 4] = z2;
                }
            }
        }
    }
    fr[6] = b = K16C;
    fr[7] = c = K1E;
    for (i = 0; i <= 5; i++) {
        t      = fr[6];
        fr[17] = t;
        arg0[0x54 / 4 + i] += t;
        t      = fr[7];
        fr[18] = t;
        if (arg0[0x54 / 4 + i] >= t) {
            fr[8]              = c;
            fr[19]             = c;
            arg0[0x54 / 4 + i] = c;
        }
    }
    arg0[0x6C / 4] = -1;
    arg0[0x70 / 4] = 1;
}
