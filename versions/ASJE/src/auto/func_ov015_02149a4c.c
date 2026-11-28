/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e2f4;
void func_02082c48(u8 *p, u8 v);
void func_02083ce8(u8 *p, s32 v);

void func_ov015_02149a4c(u8 *arg0) {
    s32 k;
    s32 cnt;
    u8 *g;
    s32 n;

    if (*(u16 *) (arg0 + 0x34) != 0x43) {
        return;
    }
    cnt = 0;
    g   = *(u8 **) &data_0213e2f4;
    k   = cnt;
    n   = *(s32 *) (g + 0x215C);
    if (n > 0) {
        do {
            if ((u32) (u16) (((u16 *) (g + 0x28))[k] + 0xFED3) <= 2U) {
                cnt += 1;
            }
            k += 1;
        } while (k < n);
    }
    if (cnt >= 3) {
        *(u16 *) (arg0 + 0x34) = 0x45;
        *(s16 *) (arg0 + 0x38) = 0x1A;
        cnt                    = 3;
        func_02082c48(*(u8 **) &data_0213e2f4 + 0x2FA4, arg0[0x3C]);
        k = 0;
        g = *(u8 **) &data_0213e2f4;
        if (*(s32 *) (g + 0x215C) <= 0) {
            return;
        }
        do {
            if ((u32) (u16) (((u16 *) (g + 0x28))[k] + 0xFED3) <= 2U) {
                func_02083ce8(g + 0x18, k);
                cnt -= 1;
                k -= 1;
                if (cnt == 0) {
                    return;
                }
            }
            k += 1;
            g = *(u8 **) &data_0213e2f4;
        } while (k < *(s32 *) (g + 0x215C));
        return;
    }
    *(u16 *) (arg0 + 0x34) = 0x44;
}
