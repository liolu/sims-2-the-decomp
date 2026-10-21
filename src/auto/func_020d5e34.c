/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d8828(M2C_UNK);
void func_020d8a70(void);

extern M2C_UNK data_021424f8;
extern M2C_UNK data_02142848;

void func_020d5e34(s32 arg0) {
    M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) | 0x80);
    func_020d8828(arg0);
    if (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) & 0x80) {
        if ((M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) & 0x40) &&
            !(M2C_FIELD(&data_02142848, volatile s32 *, 0xC) & 0xC)) {
            func_020d8a70();
        }
        M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) & ~0xC0);
    }
    M2C_FIELD(&data_021424f8, volatile s8 *, 9) = (s8) arg0;
}
