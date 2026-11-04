/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020117e8(void *, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK func_02018acc(M2C_UNK *);
M2C_UNK func_02019684(M2C_UNK *);
M2C_UNK func_0201d124(M2C_UNK *);
M2C_UNK func_0201d56c(M2C_UNK *);
M2C_UNK func_0201d844(M2C_UNK *);
M2C_UNK func_0201dcf0(M2C_UNK *);
s32 func_02021fd4(void *, M2C_UNK);
s32 func_020235a0(void *);
s32 func_02077a48(void *, M2C_UNK);
M2C_UNK func_0207cc64(void *, M2C_UNK);
M2C_UNK func_0207cdf0(void *);
M2C_UNK func_0207d100(void *);
extern u8 data_0213e434;

void func_0202123c(u8 *arg0) {
    u8 fr[184];
    s32 t;

    func_0201d124((M2C_UNK *) (fr + 0x00));
    func_0201d56c((M2C_UNK *) (fr + 0x3C));
    func_02019684((M2C_UNK *) (fr + 0x60));
    if (func_020235a0(arg0) == 0 || func_020235a0(arg0) == 4) {
        func_0207d100(*(u8 **) &data_0213e434 + 0x21DC);
        func_0207cc64(*(u8 **) &data_0213e434 + 0x21DC, 0x20);
    }
    if (func_020235a0(arg0) == 3) {
        func_0207cdf0(*(u8 **) &data_0213e434 + 0x21DC);
        func_0207cc64(*(u8 **) &data_0213e434 + 0x21DC, 0x18);
    }
    if (func_020235a0(arg0) == 2) {
        func_0207cc64(*(u8 **) &data_0213e434 + 0x21DC, 0x1C);
    }
    if (func_020235a0(arg0) == 1 || func_020235a0(arg0) == 5) {
        func_0207cc64(*(u8 **) &data_0213e434 + 0x21DC, 0x24);
    }
    *(u16 *) (*(u8 **) &data_0213e434 + 0x2E00 + 0xE2) = *(u16 *) (*(u8 **) (arg0 + 4) + 0xA);
    func_020117e8(*(u8 **) (arg0 + 4), 0x1E, (M2C_UNK *) (fr + 0x60), 0);
    func_020117e8(*(u8 **) (arg0 + 4), 0x22, (M2C_UNK *) (fr + 0x3C), 0);
    func_0201dcf0((M2C_UNK *) (fr + 0x78));
    *(u8 *) (fr + 0x9B) = 1;
    func_020117e8(*(u8 **) (arg0 + 4), 0x46, (M2C_UNK *) (fr + 0x78), 0);
    t                    = func_02021fd4(arg0, 8);
    *(s32 *) (fr + 0x10) = t;
    *(u16 *) (fr + 0x30) = 0x7F;
    func_020117e8(*(u8 **) (arg0 + 4), 3, (M2C_UNK *) (fr + 0x00), 0);
    func_0201d844((M2C_UNK *) (fr + 0x9C));
    *(u16 *) (fr + 0xAE) = 0x7F;
    func_020117e8(*(u8 **) (arg0 + 4), 0x23, (M2C_UNK *) (fr + 0x9C), 0);
    *(u16 *) (fr + 0x4C) = 0x112;
    *(u16 *) (fr + 0x58) = 0xC8;
    func_020117e8(*(u8 **) (arg0 + 4), 0x22, (M2C_UNK *) (fr + 0x3C), 0);
    if (func_020235a0(arg0) == 0 || func_020235a0(arg0) == 4) {
        *(s32 *) (*(u8 **) &data_0213e434 + 0x74) = *(s32 *) (*(u8 **) &data_0213e434 + 0x74) + 1;
    } else {
        *(s32 *) (*(u8 **) &data_0213e434 + 0x78) = *(s32 *) (*(u8 **) &data_0213e434 + 0x78) + 1;
    }
    if (func_020235a0(arg0) == 1) {
        if (*(u8 *) (*(u8 **) &data_0213e434 + 0x2000 + 0xF78) == 3) {
            if (func_02077a48(*(u8 **) &data_0213e434 + 0x2F78, 0x1E) != 0) {
                *(u8 *) (*(u8 **) &data_0213e434 + 0x2000 + 0xF9B) = *(u8 *) (*(u8 **) &data_0213e434 + 0x2000 + 0xF9B) + 1;
            }
        }
    }
    func_02018acc((M2C_UNK *) (fr + 0x9C));
    func_02018acc((M2C_UNK *) (fr + 0x78));
    func_02018acc((M2C_UNK *) (fr + 0x60));
    func_02018acc((M2C_UNK *) (fr + 0x3C));
    func_02018acc((M2C_UNK *) (fr + 0x00));
}
