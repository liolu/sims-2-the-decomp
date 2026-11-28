/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_0213e598;

void func_020a1a74(void) {
    volatile s32 sp[6];
    s32 old4;
    s32 t;
    u8 *p;
    enum {
        ZERO = 0
    } z;

    z     = 0;
    p     = (u8 *) data_0213e598;
    old4  = *(s32 *) (p + 4);
    sp[0] = z;
    sp[3] = z;
    if (*(s32 *) (p + 0x10) < z) {
        *(s32 *) (p + 4) = 1;
    } else {
        sp[1] = 0;
        sp[4] = 0;
        if (*(s32 *) (p + 0x10) > z || (sp[2] = 0, sp[5] = 0, *(s32 *) (p + 0x14) != z)) {
            *(s32 *) (p + 4) = 2;
        } else {
            *(s32 *) (p + 4) = 0;
        }
    }
    *(s32 *) ((u8 *) data_0213e598 + 0x18) = *(s32 *) ((u8 *) data_0213e598 + 0x18) + 1;
    *(s32 *) ((u8 *) data_0213e598 + 0x1C) = *(s32 *) ((u8 *) data_0213e598 + 0x1C) + 1;
    if (*(s32 *) ((u8 *) data_0213e598 + 4) != old4) {
        *(s32 *) ((u8 *) data_0213e598 + 0x1C) = 0;
    }
    if ((*(s32 *) ((u8 *) data_0213e598 + 4) != 0) && !(*(s32 *) ((u8 *) data_0213e598 + 0x18) & 0x1F)) {
        *(s32 *) ((u8 *) data_0213e598 + 0x20) = *(s32 *) ((u8 *) data_0213e598 + 0x20) + 1;
    }
    t = *(s32 *) ((u8 *) data_0213e598 + 0x20);
    if (t > *(s32 *) ((u8 *) data_0213e598 + 0x24)) {
        *(s32 *) ((u8 *) data_0213e598 + 0x24) = t;
    }
}
