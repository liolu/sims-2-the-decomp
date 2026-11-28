/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e2f4;

void func_020416a8(u32 param_1, s16 *param_2) {
    s32 base = *(s32 *) &data_0213e2f4;
    s32 *obj;
    s32 val;
    s16 delta;

    delta = *param_2;
    *(s32 *) (base + 0x2f60) += delta;
    val = *(s32 *) (base + 0x2f60);
    obj = (s32 *) (base + 0x2f60);

    if (0xf423f < val) {
        *obj = 0xf423f;
    } else if (val < 0) {
        *obj = 0;
    }

    if (delta > 0) {
        *(u8 *) (obj + 3) = 1;
        obj[1] += delta;
        if (obj[1] <= 0xf423f && obj[1] >= 0) {
            return;
        }
        obj[1] = 0xf423f;
        return;
    }

    obj[2] -= delta;
    if (obj[2] <= 0xf423f && obj[2] >= 0) {
        return;
    }
    obj[2] = 0xf423f;
}
