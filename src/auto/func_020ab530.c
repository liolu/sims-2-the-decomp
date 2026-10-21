/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02046b24(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02134f10;

void *func_020ab530(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02046b24(arg0, 0x12, arg1, arg2, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02134f10;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s32 *, 0x8C0)  = 0;
    M2C_FIELD(arg0, s32 *, 0x94C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x950)  = 0;
    M2C_FIELD(arg0, s32 *, 0x954)  = 0;
    M2C_FIELD(arg0, s32 *, 0x958)  = 0;
    M2C_FIELD(arg0, s32 *, 0x9A0)  = 0;
    M2C_FIELD(arg0, s32 *, 0x9A4)  = 0;
    M2C_FIELD(arg0, s32 *, 0x9A8)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA40)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA44)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA48)  = 0;
    M2C_FIELD(arg0, s16 *, 0xA4C)  = 0;
    M2C_FIELD(arg0, s8 *, 0xA52)   = 0;
    M2C_FIELD(arg0, s8 *, 0xA53)   = 0;
    M2C_FIELD(arg0, s8 *, 0xA55)   = 0;
    M2C_FIELD(arg0, s8 *, 0xA56)   = 0x27;
    M2C_FIELD(arg0, s8 *, 0xA6B)   = 0;
    M2C_FIELD(arg0, s8 *, 0xA6C)   = 0;
    M2C_FIELD(arg0, s8 *, 0xA6D)   = 0;
    func_02046384(arg0 + 0x8C4, 0, 0xE);
    func_02046384(arg0 + 0x8D2, 0, 0xE);
    func_02046384(arg0 + 0x94C, 0, 4);
    func_02046384(arg0 + 0x954, 0, 4);
    func_02046384(arg0 + 0xA63, 0, 8);
    func_02046384(arg0 + 0x95C, 0, 0x40);
    func_02046384(arg0 + 0x946, 0, 4);
    func_02046384(arg0 + 0x940, 0, 5);
    func_02046384(arg0 + 0x8E0, 0, 0x2E);
    func_02046384(arg0 + 0x90E, 0, 0x2E);
    func_02046384(arg0 + 0x9AC, 0, 0x90);
    return arg0;
}
