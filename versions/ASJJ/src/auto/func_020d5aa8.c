/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020d855c(void);
void func_020fd340(M2C_UNK);
M2C_UNK func_020fd5e4(M2C_UNK);
void func_02100980(void *);
void func_021009ec(void *);

extern M2C_UNK data_02142018;

void func_020d5aa8(void) {
    u8 sp0[32];

    do {

    } while (func_020fd5e4(0) != 0);
    func_020fd340(0);
    if (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & 8) {
        return;
    }
    if (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & 0x80) {
        M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) | 0x40);
        return;
    }
    M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & ~0x40);
    func_021009ec(sp0);
    func_020d855c();
    func_02100980(sp0);
}
