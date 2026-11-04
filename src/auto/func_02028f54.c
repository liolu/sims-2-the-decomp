/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018acc(M2C_UNK *);
M2C_UNK func_02018af8(s32, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK func_02039810(M2C_UNK *);
u32 func_0204ca70(M2C_UNK);

s32 func_02028f54(void *arg0, s32 arg1) {
    u8 fr[0x58];
    u16 temp_r4;
    temp_r4 = *(u16 *) (*(u8 **) ((u8 *) arg0 + 4) + 0xA);
    func_02039810((M2C_UNK *) fr);
    *(void **) (fr + 0x44) = *(void **) ((u8 *) arg0 + 4);
    fr[0x24]               = 1;
    if (temp_r4 == 0x95 || temp_r4 == 0x39 || temp_r4 == 0x3A || temp_r4 == 0x3C || temp_r4 == 0x40 || temp_r4 == 0x46 ||
        ((u32) temp_r4 >= 0x80U && (u32) temp_r4 <= 0x94U)) {
        *(s16 *) (fr + 0x4C) = 4;
        *(s16 *) (fr + 0x4E) = 5;
        *(s16 *) (fr + 0x54) = 6;
        fr[0x27]             = 1;
        fr[0x29]             = 1;
        *(s16 *) (fr + 0x38) = 0x1FE;
        *(s32 *) (fr + 0x2C) = 5;
        *(s32 *) (fr + 0x30) = 0;
        if ((u32) temp_r4 >= 0x80U) {
            if ((u32) temp_r4 <= 0x8FU) {
                *(s16 *) (fr + 0x3C) = 0xC2;
            }
        }
    } else if (((u32) temp_r4 >= 0xD1U && (u32) temp_r4 <= 0xE8U) || temp_r4 == 0x3F || temp_r4 == 0x44) {
        *(s16 *) (fr + 0x4C) = 8;
        *(s16 *) (fr + 0x4E) = 9;
        *(s16 *) (fr + 0x54) = 0xA;
        *(s16 *) (fr + 0x48) = 0xFC;
        *(s16 *) (fr + 0x40) = 0x10D;
        fr[0x27]             = 1;
        fr[0x57]             = 1;
        fr[0x2A]             = 2;
        *(s32 *) (fr + 0x2C) = 2;
        fr[0x29]             = 1;
        *(s16 *) (fr + 0x38) = 0x1FE;
        if ((u32) temp_r4 >= 0xDDU && (u32) temp_r4 <= 0xE8U) {
            *(s32 *) (fr + 0x30) = 2;
        }
        if ((u32) temp_r4 > 0xD1U && (u32) temp_r4 <= 0xE8U && ((temp_r4 - 0xD1) & 1)) {
            *(s32 *) (fr + 0x30) = 0;
        }
        if ((u32) temp_r4 >= 0xD1U && (u32) temp_r4 <= 0xE8U && func_0204ca70(0x64) < 0x14U) {
            fr[0x35]             = 1;
            *(s16 *) (fr + 0x36) = 0xD1;
            *(s16 *) (fr + 0x40) = 0x10C;
        }
    } else if (((u32) temp_r4 >= 0x6AU && (u32) temp_r4 <= 0x7FU) || temp_r4 == 0x3B || temp_r4 == 0x3D ||
               (u32) (u16) (temp_r4 + 0xFFBF) <= 2U) {
        *(s16 *) (fr + 0x4C) = 0x1B;
        *(s16 *) (fr + 0x4E) = 0x1C;
        *(s16 *) (fr + 0x54) = 0x1D;
        fr[0x24]             = 0;
        fr[0x2A]             = 4;
        fr[0x34]             = 4;
        *(s32 *) (fr + 0x2C) = 4;
        fr[0x27]             = 1;
        fr[0x28]             = 1;
        *(s16 *) (fr + 0x3C) = 0xC2;
        *(s16 *) (fr + 0x3E) = 2;
        *(s16 *) (fr + 0x40) = 0xC2;
        fr[0x29]             = 1;
        *(s16 *) (fr + 0x38) = 0x1FE;
        if ((u32) temp_r4 >= 0x74U && (u32) temp_r4 <= 0x7EU) {
            *(s32 *) (fr + 0x30) = 2;
        }
        if ((u32) temp_r4 >= 0x6AU && (u32) temp_r4 <= 0x7FU && ((temp_r4 - 0x6A) & 1)) {
            *(s32 *) (fr + 0x30) = 0;
        }
        if ((u32) temp_r4 >= 0x6AU) {
            if ((u32) temp_r4 <= 0x7FU) {
                fr[0x35]             = 1;
                *(s16 *) (fr + 0x36) = 0x6A;
            }
        }
    } else if (temp_r4 == 0xB4) {
        *(s16 *) (fr + 0x4E) = 0xD5;
        *(s16 *) (fr + 0x4C) = 4;
        *(s16 *) (fr + 0x54) = 6;
        *(s16 *) (fr + 0x3E) = 0xFA;
    } else if (temp_r4 == 0x38) {
        *(s16 *) (fr + 0x4C) = 0x21;
        *(s16 *) (fr + 0x4E) = 0x22;
        *(s16 *) (fr + 0x54) = 0x23;
        fr[0x34]             = 5;
        fr[0x27]             = 1;
        fr[0x28]             = 1;
        fr[0x24]             = 0;
        *(s32 *) (fr + 0x30) = 1;
        *(s32 *) (fr + 0x2C) = 5;
        fr[0x29]             = 1;
        *(s16 *) (fr + 0x38) = 0x1FE;
    }
    func_02018af8(arg1 + 0x128, 0xD, (M2C_UNK *) fr, 2);
    func_02018acc((M2C_UNK *) fr);
    return 0;
}
