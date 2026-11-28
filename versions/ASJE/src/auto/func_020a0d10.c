/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204630c(u8 *, M2C_UNK, M2C_UNK);
M2C_UNK func_020a0f34();
M2C_UNK func_020a1a74();
M2C_UNK func_020a1b5c();
M2C_UNK func_020bbd20(s32, M2C_UNK, s32 *, M2C_UNK, s32);
extern s32 *data_0213e5a0;
extern s32 *data_0213e598;
extern u8 *data_0213e59c;

void func_020a0d10(void) {
    u8 *src;
    s32 *dst;
    s32 outer;
    s32 acc;
    s32 cnt;
    s32 shift;
    u8 b;

    func_0204630c(data_0213e59c, 0, 0x4000);
    func_020a1b5c();
    func_020a1a74();
    func_020a0f34();
    src   = data_0213e59c;
    dst   = data_0213e5a0;
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
    func_020bbd20(*data_0213e598 + 0x1A4, 1, data_0213e5a0, 0x1000, 0);
}
