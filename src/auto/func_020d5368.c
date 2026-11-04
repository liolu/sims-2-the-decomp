/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d498c(M2C_UNK, u16, M2C_UNK);       /* extern */
void func_020d8a70(s32);                            /* extern */
void func_020d8ea0(void);                           /* extern */
s32 func_020d8ff8(void);                            /* extern */
extern M2C_UNK data_02136c10;
extern u8 data_021424f8;
extern s32 data_02142848;

s32 func_020d5368(u32 arg0) {
    s32 t;

    t = ((volatile u8 *) &data_021424f8)[0xB] & 0x20;
    if (t != 0) {
        return t;
    }
    if (arg0 >= 0x2A) {
        arg0 = 0;
    }
    if (((volatile u8 *) &data_021424f8)[0] == 1) {
        ((volatile u8 *) &data_021424f8)[0xB] = (u8) (((volatile u8 *) &data_021424f8)[0xB] | 0x80);
        func_020d8ff8();
        t = ((volatile u8 *) &data_021424f8)[0xB] & 0x80;
        if (t != 0) {
            if (((volatile u8 *) &data_021424f8)[0xB] & 0x40) {
                t = *(volatile s32 *) ((u8 *) &data_02142848 + 0xC) & 0xC;
                if (t == 0) {
                    func_020d8a70(t);
                }
            }
            ((volatile u8 *) &data_021424f8)[0xB] = (u8) (((volatile u8 *) &data_021424f8)[0xB] & ~0xC0);
        }
    }
    func_020d498c(1, *(u16 *) ((u8 *) &data_02136c10 + arg0 * 4), 0);
    if (((volatile u8 *) &data_021424f8)[0] != 1) {
        return (s32) &data_021424f8;
    }
    ((volatile u8 *) &data_021424f8)[0xB] = (u8) (((volatile u8 *) &data_021424f8)[0xB] | 0x80);
    func_020d8ea0();
    ((volatile u8 *) &data_021424f8)[0xB] = (u8) (((volatile u8 *) &data_021424f8)[0xB] & ~0xC0);
    return (s32) &data_021424f8;
}
