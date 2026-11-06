/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a;
    u16 b;
} H2;

typedef struct {
    u8 c[4];
} B4;

typedef struct {
    u16 v;
} U16S;

void func_0203d208(s32 a, U16S b);
void func_0203e23c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, H2 g, B4 h, s32 i);
void func_0204eef0(u8 a, u16 b);
extern u16 data_ov017_0214c4ac;

void func_ov017_0214a7f0(u8 *arg0) {
    H2 g1;
    B4 g2;
    u8 *pb;
    u16 *ph;

    if (arg0[0x158] == 0) {
        func_0203d208(0, *(U16S *) &data_ov017_0214c4ac);
        pb    = (u8 *) &g2;
        pb[0] = 0;
        pb[1] = 0;
        pb[2] = 0;
        pb[3] = 0;
        ph    = (u16 *) &g1;
        ph[0] = 0;
        ph[1] = 0;
        func_0203e23c(0, 0x2132, 1, 0x10, 0x10, 0, g1, g2, 1);
        arg0[0x158] = 1;
        arg0[0x159] = 0;
        arg0[0x15a] = 0;
        arg0[0x15b] = 1;
        *(u32 *) (*(u8 **) (arg0 + 0x14c) + 4) |= 1;
        arg0[0x15c] = 4;
        func_0204eef0(arg0[0x15c], (u16) (0x10 - arg0[0x15c]));
        return;
    }
    arg0[0x15c] += 4;
    if (arg0[0x15c] >= 0x10) {
        arg0[0x15c] = 0xf;
    }
    func_0204eef0(arg0[0x15c], (u16) (0x10 - arg0[0x15c]));
}
