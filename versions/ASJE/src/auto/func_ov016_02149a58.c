/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020d5880(s32 a);
void func_02083420(u8 *a);
void func_02048090(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020d5310(s32 a);
extern u8 *data_0213d81c;
extern u8 *data_0213e2f4;
extern s32 data_02139e64;
extern s16 data_ov016_0214aa2c[];
extern s16 data_ov016_0214aa24[];

void func_ov016_02149a58(u8 *arg0) {
    u8 i;
    s32 x;
    s32 y;
    u8 *o;

    if (((u32) (data_0213d81c[0] << 27)) >> 31) {
        i                     = 0;
        arg0[0x24]            = 0;
        *(s8 *) (arg0 + 0x26) = -1;
        x                     = *(u16 *) (data_0213d81c + 0x2a);
        y                     = *(u16 *) (data_0213d81c + 0x2c);
        do {
            if (x <= data_ov016_0214aa24[i] && x >= data_ov016_0214aa24[i] - 0x19 && y >= data_ov016_0214aa2c[i] &&
                y <= data_ov016_0214aa2c[i] + 0x19) {
                func_020d5880(0x159);
                arg0[0x26] = i;
                break;
            }
            i = i + 1;
        } while (i < 4);
    }
    if (((u32) (data_0213d81c[0] << 29)) >> 31) {
        arg0[0x24] = arg0[0x24] + 1;
        if (arg0[0x24] != 0 && (s8) arg0[0x26] != -1) {
            o = *(u8 **) (arg0 + (s8) arg0[0x26] * 4 + 0x28);
            *(u32 *) (o + 4) &= ~1;
            o = *(u8 **) (arg0 + (s8) arg0[0x26] * 4 + 0x38);
            *(u32 *) (o + 4) |= 1;
            switch ((s8) arg0[0x26]) {
                case 0:
                    func_02083420(data_0213e2f4 + 0x18);
                    func_02048090(data_02139e64, 9, 0, 0, 0, 0);
                    func_02048090(data_02139e64, 0xa, 1, 0, 0, 0);
                    return;
                case 1:
                    func_02048090(data_02139e64, 0x2e, 0, 0, 0, 0);
                    func_02048090(data_02139e64, 0x19, 1, 0, 0, 0);
                    return;
                case 2:
                    func_02048090(data_02139e64, 0x2e, 0, 0, 0, 0);
                    func_02048090(data_02139e64, 0x1c, 1, 0, 0, 0);
                    return;
                case 3:
                    func_020d5310(0xc);
                    func_02048090(data_02139e64, 0x2e, 0, 0, 0, 0);
                    func_02048090(data_02139e64, 0x1b, 1, 0, 0, 0);
                    return;
                case 4:
                    func_02048090(data_02139e64, 0x2e, 0, 0, 0, 0);
                    func_02048090(data_02139e64, 0x1e, 1, 0, 0, 0);
                    return;
            }
        }
    }
    if (((u32) (data_0213d81c[0] << 26)) >> 31) {
        i = 0;
        do {
            o = *(u8 **) (arg0 + i * 4 + 0x28);
            *(u32 *) (o + 4) |= 1;
            o = *(u8 **) (arg0 + i * 4 + 0x38);
            *(u32 *) (o + 4) &= ~1;
            i = i + 1;
        } while (i < 4);
    }
}
