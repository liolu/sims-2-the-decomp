/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020daea8();                                /* extern */
u32 func_020daf74(s32, s32, M2C_UNK);               /* extern */
s32 func_020daf90(s32, s32, s32);                   /* extern */

s32 func_020dc854(void *arg0) {
    u32 temp_r1;
    u32 temp_r5;

    temp_r5 = func_020daf74(func_020daf90((M2C_FIELD(arg0, s32 *, 0x258) - M2C_FIELD(arg0, s32 *, 0x26C)) * 0x3E8,
                                          M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x14)),
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F0), s32 *, 0x6C), 0x10);
    temp_r1 = func_020daea8() - (M2C_FIELD(arg0, s32 *, 0x268) + M2C_FIELD(arg0, s32 *, 0x328));
    if ((temp_r1 >= temp_r5) && ((u32) (temp_r1 - temp_r5) > (u32) M2C_FIELD(arg0, u32 *, 0x270))) {
        return 1;
    }
    return 0;
}
