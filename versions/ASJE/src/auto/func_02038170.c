/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02011090(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0201866c(void *);                      /* extern */
M2C_UNK func_02018acc(void *);                      /* extern */
M2C_UNK func_020467cc(void *);                      /* extern */
s32 func_020832d0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020bb444();                            /* extern */
extern u8 data_021314c8;
extern u8 data_02139e74;
extern s32 data_0213e42c;

void *func_02038170(void *arg0) {
    s32 temp_r2;
    u8 *temp_r0;
    u8 *temp_r2_2;

    *(u8 **) arg0 = &data_021314c8;
    temp_r2       = *(s32 *) ((u8 *) arg0 + 0x2C);
    if ((temp_r2 != 5) && (*(s32 *) (&data_02139e74 + 0x264) == 5)) {
        *(s32 *) (&data_02139e74 + 0x268) = *(s32 *) (&data_02139e74 + 0x264);
        *(s32 *) (&data_02139e74 + 0x264) = temp_r2;
        func_020bb444();
    }
    temp_r0                    = *(u8 **) ((u32) data_0213e42c + (u32) func_020832d0(data_0213e42c, 3) * 4);
    *(s8 *) (temp_r0 + 0x1D4)  = 0;
    *(s32 *) (temp_r0 + 0x1D0) = 0;
    func_02011090(*(void **) ((u8 *) arg0 + 4), 0, 0, 1, 0);
    temp_r2_2 = *(u8 **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C);
    if (temp_r2_2 != NULL) {
        *(s32 *) (temp_r2_2 + 4)                     = *(s32 *) (temp_r2_2 + 4) | 0x82;
        *(u8 **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C) = NULL;
    }
    func_02018acc((u8 *) arg0 + 0x18);
    func_0201866c(arg0);
    func_020467cc(arg0);
    return arg0;
}
