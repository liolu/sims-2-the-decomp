/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d8ae4(void);                         /* extern */
M2C_UNK func_020d855c(void);                         /* extern */
M2C_UNK func_020d898c(void);                         /* extern */
M2C_UNK func_020d4478(s32, u32, u32);                /* extern */
extern volatile u8 data_02142018;
extern u8 data_02142368;
extern u8 data_021366fc;

void func_020d4f38(u32 arg0) {
    u32 r4;

    if (((volatile u8 *) &data_02142018)[0xB] & 0x20) {
        return;
    }
    r4 = arg0;
    if (r4 >= 0x2A) {
        r4 = 0;
    }
    if (r4 == ((volatile u8 *) &data_02142018)[0xA]) {
        if (!(((volatile u8 *) &data_02142018)[0xB] & 2)) {
            return;
        }
    }
    if (((volatile u8 *) &data_02142018)[0] == 1) {
        ((volatile u8 *) &data_02142018)[0xB] |= 0x80;
        func_020d8ae4();
        if (((volatile u8 *) &data_02142018)[0xB] & 0x80) {
            if (((volatile u8 *) &data_02142018)[0xB] & 0x40) {
                if (!(*(u32 *) (&data_02142368 + 0xC) & 0xC)) {
                    func_020d855c();
                }
            }
            ((volatile u8 *) &data_02142018)[0xB] = (u8) (((volatile u8 *) &data_02142018)[0xB] & ~0xC0);
        }
    }
    func_020d4478(0, *(u16 *) (&data_021366fc + r4 * 4), *(u8 *) (&data_021366fc + 2 + r4 * 4));
    if (((volatile u8 *) &data_02142018)[0] == 1) {
        ((volatile u8 *) &data_02142018)[0xB] |= 0x80;
        func_020d898c();
        ((volatile u8 *) &data_02142018)[0xB] = (u8) (((volatile u8 *) &data_02142018)[0xB] & ~0xC0);
    }
    ((volatile u8 *) &data_02142018)[0xB] = (u8) (((volatile u8 *) &data_02142018)[0xB] & ~2);
    if (!(((volatile u8 *) &data_02142018)[0xB] & 1)) {
        ((volatile u8 *) &data_02142018)[0xA] = r4;
    }
}
