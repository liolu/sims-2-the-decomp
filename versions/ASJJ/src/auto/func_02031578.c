/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02011090(void *, u16, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0204ca7c(s32);                             /* extern */
extern u8 data_0211df48;

void func_02031578(u8 *arg0) {
    u8 *o;
    s32 t;

    if (arg0[0x28] & 1) {
        t          = arg0[0x28] + 1;
        arg0[0x28] = (u8) (t % 4);
        o          = *(u8 **) (arg0 + 4);
        if (((u32) (*(u16 *) (o + 0x1F8) << 31) >> 31) != 1) {
            return;
        }
        func_02011090(o, *(u16 *) ((u8 *) &data_0211df48 + arg0[0x28] * 2), 0, 1, 0);
        return;
    }
    if (func_0204ca7c(0x2710) != 0) {
        return;
    }
    t          = arg0[0x28] + 1;
    arg0[0x28] = (u8) (t % 4);
    func_02011090(*(u8 **) (arg0 + 4), *(u16 *) ((u8 *) &data_0211df48 + arg0[0x28] * 2), 0, 1, 0);
}
