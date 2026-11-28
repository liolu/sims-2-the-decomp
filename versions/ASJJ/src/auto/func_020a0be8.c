/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046398(u8 *, M2C_UNK, M2C_UNK);
M2C_UNK func_020a0e0c();
M2C_UNK func_020a194c();
M2C_UNK func_020a1a34();
M2C_UNK func_020bb91c(s32, M2C_UNK, s32 *, M2C_UNK, s32);
extern s32 *data_0213e208;
extern s32 *data_0213e200;
extern u8 *data_0213e204;

void func_020a0be8(void) {
    u8 *src;
    s32 *dst;
    s32 outer;
    s32 acc;
    s32 cnt;
    s32 shift;
    u8 b;

    func_02046398(data_0213e204, 0, 0x4000);
    func_020a1a34();
    func_020a194c();
    func_020a0e0c();
    src   = data_0213e204;
    dst   = data_0213e208;
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
    func_020bb91c(*data_0213e200 + 0x1A4, 1, data_0213e208, 0x1000, 0);
}
