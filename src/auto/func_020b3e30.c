/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046384(u8 *, M2C_UNK, M2C_UNK);
M2C_UNK func_020b4078();
M2C_UNK func_020b55b0();
M2C_UNK func_020b5cf0();
M2C_UNK func_020bbde8(s32, M2C_UNK, s32 *, M2C_UNK, s32);
extern s32 *data_0213f91c;
extern s32 *data_0213f920;
extern u8 *data_0213f924;

void func_020b3e30(void) {
    u8 *src;
    s32 *dst;
    s32 outer;
    s32 acc;
    s32 cnt;
    s32 shift;
    u8 b;

    func_02046384(data_0213f924, 0, 0x4000);
    func_020b5cf0();
    func_020b55b0();
    func_020b4078();
    src   = data_0213f924;
    dst   = data_0213f91c;
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
    func_020bbde8(*data_0213f920 + 0x1A4, 1, data_0213f91c, 0x1000, 0);
}
