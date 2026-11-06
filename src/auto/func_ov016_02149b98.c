/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020d59bc(s32 a);
void func_02083498(u8 *a);
void func_02048108(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020d544c(s32 a);
extern u8 *data_0213d95c;
extern u8 *data_0213e434;
extern s32 data_02139fa4;
extern s16 data_ov016_0214ab6c[];
extern s16 data_ov016_0214ab64[];

void func_ov016_02149b98(u8 *arg0) {
    u8 i;
    s32 x;
    s32 y;
    u8 *o;

    if (((u32) (data_0213d95c[0] << 27)) >> 31) {
        i                     = 0;
        arg0[0x24]            = 0;
        *(s8 *) (arg0 + 0x26) = -1;
        x                     = *(u16 *) (data_0213d95c + 0x2a);
        y                     = *(u16 *) (data_0213d95c + 0x2c);
        do {
            if (x <= data_ov016_0214ab64[i] && x >= data_ov016_0214ab64[i] - 0x19 && y >= data_ov016_0214ab6c[i] &&
                y <= data_ov016_0214ab6c[i] + 0x19) {
                func_020d59bc(0x159);
                arg0[0x26] = i;
                break;
            }
            i = i + 1;
        } while (i < 4);
    }
    if (((u32) (data_0213d95c[0] << 29)) >> 31) {
        arg0[0x24] = arg0[0x24] + 1;
        if (arg0[0x24] != 0 && (s8) arg0[0x26] != -1) {
            o = *(u8 **) (arg0 + (s8) arg0[0x26] * 4 + 0x28);
            *(u32 *) (o + 4) &= ~1;
            o = *(u8 **) (arg0 + (s8) arg0[0x26] * 4 + 0x38);
            *(u32 *) (o + 4) |= 1;
            switch ((s8) arg0[0x26]) {
                case 0:
                    func_02083498(data_0213e434 + 0x18);
                    func_02048108(data_02139fa4, 9, 0, 0, 0, 0);
                    func_02048108(data_02139fa4, 0xa, 1, 0, 0, 0);
                    return;
                case 1:
                    func_02048108(data_02139fa4, 0x2e, 0, 0, 0, 0);
                    func_02048108(data_02139fa4, 0x19, 1, 0, 0, 0);
                    return;
                case 2:
                    func_02048108(data_02139fa4, 0x2e, 0, 0, 0, 0);
                    func_02048108(data_02139fa4, 0x1c, 1, 0, 0, 0);
                    return;
                case 3:
                    func_020d544c(0xc);
                    func_02048108(data_02139fa4, 0x2e, 0, 0, 0, 0);
                    func_02048108(data_02139fa4, 0x1b, 1, 0, 0, 0);
                    return;
                case 4:
                    func_02048108(data_02139fa4, 0x2e, 0, 0, 0, 0);
                    func_02048108(data_02139fa4, 0x1e, 1, 0, 0, 0);
                    return;
            }
        }
    }
    if (((u32) (data_0213d95c[0] << 26)) >> 31) {
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
