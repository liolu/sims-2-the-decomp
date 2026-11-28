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

M2C_UNK func_0203c24c(s32, s32);
M2C_UNK func_0203c2bc(s32, s32);
M2C_UNK func_0203c578(s32, s32, s32, s32, s32, s32, s32);
M2C_UNK func_0203cb90(s32, s32);
M2C_UNK func_0203d190(s32, S16);
M2C_UNK func_0203de24(S16, s32, s32, s32, s32, s32, s32, A16, B8, s32);
M2C_UNK func_020515f4(s32, s32, s32, s32, s32, s32);
M2C_UNK func_020519b4(s32);
M2C_UNK func_020519d8(s32, s32, s32);
M2C_UNK func_02051b08(S16);
s32 func_020521e0(s32);
extern S16 data_ov018_0214b6e8;

void func_ov018_02149b3c(u8 *arg0, s32 arg1) {
    S16 sv;
    A16 av;
    B8 bv;
    u8 *pb;
    u16 *pa;

    if (*(s8 *) (arg0 + 0x79) == 0) {
        sv = data_ov018_0214b6e8;
        func_0203d190(0, sv);
        func_0203cb90(0, 0);
        pb    = (u8 *) &bv;
        pb[0] = 0;
        pb[1] = 0;
        pb[2] = 0;
        pb[3] = 0;
        pa    = (u16 *) &av;
        pa[0] = 0;
        pa[1] = 0;
        func_0203de24(sv, 0x1A70, 1, 0, 0x10, 0, 0x10, av, bv, 3);
        func_0203c578(0, 1, 1, 0, 0, 0x12, 0x12);
        func_020519d8(3, 0, -1);
        func_02051b08(sv);
        func_020519b4(0xC);
        func_020515f4(0xA, 8, 8, 0x80, func_020521e0(arg1), 0);
        func_0203c2bc(0, -0x380000);
        func_0203c24c(0, -0x200000);
    }
    *(s8 *) (arg0 + 0x78) = 1;
    *(s8 *) (arg0 + 0x79) = 1;
    *(s8 *) (arg0 + 0x7B) = 1;
    *(s8 *) (arg0 + 0x7A) = 1;
}
