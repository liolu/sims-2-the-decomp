/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020d8934(void);
void func_020fd718(M2C_UNK);
M2C_UNK func_020fd9bc(M2C_UNK);
void func_02100d58(void *);
void func_02100dc4(void *);

extern M2C_UNK data_021423b8;

void func_020d5e80(void) {
    u8 sp0[32];

    do {

    } while (func_020fd9bc(0) != 0);
    func_020fd718(0);
    if (M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) & 8) {
        return;
    }
    if (M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) & 0x80) {
        M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) | 0x40);
        return;
    }
    M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) & ~0x40);
    func_02100dc4(sp0);
    func_020d8934();
    func_02100d58(sp0);
}
