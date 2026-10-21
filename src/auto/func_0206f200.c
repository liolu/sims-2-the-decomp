/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206e5b0(M2C_UNK);
void func_0206e6e4(M2C_UNK);

void func_0206f200(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = (s32) (arg1 - ((s32) M2C_FIELD(arg0, s32 *, 0x52C) >> 0xC)) >> 4;
    if (temp_r2 < 0) {
        return;
    }
    if (temp_r2 >= (s32) M2C_FIELD(arg0, s32 *, 0x510)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x514) = (s32) M2C_FIELD((arg0 + (temp_r2 * 4)), s32 *, 0x2D8);
    func_0206e5b0(arg0);
    func_0206e6e4(arg0);
}
