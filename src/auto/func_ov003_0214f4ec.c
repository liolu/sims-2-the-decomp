/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_021509cc[];
extern u8 data_ov003_02150bf4[];
extern u8 data_0213e434[];
extern u8 data_ov003_0215017c[];
extern u16 data_ov003_0215018c[];
extern u16 data_ov003_021501bc[];
extern u8 data_ov003_02150344[];
extern u8 data_ov003_0214ff58[];
extern u8 data_ov003_0214ff04[];
extern u8 data_ov003_0214fbe4[];

void func_02046acc(u8 *, s32);
s32 func_0200f1c4(s32);
void func_02046944(u8 *, u8 *, s32);
void func_ov003_0214e824(u8 *, s32);
void func_ov003_0214e538(u8 *);

u8 *func_ov003_0214f4ec(u8 *arg0, u8 *arg1) {
    u16 h14;
    u16 h16;
    u8 *p;
    u8 *o;
    s32 r;
    s32 t;

    *(u8 **) arg0       = data_ov003_021509cc;
    *(u8 **) (arg0 + 4) = arg1;
    func_02046acc(arg0 + 8, 0x20);
    *(u8 **) arg0                         = data_ov003_02150bf4;
    *(u16 *) (arg0 + 0x14)                = 0;
    o                                     = *(u8 **) (arg0 + 4);
    *(u16 *) (arg0 + 0x16)                = (o + *(u16 *) (o + 0x76) * 12 + *(u16 *) (arg0 + 0x14) * 2)[0x28];
    o                                     = *(u8 **) (arg0 + 4);
    *(u16 *) (arg0 + 0x18)                = (o + *(u16 *) (o + 0x76) * 12 + *(u16 *) (arg0 + 0x14) * 2)[0x29];
    o                                     = *(u8 **) (arg0 + 4);
    o[0x40]                               = 0;
    arg0[0x21]                            = 0;
    o                                     = *(u8 **) (arg0 + 4);
    arg0[0x23]                            = (u8) func_0200f1c4(*(s32 *) (o + *(u16 *) (o + 0x76) * 4 + 0x48));
    *(u16 *) (arg0 + 0x1a)                = 0;
    *(u16 *) (arg0 + 0x1c)                = 0;
    arg0[0x1f]                            = 0;
    arg0[0x20]                            = 0x1e;
    arg0[0x22]                            = 0;
    arg0[0x1e]                            = (*(u8 **) data_0213e434)[0x12];
    p                                     = data_ov003_0215017c + *(u16 *) (arg1 + 0x76) * 0x30;
    *(u8 **) (arg0 + 0x10)                = p;
    *(u16 *) (data_ov003_0215017c + 0x14) = 8;
    *(u16 *) (data_ov003_0215017c + 0x44) = 8;
    if ((*(s32 *) (*(u8 **) data_0213e434) & 0x20000) != 0) {
        ((volatile u16 *) data_ov003_0215018c)[2] += 2;
        ((volatile u16 *) data_ov003_021501bc)[2] += 2;
        if ((*(s32 *) (*(u8 *volatile *) data_0213e434) & 0x40000) == 0) {
            *(u8 *) (*(u8 **) (data_ov003_0215017c + 0x10) + 0x6c) = 0xa;
            *(u8 *) (*(u8 **) (data_ov003_0215017c + 0x40) + 0x6c) = 0xa;
        }
    }
    func_02046944(arg0 + 8, data_ov003_02150344, 9);
    *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x18) + 0x10) |= 0x10000000;
    *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x18) + 4) &= ~1;
    if (*(u16 *) (*(u8 **) (arg0 + 4) + 0x76) == 0) {
        func_02046944(arg0 + 8, data_ov003_0214ff58, 6);
    } else {
        func_02046944(arg0 + 8, data_ov003_0214ff04, 6);
    }
    o = *(u8 **) (arg0 + 4);
    if (*(u16 *) (o + 0x74) == 7) {
        o[0x40] = 0xfe;
        func_02046944(arg0 + 8, data_ov003_0214fbe4, 4);
        *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x44) + 4) &= ~1;
        *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x48) + 4) &= ~1;
    }
    func_ov003_0214e824(arg0, 1);
    *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x18) + 4) &= ~1;
    *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x1c) + 4) &= ~1;
    if (*(u16 *) (arg0 + 0x16) != 0) {
        *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x18) + 4) |= 1;
    }
    if ((s32) * (u16 *) (arg0 + 0x16) <
        (s32) ((u32) * (u16 *) (*(u8 **) (arg0 + 0x10) + *(u16 *) (arg0 + 0x14) * 8 + 4) >> 1) - 3) {
        *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x1c) + 4) |= 1;
    }
    func_ov003_0214e538(arg0);
    return arg0;
}
