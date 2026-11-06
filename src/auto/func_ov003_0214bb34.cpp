/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 x, y;
} P2;
typedef struct {
    P2 p[4];
} T8;

extern "C" {
extern T8 data_ov003_021509f8;
extern u8 *data_0213e434;
extern u8 *data_02139fa4;

void func_02051a50(s32, s32, s32);
s32 func_02052258(u32);
s32 func_02051338(s32, s32, s32, s32, s32);
void func_0205166c(s32, s32, s32, s32, s32, s32);
s32 func_ov003_0214a50c(s32, s32, T8 *, s32, s32, s32);
void func_020165bc(u8 *, s32);
void func_ov003_0214ba04(u8 *);
void func_0203c7b0(s32, s32, s32, s32, s32, s32);
void func_02048128(u8 *, s32, s32, s32, s32);
void func_0204818c(u8 *, s32, s32, s32, s32);

void func_ov003_0214bb34(u8 *arg0) {
    s32 r5;
    s32 moved;
    s32 v;
    T8 loc;

    func_02051a50(3, 0, -1);
    if (arg0[0x13] == 0) {
        arg0[0x13] = 1;
        func_02051338(1, 0x94, 0x8c, func_02052258(0x7e5), 1);
    }
    if (arg0[0x14] == 1) {
        arg0[0x14] = 0;
        r5         = func_02051338(0x32, 0x93, 0xa, func_02052258(arg0[0x10] + 0x7ca), 1);
        func_0205166c(r5, 0x3c, 0x50, 0xaa, func_02052258(arg0[0x10] + 0x7ce), 0);
    }
    if (arg0[0x11] == 0) {
        loc = data_ov003_021509f8;
        r5  = func_ov003_0214a50c(*(s32 *) (arg0 + 4), 4, &loc, 0x2c, 0x34, 1);
        if (r5 != -1 && (u8) r5 != arg0[0x10]) {
            func_020165bc(*(u8 **) (*(u8 ***) (arg0 + 8) + arg0[0x10]), 0);
            arg0[0x10] = r5;
            func_020165bc(*(*(u8 ***) (arg0 + 8) + arg0[0x10]), 1);
            moved = 1;
        } else {
            moved = 0;
        }
        if (moved == 0) {
            func_ov003_0214ba04(arg0);
            return;
        }
        func_0203c7b0(0, 6, 0, 0x18, 0x10, 0);
        arg0[0x14] = 1;
        return;
    }
    arg0[0x12] = arg0[0x12] - 1;
    v          = arg0[0x12];
    if (v == 0) {
        if (arg0[0x11] == 1) {
            *(u32 *) (data_0213e434 + 0x68) = arg0[0x10];
            func_02048128(data_02139fa4, 2, 5, 5, 8);
            func_0204818c(data_02139fa4, 0xc, 0, 0, 0);
            return;
        }
        func_02048128(data_02139fa4, 0x18, 0, 0, 0);
        func_0204818c(data_02139fa4, 0, 0, 0, 0);
        return;
    }
    if (v != 0xf) {
        return;
    }
    {
        u8 **tbl;
        tbl = *(u8 ***) (arg0 + 8);
        *(u32 *) (tbl[arg0[0x11] + 3] + 4) |= 1;
        tbl = *(u8 ***) (arg0 + 8);
        *(u32 *) (tbl[arg0[0x11] + 5] + 4) &= ~1;
    }
}
}
