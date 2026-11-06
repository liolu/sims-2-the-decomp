/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c48e4(s32 idx);
void func_020d59bc(s32 id);
extern u8 *data_0213d95c;
extern void *data_0213e434;
extern u8 data_ov010_02152ee0;

void func_ov010_02149b8c(u8 *arg0) {
    u32 off;
    s32 v;
    s32 k;
    s32 idx;
    u8 *e;
    u8 *tbl;
    u8 b;
    u32 f;
    s32 v2;

    off = (*(u8 **) (arg0 + 0x90))[0x1e6] * 0x28;
    if (((*(u8 **) (arg0 + 0x90)) + off)[0x15b] & 1) {
        return;
    }
    if (*(u16 *) (arg0 + 0xa) < 0x25 || *(u16 *) (arg0 + 0xa) > 0x2a) {
        return;
    }
    if (*(s32 *) ((*(u8 **) (arg0 + 0x90)) + 0xc) != 5) {
        return;
    }
    if (data_ov010_02152ee0 == 0) {
        b = *data_0213d95c;
        if (((u32) b << 27) >> 31) {
            k = 1;
        } else if (((u32) b << 29) >> 31) {
            k = 2;
        } else if (((u32) b << 26) >> 31) {
            k = 3;
        } else {
            goto zero;
        }
    } else if (data_ov010_02152ee0 != 0) {
        tbl = *(u8 **) ((u8 *) data_0213e434 + 0x479c);
        idx = (*(u8 **) (arg0 + 0x90))[0x1e6];
        if (idx < 0) {
            idx = func_020c48e4(idx);
        }
        k = tbl[idx * 0x44 + 0x232];
    } else {
    zero:
        k = 0;
    }
    if (k != 1) {
        return;
    }
    v                                                            = *(u16 *) (arg0 + 0xa) - 0x25;
    *(u8 *) (*(u8 **) ((*(u8 **) (arg0 + 0x90)) + 0x1b4) + 0x9c) = (u8) v;
    e                                                            = (*(u8 **) (arg0 + 0x90)) + off;
    f                                                            = ((u32) (e[0x159] << 24)) >> 28;
    if (!((*(u8 **) (arg0 + 0x90) + v * 0x2c)[0x58] & 1)) {
        v2 = e[f + 0x154];
        if (v2 < 0x32 || v2 > 0x33 || (*(u8 **) (arg0 + 0x90) + v * 0x2c)[0x56] != 0) {
            *(s32 *) ((*(u8 **) (arg0 + 0x90)) + 0xc) = 6;
        } else {
            func_020d59bc(0x171);
        }
    } else {
        func_020d59bc(0x171);
    }
}
