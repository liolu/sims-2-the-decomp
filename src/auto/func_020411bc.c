/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020158e0(s32, s32, s32);
s32 func_02015914(s32, s32, s32, s32);
s32 func_0204688c(s32, s32, s32);
void func_02048108(s32, s32, s32, s32, s32, s32);
s32 func_0206422c(s32);

extern u8 data_0211f16c;
extern u8 data_02139fa4;
extern u8 data_0213e434;
extern u8 data_0213e580;

void func_020411bc(s32 unused, u8 *arg1) {
    u8 fr[8];
    u32 r4;
    u32 v1;
    u32 v2;
    u32 flags;
    s32 r0;

    r4 = arg1[0];
    if (r4 == 3) {
        func_02048108(*(s32 *) &data_02139fa4, 0x21, 1, *(u16 *) (*(u8 **) ((u8 *) &data_0211f16c + r4 * 8)),
                      *(s32 *) ((u8 *) (*(u8 **) &data_0213e580) + 0xf8), arg1[1] | (arg1[2] << 8));
        return;
    }
    *(u16 *) fr       = r4;
    v1                = arg1[1];
    fr[2]             = v1;
    v2                = arg1[2];
    fr[7]             = (fr[7] & ~1) | 1;
    fr[7]             = fr[7] | 2;
    fr[3]             = v2;
    fr[6]             = 0x3f;
    *(u16 *) (fr + 4) = 0x58;
    fr[7]             = fr[7] & ~4;
    if (func_0206422c(*(s32 *) &data_0213e434) != 0) {
        func_02048108(*(s32 *) &data_02139fa4, 0xe, 1, *(s32 *) ((u8 *) (*(u8 **) &data_0213e580) + 0xf8),
                      *(volatile s32 *) fr, *(volatile s32 *) (fr + 4));
        return;
    }
    r0 = func_0204688c(0x20, 0, 4);
    if (r0 != 0) {
        r0 = func_02015914(r0, 0, 0, 1);
    }
    func_020158e0(r0, *(volatile s32 *) fr, *(volatile s32 *) (fr + 4));
}
