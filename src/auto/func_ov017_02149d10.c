/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov017_0214c4a8;
extern u8 *data_0213e434;

typedef struct {
    u16 v;
} Fh;
typedef struct {
    u16 a;
    u16 b;
} H2;
typedef struct {
    u8 a;
    u8 b;
    u8 c;
    u8 d;
} B4;

void func_0203d208(s32, Fh);
void func_0203cc08(s32, s32);
s32 func_0203de9c(Fh, s32, s32, s32, s32, s32, s32, H2, B4, s32);
void func_0203c5f0(s32, s32, s32, s32, s32, s32, s32);
void func_0203c334(s32, s32);
void func_0203c2c4(s32, s32);
void *func_02052258(s32);
void func_02018554(s32, void *);
void func_02018520(u8 *, s32, s32);
s32 func_02083d1c(u8 *, u32);
void func_0206466c(s32, s32, s32);
void func_02083dc8(s32, s32);
s32 func_020d59bc(s32);
void func_ov017_0214a7f0(u8 *);

static inline void zb(u8 *p) {
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}

static inline void zh(u16 *p) {
    p[0] = 0;
    p[1] = 0;
}

void func_ov017_02149d10(u8 *arg0) {
    Fh fh;
    u8 *g;
    u8 *pb;
    u16 *ph;

    if (*(s8 *) (arg0 + 0x188) == 0) {
        fh.v = *(u16 *) &data_ov017_0214c4a8;
        func_0203d208(1, fh);
        func_0203cc08(1, 0);
        {
            H2 h;
            B4 b    = {0, 0, 0, 0};
            u16 *hp = (u16 *) &h;
            hp[0]   = 0;
            hp[1]   = 0;

            func_0203de9c(fh, 0x2191, 0xB7, 0, 0x20, 0, 0x10, h, b, 3);
            func_0203c5f0(1, 0xB7, 2, 0, 0, 0x10, 4);
            func_0203c334(1, -0x400000);
            func_0203c2c4(1, -0xA00000);
        }
    }
    *(u8 *) (arg0 + 0x188) = 0x3C;
    func_02018554(*(s32 *) (arg0 + 0x180), func_02052258(*(u16 *) (arg0 + 0x100 + 0x86)));
    func_02018520(*(u8 **) (arg0 + 0x180), 0x80, 0xA8);
    *(s32 *) (*(u8 **) (arg0 + 0x180) + 4) |= 1;
    switch (*(s32 *) (arg0 + 0x168)) {
        case 3:
            g = data_0213e434;
            if (*(s32 *) (g + 0x2000 + 0x15C) >= 6) {
                return;
            }
            if (func_02083d1c(g + 0x18, 0x52) != 6) {
                return;
            }
            func_0206466c((s32) data_0213e434, 0x20, 0);
            func_02083dc8((s32) data_0213e434 + 0x18, 0x52);
            return;
        case 1:
            if (*(u16 *) (arg0 + 0x100 + 0x60) == 0) {
                return;
            }
            func_020d59bc(0x172);
            *(s32 *) (arg0 + 0x150) += *(u16 *) (arg0 + 0x100 + 0x60);
            return;
        case 2:
            func_ov017_0214a7f0(arg0);
            return;
    }
}
