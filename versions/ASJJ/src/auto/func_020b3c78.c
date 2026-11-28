/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046398(u8 *, M2C_UNK, M2C_UNK);
M2C_UNK func_020b3ec0();
M2C_UNK func_020b50e4();
M2C_UNK func_020b5824();
M2C_UNK func_020bb91c(s32, M2C_UNK, s32 *, M2C_UNK, s32);
extern s32 *data_0213f444;
extern s32 *data_0213f448;
extern u8 *data_0213f44c;

void func_020b3c78(void) {
    u8 *src;
    s32 *dst;
    s32 outer;
    s32 acc;
    s32 cnt;
    s32 shift;
    u8 b;

    func_02046398(data_0213f44c, 0, 0x4000);
    func_020b5824();
    func_020b50e4();
    func_020b3ec0();
    src   = data_0213f44c;
    dst   = data_0213f444;
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
    func_020bb91c(*data_0213f448 + 0x1A4, 1, data_0213f444, 0x1000, 0);
}
