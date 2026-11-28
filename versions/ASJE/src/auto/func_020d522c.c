/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d4850(M2C_UNK, u16, M2C_UNK);       /* extern */
void func_020d8934(s32);                            /* extern */
void func_020d8d64(void);                           /* extern */
s32 func_020d8ebc(void);                            /* extern */
extern M2C_UNK data_02136ad0;
extern u8 data_021423b8;
extern s32 data_02142708;

s32 func_020d522c(u32 arg0) {
    s32 t;

    t = ((volatile u8 *) &data_021423b8)[0xB] & 0x20;
    if (t != 0) {
        return t;
    }
    if (arg0 >= 0x2A) {
        arg0 = 0;
    }
    if (((volatile u8 *) &data_021423b8)[0] == 1) {
        ((volatile u8 *) &data_021423b8)[0xB] = (u8) (((volatile u8 *) &data_021423b8)[0xB] | 0x80);
        func_020d8ebc();
        t = ((volatile u8 *) &data_021423b8)[0xB] & 0x80;
        if (t != 0) {
            if (((volatile u8 *) &data_021423b8)[0xB] & 0x40) {
                t = *(volatile s32 *) ((u8 *) &data_02142708 + 0xC) & 0xC;
                if (t == 0) {
                    func_020d8934(t);
                }
            }
            ((volatile u8 *) &data_021423b8)[0xB] = (u8) (((volatile u8 *) &data_021423b8)[0xB] & ~0xC0);
        }
    }
    func_020d4850(1, *(u16 *) ((u8 *) &data_02136ad0 + arg0 * 4), 0);
    if (((volatile u8 *) &data_021423b8)[0] != 1) {
        return (s32) &data_021423b8;
    }
    ((volatile u8 *) &data_021423b8)[0xB] = (u8) (((volatile u8 *) &data_021423b8)[0xB] | 0x80);
    func_020d8d64();
    ((volatile u8 *) &data_021423b8)[0xB] = (u8) (((volatile u8 *) &data_021423b8)[0xB] & ~0xC0);
    return (s32) &data_021423b8;
}
