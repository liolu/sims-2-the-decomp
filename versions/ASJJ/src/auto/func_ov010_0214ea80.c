/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov010_0214ea80(u8 *arg0, s32 *arg1) {
    s32 i;
    s32 ret;
    s32 cnt[6];
    s32 idx;
    s32 x;
    u8 *ent;
    s32 flag;
    u8 sel;
    s32 n;
    s32 k;
    s32 j;
    s32 best;
    s32 v;
    s32 zero;

    sel = arg0[0x1E6];
    ret = 0;
    i   = ret;
    do {
        cnt[i] = ret;
        i++;
    } while (i < 6);
    zero = ret;
    ent  = arg0 + sel * 0x28;
    do {
        x = ent[0x154];
        if (x < 0x30) {
            idx = x / 8;
            if (x >= 0x30 && x <= 0x31) {
                v = 0;
            } else {
                v = x % 8 + 1;
            }
            if (v >= 4) {
                cnt[idx]++;
            }
        }
        zero++;
        ent++;
    } while (zero < 5);
    best = 0;
    j    = 0;
    do {
        n = cnt[j];
        if (n > best) {
            flag = 0;
            if ((arg0[0x58] & 1) == 0) {
                k = 0;
                do {
                    if (((u8 **) (arg0 + 0x38))[k][0x80] == 0) {
                        flag = 1;
                        break;
                    }
                    k++;
                } while (k < 4);
            }
            if (flag != 0) {
                best  = n;
                *arg1 = j;
            }
        }
        j++;
        arg0 += 0x2c;
    } while (j < 6);
    if (best > 0) {
        ret = 1;
    }
    return ret;
}
