/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207d194(M2C_UNK, M2C_UNK);

extern s32 data_0213e434;

void func_02083dc8(s32 arg0, s32 arg1) {
    s32 temp_ip;

    temp_ip                                        = M2C_FIELD(arg0, s32 *, 0x2144);
    M2C_FIELD(arg0, s32 *, 0x2144)                 = (s32) (temp_ip + 1);
    M2C_FIELD((arg0 + (temp_ip * 2)), s16 *, 0x10) = (s16) arg1;
    func_0207d194(data_0213e434 + 0x21DC, arg1);
    M2C_FIELD(arg0, s8 *, 0x2141) = 1;
}
