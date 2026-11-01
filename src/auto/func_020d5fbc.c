/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020d8a70(void);
void func_020fd854(M2C_UNK);
M2C_UNK func_020fdaf8(M2C_UNK);
void func_02100e94(void *);
void func_02100f00(void *);

extern M2C_UNK data_021424f8;

void func_020d5fbc(void) {
    u8 sp0[32];

    do {

    } while (func_020fdaf8(0) != 0);
    func_020fd854(0);
    if (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) & 8) {
        return;
    }
    if (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) & 0x80) {
        M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) | 0x40);
        return;
    }
    M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) & ~0x40);
    func_02100f00(sp0);
    func_020d8a70();
    func_02100e94(sp0);
}
