/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02016700(void *, M2C_UNK *);
void *func_02044580(u16);
M2C_UNK func_020d54a8(s32);
extern M2C_UNK data_021273b0;

void func_020c021c(void *arg0) {
    volatile s32 tmp[6];
    s32 a;
    s32 b;
    u8 *p = (u8 *) arg0;
    s32 *q;

    p[0x16B]             = 1;
    tmp[0]               = 0;
    tmp[1]               = 0;
    *(s32 *) (p + 0x144) = 0;
    a                    = tmp[1];
    tmp[4]               = a;
    *(s32 *) (p + 0x148) = a;
    a                    = *(s32 *) (p + 0x80);
    tmp[2]               = a;
    b                    = *(s32 *) (p + 0x84);
    tmp[3]               = b;
    *(s32 *) (p + 0x50)  = a;
    b                    = tmp[3];
    tmp[5]               = b;
    *(s32 *) (p + 0x54)  = b;
    *(s32 *) (p + 0x94) &= ~1;
    q = *(s32 **) (p + 0x12C);
    q[1] &= ~1;
    *(s32 *) (p + 4) |= 1;
    func_02016700(arg0, &data_021273b0);
    *(s32 *) (p + 4) |= 0x10;
    *(s32 *) (p + 0x14) &= ~0xC00;
    *(s32 *) (p + 0x164) = *(u16 *) ((u8 *) func_02044580(*(u16 *) (*(u8 **) (p + 0x20) + 2)) + 6);
    func_020d54a8(0x175);
}
