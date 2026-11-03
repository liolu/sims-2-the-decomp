/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02011090(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02031f40(void *, M2C_UNK);             /* extern */
extern void *data_02139e8c;

void func_020399f8(void *arg0) {
    u16 temp_r1;
    u8 *temp_r0;
    volatile s32 pad[3];

    if (*(u8 *) ((u8 *) arg0 + 0x34) == 0) {
        func_02031f40(*(void **) ((u8 *) arg0 + 4), 0);
        temp_r1 = *(u16 *) ((u8 *) data_02139e8c + 2);
        if (temp_r1 & 0xF0) {
            func_02011090(*(void **) ((u8 *) arg0 + 4), 0x46, 1, 0, (temp_r1 & 0x80) != 0);
            return;
        }
        temp_r0 = *(u8 **) ((u8 *) arg0 + 4);
        if ((*(u16 *) (temp_r0 + 0x1FE) != 0x46) && (((u32) (*(u16 *) (temp_r0 + 0x1F8) << 0x1F) >> 0x1F) != 1)) {
            return;
        }
        func_02011090(temp_r0, 0x47, 1, 1, 0);
        return;
    }
    pad[0]                                       = 0;
    pad[1]                                       = 0;
    *(s32 *) (*(u8 **) ((u8 *) arg0 + 4) + 0x14) = 0;
}
