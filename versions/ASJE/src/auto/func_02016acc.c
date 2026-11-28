/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201691c(void *);                            /* extern */
void *func_020444f4(u16);                           /* extern */

void *func_02016acc(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    u16 temp_r2;
    u8 temp_r1;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;

    if (!(M2C_FIELD(arg0, s32 *, 4) & 0x10)) {
        return arg0;
    }
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x18);
    if (temp_r1 == 0) {
        return arg0;
    }
    M2C_FIELD(arg0, u8 *, 0x18) = (u8) (temp_r1 - 1);
    if (M2C_FIELD(arg0, u8 *, 0x18) != 0) {
        return arg0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x24) == 0xFFFF) {
        M2C_FIELD(arg0, u8 *, 0x1B) = (u8) (M2C_FIELD(arg0, u8 *, 0x1B) + 1);
        temp_r0_5                   = func_020444f4(M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u16 *, 2));
        if ((s32) M2C_FIELD(arg0, u8 *, 0x1B) >= (s32) M2C_FIELD(temp_r0_5, u16 *, 6)) {
            M2C_FIELD(arg0, u8 *, 0x1B) = 0U;
            M2C_FIELD(arg0, s32 *, 4)   = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x400000);
        }
        temp_r2 = M2C_FIELD(temp_r0_5, u16 *, 6);
        if (((temp_r2 - 1) == M2C_FIELD(arg0, u8 *, 0x1B)) || (temp_r2 == 1)) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x400000);
        }
        M2C_FIELD(arg0, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 0x19);
        temp_r0_6                   = arg0 + 0x18;
        if (M2C_FIELD(temp_r0_6, u8 *, 2) == M2C_FIELD(temp_r0_6, u8 *, 3)) {
            temp_r0_4 = M2C_FIELD(arg0, s32 *, 4) & 0x80;
            if (temp_r0_4 == 0) {
                return (void *) temp_r0_4;
            }
        }
        temp_r0_3                 = M2C_FIELD(arg0, s32 *, 4) | 0x80;
        M2C_FIELD(arg0, s32 *, 4) = temp_r0_3;
        return (void *) temp_r0_3;
    }
    if (M2C_FIELD(arg0, s32 *, 4) & 0x400000) {
        return arg0;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    func_0201691c(arg0);
    temp_r0_7 = arg0 + 0x18;
    if (M2C_FIELD(temp_r0_7, u8 *, 2) == M2C_FIELD(temp_r0_7, u8 *, 3)) {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 4) & 0x80;
        if (temp_r0_2 == 0) {
            return (void *) temp_r0_2;
        }
    }
    temp_r0                   = M2C_FIELD(arg0, s32 *, 4) | 0x80;
    M2C_FIELD(arg0, s32 *, 4) = temp_r0;
    return (void *) temp_r0;
}
