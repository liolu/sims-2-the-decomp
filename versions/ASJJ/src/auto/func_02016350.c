/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204ff28(u16, u16, u8);
extern u8 data_02138ee0[];
extern s32 data_027e0000;

void func_02016350(u8 *arg0) {
    s32 var_r0;
    s32 temp_lr;
    u8 *ip;
    u8 *r2;
    u32 flags;

    flags = arg0[0x49];
    if (flags & 3) {
        if (*(u16 *) (arg0 + 0x46) == 0xFFFF) {
            return;
        }
        temp_lr    = arg0[0x4A];
        var_r0     = (flags & 1) ? 0 : arg0[0x1A];
        temp_lr    = temp_lr * 0x38;
        ip         = *(u8 **) (data_02138ee0 + data_027e0000 * 4) + 0x28 + temp_lr;
        ip[var_r0] = ip[var_r0] - 1;
        r2         = *(u8 **) (data_02138ee0 + data_027e0000 * 4) + temp_lr;
        if (r2[var_r0 + 0x28] == 0) {
            *(u16 *) (r2 + var_r0 * 2 + 8) = 0xFFFF;
            func_0204ff28(*(u16 *) (arg0 + 0x46), *(u16 *) (arg0 + 0x44),
                          (u8) (((u32) (*(s32 *) (arg0 + 0x10)) << 0x12) >> 0x1F));
        }
        *(u16 *) (arg0 + 0x46) = 0xFFFF;
        *(u16 *) (arg0 + 0x44) = 0;
        return;
    }
    if (*(u16 *) (arg0 + 0x46) == 0xFFFF) {
        return;
    }
    func_0204ff28(*(u16 *) (arg0 + 0x46), *(u16 *) (arg0 + 0x44), (u8) (((u32) (*(s32 *) (arg0 + 0x10)) << 0x12) >> 0x1F));
    *(u16 *) (arg0 + 0x46) = 0xFFFF;
    *(u16 *) (arg0 + 0x44) = 0;
}
