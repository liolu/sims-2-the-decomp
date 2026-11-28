/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_01ffabc8(void *, M2C_UNK, M2C_UNK);
s32 func_01ffaf28(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_020117d8(void *, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK func_02018acc(M2C_UNK *);
M2C_UNK func_0201e6fc(M2C_UNK *);
void *func_02052364(s32, s32);
extern void *data_0213e440;
void func_0204183c(void *arg0, void *arg1) {
    u8 sp0[0x20];
    u8 idx;
    u8 idx2;
    void *var_r4;
    idx2 = ((u8 *) arg1)[0];
    idx  = ((u8 *) arg1)[1];
    if (idx2 == 0xFF) {
        var_r4 = *(void **) ((u8 *) data_0213e440 + 0xF8);
    } else {
        var_r4 = func_02052364(*(s32 *) ((u8 *) *(void **) ((u8 *) arg0 + 4) + 0x28) + (idx2 * 8), idx);
    }
    if (var_r4 == NULL) {
        return;
    }
    if (func_01ffaf28((u8 *) var_r4 + 0xE0, 0x18, 0) != 0) {
        func_01ffabc8((u8 *) var_r4 + 0xE0, 0x18, 1);
    }
    if (*(u16 *) ((u8 *) var_r4 + 0xC) != 2) {
        return;
    }
    if (func_01ffaf28((u8 *) var_r4 + 0xE0, 5, 0) != 0) {
        return;
    }
    func_0201e6fc((M2C_UNK *) sp0);
    func_020117d8(var_r4, 5, (M2C_UNK *) sp0, 0);
    func_02018acc((M2C_UNK *) sp0);
}
