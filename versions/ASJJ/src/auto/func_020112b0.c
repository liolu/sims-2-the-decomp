/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 _ZN12ValueManager7GetByIdEl(void *, M2C_UNK);
s32 func_0200d014(M2C_UNK *, s32, s32);
extern M2C_UNK data_02139a94;
extern void *data_0213e0a8;

void func_020112b0(u8 *arg0) {
    s32 v;
    s32 t;

    if ((arg0[0x20D] != 0) && (arg0[0x20F] != 0)) {
        v = arg0[0x210];
        if (v >= 0x1F) {
            return;
        }
        v = v + 3;
        if (v > 0x1F) {
            v = 0x1F;
        }
        arg0[0x210] = v;
        return;
    }
    if (func_0200d014(&data_02139a94, M2C_FIELD(data_0213e0a8, s32 *, 0xF8) + 0x78,
                      (t = _ZN12ValueManager7GetByIdEl(arg0 + 0x24, 0), v = arg0[0x210], t)) != 0) {
        if (v == 0) {
            return;
        }
        v = v - 3;
        if (v < 0) {
            v = 0;
        }
        arg0[0x210] = v;
        return;
    }
    if (v >= 0x1F) {
        return;
    }
    v = v + 3;
    if (v > 0x1F) {
        v = 0x1F;
    }
    arg0[0x210] = v;
}
