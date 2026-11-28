/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204630c(u8 *, M2C_UNK, M2C_UNK);
M2C_UNK func_020b3fb0();
M2C_UNK func_020b54e8();
M2C_UNK func_020b5c28();
M2C_UNK func_020bbd20(s32, M2C_UNK, s32 *, M2C_UNK, s32);
extern s32 *data_0213f7dc;
extern s32 *data_0213f7e0;
extern u8 *data_0213f7e4;

void func_020b3d68(void) {
    u8 *src;
    s32 *dst;
    s32 outer;
    s32 acc;
    s32 cnt;
    s32 shift;
    u8 b;

    func_0204630c(data_0213f7e4, 0, 0x4000);
    func_020b5c28();
    func_020b54e8();
    func_020b3fb0();
    src   = data_0213f7e4;
    dst   = data_0213f7dc;
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
    func_020bbd20(*data_0213f7e0 + 0x1A4, 1, data_0213f7dc, 0x1000, 0);
}
