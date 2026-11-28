/* compiler: 1.2/sp2p3 -pragma "opt_strength_reduction off" */
#include "m2c.h"

extern const u16 data_021287d8[];
extern const s8 data_021287c8[];

void func_020d7028(void *dst, u32 *src, u32 n, s32 is16) {
    u32 i;
    s32 idx;
    s32 step;
    u32 w;
    s32 code;
    s32 diff;
    s32 pred;
    idx  = ((u8 *) src)[2] & 0x7f;
    pred = *(s16 *) src;
    step = data_021287d8[idx];
    src++;
    for (i = 0; i < n; i++) {
        if ((i & 7) == 0) {
            w = *src++;
        }
        code = w & 0xf;
        w >>= 4;
        diff = step >> 3;
        if (code & 1) {
            diff += step >> 2;
        }
        if (code & 2) {
            diff += step >> 1;
        }
        if (code & 4) {
            diff += step;
        }
        if (code & 8) {
            diff = -diff;
        }
        pred += diff;
        if (pred >= 0x8000) {
            pred = 0x7fff;
        } else if (pred < -0x8000) {
            pred = -0x8000;
        }
        if (is16) {
            ((s16 *) dst)[i] = pred;
        } else {
            ((s8 *) dst)[i] = pred >> 8;
        }
        idx += data_021287c8[code];
        if (idx < 0) {
            idx = 0;
        } else if (idx > 0x58) {
            idx = 0x58;
        }
        step = data_021287d8[idx];
    }
}
