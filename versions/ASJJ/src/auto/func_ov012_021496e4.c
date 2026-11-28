/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} S16;
typedef struct {
    u16 a;
    u16 b;
} A16;
typedef struct {
    u8 a;
    u8 b;
    u8 c;
    u8 d;
} B8;

M2C_UNK func_0203c2f8(s32, s32);
M2C_UNK func_0203c368(s32, s32);
M2C_UNK func_0203c624(s32, s32, s32, s32, s32, s32, s32);
M2C_UNK func_0203cc3c(s32, s32);
M2C_UNK func_0203d23c(s32, S16);
M2C_UNK func_0203ded0(S16, s32, s32, s32, s32, s32, s32, A16, B8, s32);
M2C_UNK func_0205161c(s32, s32, s32, s32, s32, s32);
M2C_UNK func_02051b30(s32);
M2C_UNK func_02051b54(s32, s32, s32);
M2C_UNK func_02051dbc(S16);
s32 func_020524a8(s32);
extern S16 data_ov012_0214a47c;

void func_ov012_021496e4(u8 *arg0, s32 arg1) {
    S16 sv;
    A16 av;
    B8 bv;
    u8 *pb;
    u16 *pa;

    if (*(s8 *) (arg0 + 0x35) == 0) {
        sv = data_ov012_0214a47c;
        func_0203d23c(2, sv);
        func_0203cc3c(2, 0);
        pb    = (u8 *) &bv;
        pb[0] = 0;
        pb[1] = 0;
        pb[2] = 0;
        pb[3] = 0;
        pa    = (u16 *) &av;
        pa[0] = 0;
        pa[1] = 0;
        func_0203ded0(sv, 0x1A70, 1, 0, 0x20, 0, 0x10, av, bv, 0);
        func_0203c624(2, 1, 2, 0, 0, 0x12, 0x12);
        func_02051b54(3, 0, -1);
        func_02051dbc(sv);
        func_02051b30(0xC);
        func_0205161c(0xA, 8, 8, 0x80, func_020524a8(arg1), 0);
        func_0203c368(2, -0x380000);
        func_0203c2f8(2, -0x200000);
    }
    *(s8 *) (arg0 + 0x34) = 1;
    *(s8 *) (arg0 + 0x35) = 1;
    *(s8 *) (arg0 + 0x37) = 1;
    *(s8 *) (arg0 + 0x36) = 1;
}
