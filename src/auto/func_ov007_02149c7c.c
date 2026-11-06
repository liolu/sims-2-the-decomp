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

M2C_UNK func_0203cfb0(s32);
M2C_UNK func_0203cec4(u32);
M2C_UNK func_0203d208(s32, S16);
M2C_UNK func_0203e23c(s32, s32, s32, s32, s32, s32, A16, B8, s32);
extern S16 data_ov007_02149e3c;
extern s32 data_027e0000;

void func_ov007_02149c7c(u8 *arg0) {
    S16 sv;
    A16 av;
    B8 bv;
    A16 av2;
    B8 bv2;
    u8 *pb;
    u16 *pa;

    func_0203cfb0(0);
    func_0203cec4(0x1000);
    sv.v = data_ov007_02149e3c.v;
    func_0203d208(0, *(S16 *) &data_ov007_02149e3c);
    pb    = (u8 *) &bv;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    pa    = (u16 *) &av;
    pa[0] = 0;
    pa[1] = 0;
    func_0203e23c(0, 0x1390, 0, 0, 0, 0x100, av, bv, 0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0203cfb0(0);
    func_0203cec4(0x1000);
    func_0203d208(0, sv);
    pb    = (u8 *) &bv2;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    pa    = (u16 *) &av2;
    pa[0] = 0;
    pa[1] = 0;
    func_0203e23c(0, 0x1390, 0, 0, 0, 0x100, av2, bv2, 0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    *(s32 *) (arg0 + 0x18) = 0x64;
    *(s32 *) (arg0 + 0x1C) = 0;
}
