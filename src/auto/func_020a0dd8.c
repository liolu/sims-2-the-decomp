/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046384(u8 *, M2C_UNK, M2C_UNK);
M2C_UNK func_020a0ffc();
M2C_UNK func_020a1b3c();
M2C_UNK func_020a1c24();
M2C_UNK func_020bbde8(s32, M2C_UNK, s32 *, M2C_UNK, s32);
extern s32 *data_0213e6e0;
extern s32 *data_0213e6d8;
extern u8 *data_0213e6dc;

void func_020a0dd8(void) {
    u8 *src;
    s32 *dst;
    s32 outer;
    s32 acc;
    s32 cnt;
    s32 shift;
    u8 b;

    func_02046384(data_0213e6dc, 0, 0x4000);
    func_020a1c24();
    func_020a1b3c();
    func_020a0ffc();
    src   = data_0213e6dc;
    dst   = data_0213e6e0;
    outer = 0;
    do {
        acc   = 0;
        cnt   = 0;
        shift = 0;
        do {
            b = *src;
            src += 1;
            cnt += 1;
            acc |= b << shift;
            shift += 2;
        } while (cnt < 0x10);
        outer += 1;
        *dst = acc;
        dst += 1;
    } while (outer < 0x400);
    func_020bbde8(*data_0213e6d8 + 0x1A4, 1, data_0213e6e0, 0x1000, 0);
}
