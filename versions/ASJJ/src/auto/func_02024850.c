/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020235e8(M2C_UNK);
void func_02023c10(M2C_UNK);
void func_02024234(M2C_UNK);

void func_02024850(s32 arg0) {
    s16 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x3F) != 0) {
        if ((func_020235e8(arg0) != 5) && (func_020235e8(arg0) != 1)) {
            func_02023c10(arg0);
        } else {
            M2C_FIELD(arg0, u8 *, 0x3F) = 0U;
            M2C_FIELD(arg0, u8 *, 0x3E) = 0U;
        }
    } else if (M2C_FIELD(arg0, u8 *, 0x3E) != 0) {
        if ((func_020235e8(arg0) != 5) && (func_020235e8(arg0) != 1)) {
            func_02023c10(arg0);
        } else {
            M2C_FIELD(arg0, u8 *, 0x3F) = 0U;
            M2C_FIELD(arg0, u8 *, 0x3E) = 0U;
        }
    } else {
        func_02024234(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x48);
    if ((s32) temp_r0 > 0) {
        M2C_FIELD(arg0, s16 *, 0x48) = (s16) (temp_r0 - 1);
    }
}
