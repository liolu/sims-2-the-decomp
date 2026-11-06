/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};
typedef struct {
    u16 v;
} U16One;
typedef struct {
    u16 a, b;
} U16Pair;
typedef struct {
    u8 a, b, c, d;
} U8x4;
typedef struct {
    u32 w[19];
} Blk76;
extern "C" {

extern u16 data_ov017_0214c4a0;
extern u16 data_ov017_0214c498;
extern u8 data_ov017_0214c66c;
extern u8 data_ov017_0214c4b0;
extern u16 data_ov017_0214c49c;
void *func_02016688(void *, u16, s32);
s32 func_0208b000(s32);
void func_02016708(void *, s32);
void func_0203de9c(U16One, u16, s32, s32, s32, s32, s32, U16Pair, U8x4, s32);
void func_0203d15c(s32, U16One);
void func_ov017_02149d10(void *);

void func_ov017_02149f7c(u8 *arg0) {
    s32 fr[17];
    Blk76 tbl;
    u8 *q;
    u8 *r;
    s32 ip;
    s32 z;
    s32 w;
    u8 *bp;
    u16 *hp;

    if (arg0[0x170] != 0) {
        arg0[0x170] = arg0[0x170] - 1;
        if (arg0[0x170] == 0) {
            q = *(u8 **) (arg0 + 0x16c);
            if (q != 0) {
                if (q != 0) {
                    ((VA *) q)->f1();
                }
            }
            *(u32 *) (arg0 + 0x16c) = 0;
            func_02016688(*(void **) (arg0 + 0x148), data_ov017_0214c4a0, 0);
        }
    }
    if (arg0[0x162] == 0) {
        return;
    }
    q = *(u8 **) (arg0 + 0x16c);
    if (q != 0) {
        fr[6] = fr[0] = 0;
        if (*(s32 *) (q + 0x64) != fr[0]) {
            w                   = *(volatile s32 *) (q + 0x64);
            fr[7]               = w;
            *(s32 *) (q + 0x54) = *(s32 *) (q + 0x54) + w;
        }
        fr[8] = fr[1] = 0xad000;
        r             = *(u8 **) (arg0 + 0x16c);
        if (*(s32 *) (r + 0x54) >= fr[1]) {
            fr[9] = fr[2]       = 0;
            *(s32 *) (r + 0x64) = 0;
            func_02016708(*(void **) (arg0 + 0x16c), func_0208b000(*(u16 *) (arg0 + 0x100 + 0x5e)));
            r                = *(u8 **) (arg0 + 0x16c);
            *(u32 *) (r + 4) = *(u32 *) (r + 4) & ~1;
            func_02016688(*(void **) (arg0 + 0x148), data_ov017_0214c498, 0);
        }
    }
    ip = arg0[0x164];
    if (ip == 0) {
        return;
    }
    fr[10] = fr[3] = 0xad000;
    if (*(s32 *) (*(u8 **) (arg0 + 0x16c) + 0x54) < fr[3]) {
        return;
    }
    tbl = *(Blk76 *) &data_ov017_0214c66c;
    if (ip == 0x13) {
        bp    = (u8 *) &fr[14];
        bp[0] = 0;
        bp[1] = 0;
        bp[2] = 0;
        hp    = (u16 *) &fr[13];
        bp[3] = 0;
        hp[0] = 0;
        hp[1] = 0;
        func_0203de9c(*(U16One *) (&data_ov017_0214c4b0 + arg0[0x163] * 2), 0x2106, 1, 0, 0x20, 0x20, 0,
                      (*(U16Pair *) &fr[13]), (*(U8x4 *) &fr[14]), 1);
        func_0203d15c(2, *(U16One *) (&data_ov017_0214c4b0 + arg0[0x163] * 2));
        arg0[0x164] = 0;
        arg0[0x162] = 0;
        func_ov017_02149d10(arg0);
        r                                         = *(u8 **) (arg0 + 0x16c);
        *(u32 *) (r + 4)                          = *(u32 *) (r + 4) | 1;
        fr[4]                                     = 0xe7000;
        fr[11]                                    = 0xe7000;
        *(s32 *) (*(u8 **) (arg0 + 0x16c) + 0x50) = 0xe7000;
        fr[5]                                     = 0xa6000;
        fr[12]                                    = 0xa6000;
        *(s32 *) (*(u8 **) (arg0 + 0x16c) + 0x54) = 0xa6000;
        arg0[0x170]                               = 10;
        func_02016688(*(void **) (arg0 + 0x148), data_ov017_0214c49c, 0);
    } else {
        bp    = (u8 *) &fr[16];
        bp[0] = 0;
        bp[1] = 0;
        bp[2] = 0;
        hp    = (u16 *) &fr[15];
        bp[3] = 0;
        hp[0] = 0;
        hp[1] = 0;
        func_0203de9c(*(U16One *) (&data_ov017_0214c4b0 + arg0[0x163] * 2), (u16) tbl.w[arg0[0x164]], 1, 0, 0x20, 0x20, 0,
                      (*(U16Pair *) &fr[15]), (*(U8x4 *) &fr[16]), 1);
    }
    if (arg0[0x162] == 0) {
        return;
    }
    func_0203d15c(2, *(U16One *) (&data_ov017_0214c4b0 + arg0[0x163] * 2));
    arg0[0x163] = arg0[0x163] == 0 ? 1 : 0;
    arg0[0x164] = arg0[0x164] + 1;
}
}
