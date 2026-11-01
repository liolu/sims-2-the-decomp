/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02046acc(void *, M2C_UNK);
M2C_UNK func_02046b24(void *, M2C_UNK, M2C_UNK, s32, s32);
M2C_UNK func_02089dc0(void *);
extern M2C_UNK data_02131998;
extern M2C_UNK data_02134fa0;
extern M2C_UNK data_02134fc0;
void *func_020ad8c4(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    func_02046b24(arg0, 0x13, arg1, arg2, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02131998;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02134fa0;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02134fc0;
    M2C_FIELD(arg0, u8 *, 0x28)       = 0xFF;
    func_02089dc0((u8 *) arg0 + 0x2C);
    func_02046acc((u8 *) arg0 + 0xF4, 0x20);
    M2C_FIELD(arg0, s32 *, 0xFC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = arg2;
    return arg0;
}
