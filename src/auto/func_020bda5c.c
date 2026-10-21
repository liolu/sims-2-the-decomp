/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02044538(s16);                           /* extern */
M2C_UNK func_020bd7a0(void *, u16);                 /* extern */
M2C_UNK func_020bd84c(void *, u16);                 /* extern */

s32 func_020bda5c(void *arg0, s16 arg1) {
    u8 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_02044538(arg1);
    if (temp_r0 != NULL) {
        M2C_FIELD(arg0, s16 *, 0x18) = arg1;
        M2C_FIELD(arg0, u16 *, 0x14) = (u16) M2C_FIELD(temp_r0, u16 *, 0);
        func_020bd84c(arg0, M2C_FIELD(temp_r0, u16 *, 0));
        M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(temp_r0, u16 *, 2);
        func_020bd7a0(arg0, M2C_FIELD(temp_r0, u16 *, 2));
        M2C_FIELD(arg0, u8 *, 0x1A)  = (u8) M2C_FIELD(temp_r0, s32 *, 4);
        M2C_FIELD(arg0, s8 *, 0x1B)  = 1;
        M2C_FIELD(arg0, s8 *, 0x1E)  = 0;
        M2C_FIELD(arg0, s8 *, 0x1F)  = 0;
        M2C_FIELD(arg0, u32 *, 0x10) = (u32) (M2C_FIELD(temp_r0, u16 *, 0) * M2C_FIELD(temp_r0, u16 *, 2));
        temp_r0_2                    = M2C_FIELD(arg0, u8 *, 0x1A);
        if (temp_r0_2 == 3) {
            M2C_FIELD(arg0, u32 *, 0x10) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 1);
        } else if (temp_r0_2 == 2) {
            M2C_FIELD(arg0, u32 *, 0x10) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 2);
        }
        M2C_FIELD(arg0, void **, 0) = temp_r0;
        M2C_FIELD(arg0, void **, 0) = (void *) (M2C_FIELD(arg0, void **, 0) + 0xC);
        M2C_FIELD(arg0, s8 *, 0x20) = 1;
        return 1;
    }
    return 0;
}
