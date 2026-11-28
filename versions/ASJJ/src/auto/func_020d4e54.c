/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d4478(M2C_UNK, u16, M2C_UNK);       /* extern */
void func_020d855c(s32);                            /* extern */
void func_020d898c(void);                           /* extern */
s32 func_020d8ae4(void);                            /* extern */
extern M2C_UNK data_021366fc;
extern u8 data_02142018;
extern s32 data_02142368;

s32 func_020d4e54(u32 arg0) {
    s32 t;

    t = ((volatile u8 *) &data_02142018)[0xB] & 0x20;
    if (t != 0) {
        return t;
    }
    if (arg0 >= 0x2A) {
        arg0 = 0;
    }
    if (((volatile u8 *) &data_02142018)[0] == 1) {
        ((volatile u8 *) &data_02142018)[0xB] = (u8) (((volatile u8 *) &data_02142018)[0xB] | 0x80);
        func_020d8ae4();
        t = ((volatile u8 *) &data_02142018)[0xB] & 0x80;
        if (t != 0) {
            if (((volatile u8 *) &data_02142018)[0xB] & 0x40) {
                t = *(volatile s32 *) ((u8 *) &data_02142368 + 0xC) & 0xC;
                if (t == 0) {
                    func_020d855c(t);
                }
            }
            ((volatile u8 *) &data_02142018)[0xB] = (u8) (((volatile u8 *) &data_02142018)[0xB] & ~0xC0);
        }
    }
    func_020d4478(1, *(u16 *) ((u8 *) &data_021366fc + arg0 * 4), 0);
    if (((volatile u8 *) &data_02142018)[0] != 1) {
        return (s32) &data_02142018;
    }
    ((volatile u8 *) &data_02142018)[0xB] = (u8) (((volatile u8 *) &data_02142018)[0xB] | 0x80);
    func_020d898c();
    ((volatile u8 *) &data_02142018)[0xB] = (u8) (((volatile u8 *) &data_02142018)[0xB] & ~0xC0);
    return (s32) &data_02142018;
}
