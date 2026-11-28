/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;
extern u8 data_0213add0;
extern u8 data_0213c0f9;

s32 func_02049428(s32 arg0, s32 *arg1) {
    s32 idx;
    u8 *base;

    idx = data_027e0000 * 0x132C;
    if (*(&data_0213c0f9 + idx) > 0x7F) {
        return -1;
    }
    base                           = *(u8 **) (&data_0213add0 + idx);
    *(s32 *) (base + arg0 * 8)     = arg1[0];
    *(s32 *) (base + arg0 * 8 + 4) = arg1[1];
    base                           = *(u8 **) (&data_0213add0 + data_027e0000 * 0x132C) + 0x400;
    *(s32 *) (base + arg0 * 8)     = arg1[0];
    *(s32 *) (base + arg0 * 8 + 4) = arg1[1];
    *(&data_0213c0f9 + data_027e0000 * 0x132C) += 1;
    return 0;
}
