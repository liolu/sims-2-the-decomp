/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e580;
extern u8 data_0213e5a0;

void func_02011090(void *o, s32 a, s32 b, s32 c, s32 d);

void func_0209cc68(void) {
    u8 *q;

    q = *(u8 **) ((u8 *) data_0213e580 + 0xf8);
    switch (*(s32 *) ((u8 *) &data_0213e5a0 + 0x34)) {
        case 0:
            if (((u8 *) &data_0213e5a0)[0x39] == 0) {
                return;
            }
            *(s32 *) ((u8 *) &data_0213e5a0 + 0x34) = 1;
            func_02011090(q, 0x32, 0, 1, 0);
            break;
        case 1:
            if (((u32) (*(u16 *) (q + 0x1f8) << 31)) >> 31 != 1) {
                return;
            }
            *(s32 *) ((u8 *) &data_0213e5a0 + 0x34) = 2;
            ((u8 *) &data_0213e5a0)[0x38]           = 0;
            func_02011090(q, 0x33, 0, 1, 0);
            break;
        case 2:
            if (((u8 *) &data_0213e5a0)[0x39] != 0) {
                ((u8 *) &data_0213e5a0)[0x38] = 1;
            }
            if (((u32) (*(u16 *) (q + 0x1f8) << 31)) >> 31 != 1) {
                return;
            }
            if (((u8 *) &data_0213e5a0)[0x38] != 0) {
                ((u8 *) &data_0213e5a0)[0x38] = 0;
                func_02011090(q, 0x33, 0, 1, 0);
            } else {
                *(s32 *) ((u8 *) &data_0213e5a0 + 0x34) = 5;
                func_02011090(q, 0x36, 0, 1, 0);
            }
            break;
        case 5:
            if (((u8 *) &data_0213e5a0)[0x39] != 0) {
                *(s32 *) ((u8 *) &data_0213e5a0 + 0x34) = 2;
                func_02011090(q, 0x33, 0, 1, 0);
                break;
            }
            if (((u32) (*(u16 *) (q + 0x1f8) << 31)) >> 31 != 1) {
                return;
            }
            *(s32 *) ((u8 *) &data_0213e5a0 + 0x34) = 0;
            func_02011090(q, 0x31, 1, 1, 0);
            break;
    }
}
