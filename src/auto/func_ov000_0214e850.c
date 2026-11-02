/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046384(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02046b24(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_ov000_0214ebc4;

void *func_ov000_0214e850(void *arg0) {
    func_02046b24(arg0, 0x15, 0, 0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov000_0214ebc4;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s32 *, 0x118)  = 0;
    M2C_FIELD(arg0, s32 *, 0x11C)  = 0;
    M2C_FIELD(arg0, s32 *, 0xC9E0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC9E8) = 0;
    M2C_FIELD(arg0, s8 *, 0xC9F4)  = 0;
    M2C_FIELD(arg0, s8 *, 0xC9F5)  = 0;
    M2C_FIELD(arg0, s32 *, 0xCA1C) = 0;
    M2C_FIELD(arg0, s32 *, 0xCA20) = 0;
    M2C_FIELD(arg0, s32 *, 0xCA24) = 0;
    M2C_FIELD(arg0, s32 *, 0xCA28) = 0;
    func_02046384(arg0 + 0x28, 0, 0x30);
    func_02046384(arg0 + 0x58, 0, 0xC0);
    M2C_FIELD(arg0, s32 *, 0xCA38) = 0;
    return arg0;
}
