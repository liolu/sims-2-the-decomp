/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e2f4;
s32 func_02073378(s32 a);

void func_02077a34(s32 *arg0, s32 mode) {
    volatile s32 fr[0x15];
    enum {
        EA = 0x2333,
        EB = 0x24cc,
        EC = 0x2800,
        ED = 0x2666,
        EE = 0x2199
    } k;
    s32 v;

    *arg0 = func_02073378(data_0213e2f4 + 0x41f8) << 12;
    switch (mode) {
        case 0x1d:
            k      = EE;
            fr[0]  = k;
            fr[5]  = k;
            v      = (s32) (((s64) *arg0 * k + 0x800) >> 12);
            fr[6]  = v;
            fr[15] = v;
            *arg0  = v;
            break;
        case 0xf:
            k      = EA;
            fr[1]  = k;
            fr[7]  = k;
            v      = (s32) (((s64) *arg0 * k + 0x800) >> 12);
            fr[8]  = v;
            fr[16] = v;
            *arg0  = v;
            break;
        case 0x12:
            k      = EB;
            fr[2]  = k;
            fr[9]  = k;
            v      = (s32) (((s64) *arg0 * k + 0x800) >> 12);
            fr[10] = v;
            fr[17] = v;
            *arg0  = v;
            break;
        case 8:
            k      = ED;
            fr[3]  = k;
            fr[11] = k;
            v      = (s32) (((s64) *arg0 * k + 0x800) >> 12);
            fr[12] = v;
            fr[18] = v;
            *arg0  = v;
            break;
        case 0x14:
            k      = EC;
            fr[4]  = k;
            fr[13] = k;
            v      = (s32) (((s64) *arg0 * k + 0x800) >> 12);
            fr[14] = v;
            fr[19] = v;
            *arg0  = v;
            break;
    }
}
