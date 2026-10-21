/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020235a0(M2C_UNK);
void func_02023bc8(M2C_UNK);
void func_020241ec(M2C_UNK);

void func_02024808(s32 arg0) {
    s16 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x3F) != 0) {
        if ((func_020235a0(arg0) != 5) && (func_020235a0(arg0) != 1)) {
            func_02023bc8(arg0);
        } else {
            M2C_FIELD(arg0, u8 *, 0x3F) = 0U;
            M2C_FIELD(arg0, u8 *, 0x3E) = 0U;
        }
    } else if (M2C_FIELD(arg0, u8 *, 0x3E) != 0) {
        if ((func_020235a0(arg0) != 5) && (func_020235a0(arg0) != 1)) {
            func_02023bc8(arg0);
        } else {
            M2C_FIELD(arg0, u8 *, 0x3F) = 0U;
            M2C_FIELD(arg0, u8 *, 0x3E) = 0U;
        }
    } else {
        func_020241ec(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x48);
    if ((s32) temp_r0 > 0) {
        M2C_FIELD(arg0, s16 *, 0x48) = (s16) (temp_r0 - 1);
    }
}
