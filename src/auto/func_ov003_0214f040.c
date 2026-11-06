/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 x;
    u32 y;
} P2;

extern P2 data_ov003_02150bac;
extern P2 data_ov003_02150bb4;

s32 func_0200e168(s32);

void func_ov003_0214f040(s32 idx, u8 *src, u8 *dst) {
    P2 a0;
    P2 b0;
    P2 a1;
    P2 b1;
    u32 *p;
    u16 v;
    u32 h;

    h = *(u16 *) (src + 2);
    switch ((u32) (h << 16) >> 30) {
        case 0:
            dst[0x1D] = (u32) (h << 18) >> 30;
            dst[0x1D] = dst[0x1D] + func_0200e168(1);
            a0        = data_ov003_02150bac;
            b0        = data_ov003_02150bb4;
            p         = (u32 *) ((u32 *) &a0)[idx];
            if (((u32) (*(u16 *) (src + 2) << 16) >> 30) == 1) {
                p = (u32 *) ((u32 *) &b0)[idx];
            }
            v                    = *(u16 *) ((u8 *) p + src[1] * 2);
            *(u16 *) (dst + 2)   = v;
            *(u16 *) (dst + 6)   = (u32) (*(u16 *) (src + 2) << 26) >> 26;
            *(u16 *) (dst + 0xC) = (u32) (*(u16 *) (src + 4) << 26) >> 26;
            if (*(u16 *) (dst + 0xC) == 0x3F) {
                *(u16 *) (dst + 0xC) = 0xFFFF;
            }
            break;
        case 1:
            dst[0x1E] = (u32) (h << 18) >> 30;
            dst[0x1E] = dst[0x1E] + func_0200e168(2);
            a1        = data_ov003_02150bac;
            b1        = data_ov003_02150bb4;
            p         = (u32 *) ((u32 *) &a1)[idx];
            if (((u32) (*(u16 *) (src + 2) << 16) >> 30) == 1) {
                p = (u32 *) ((u32 *) &b1)[idx];
            }
            v                    = *(u16 *) ((u8 *) p + src[1] * 2);
            *(u16 *) (dst + 4)   = v;
            *(u16 *) (dst + 8)   = (u32) (*(u16 *) (src + 2) << 26) >> 26;
            *(u16 *) (dst + 0xE) = (u32) (*(u16 *) (src + 4) << 20) >> 26;
            if (*(u16 *) (dst + 0xE) == 0x3F) {
                *(u16 *) (dst + 0xE) = 0xFFFF;
            }
            *(u16 *) (dst + 0xA) = (u32) (*(u16 *) (src + 2) << 20) >> 26;
            if (*(u16 *) (dst + 0xA) == 0x3F) {
                *(u16 *) (dst + 0xA) = 0xFFFF;
            }
            break;
    }
}
